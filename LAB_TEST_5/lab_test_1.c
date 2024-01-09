#include <stdio.h>
#include <stdlib.h>

struct TvSchedule {
	char progName[10];
	char rating [5];
	int duration;
};

struct TvProgram {
	char providerName[10];
	struct TvSchedule *schedule;
};

int main() {
	struct TvProgram tvProgram;
	
	printf("Please enter tv program provider name: ");
	scanf("%s", &tvProgram.providerName);
	
	int numOfTvProgram;
	printf("Please enter the number of tv program to add to the schedule: ");
	scanf("%d", &numOfTvProgram);
	
	tvProgram.schedule = (struct TvSchedule *)malloc(numOfTvProgram * sizeof(struct TvSchedule));
	
	printf("Please enter %d programs' details: \n", numOfTvProgram);
	int i;
	for(i = 0; i < numOfTvProgram; i++) {	
		printf("Program #%d name: ", i + 1);
		scanf("%s", &tvProgram.schedule[i].progName);
		
		printf("Program #%d rating: ", i + 1);
		scanf("%s", &tvProgram.schedule[i].rating);
		
		printf("Program #%d duration: ", i + 1);
		scanf("%d", &tvProgram.schedule[i].duration);
		
		while (tvProgram.schedule[i].duration < 0) {
			printf("Invalid Duration (-ve value is not acceptable), please re-enter: ");
			scanf("%d", &tvProgram.schedule[i].duration);
		};
	}
	
	printf("%-10s %-10s %-10s %-10s\n", "Program", "Name", "Rating", "Duration");
	for(i = 0; i < numOfTvProgram; i++) {
		printf("#%-9d %-10s %-10s %-10d\n", i + 1,tvProgram.schedule[i].progName, tvProgram.schedule[i].rating, tvProgram.schedule[i].duration);
	}
}