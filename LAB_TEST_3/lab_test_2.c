#include <stdio.h>

int departureTime;
int arrivalTime;

int getDepartureTime(void);
int calculateArrivalTime(int departureTime);
void printArrivalTime(int arrivalTime);

int main()
{
    char cont;
    do
    {
        printf("The flight from Kuala Lumpur to Kuching takes 1 hour and 45 minutes.\n");

        int departureTime = getDepartureTime();

        int arrivalTime = calculateArrivalTime(departureTime);

        printArrivalTime(arrivalTime);

        printf("Do you want to calculate another arrival time? (Y/N): ");
        fflush(stdin);
        scanf("%c", &cont);
    } while (cont == 'Y' || cont == 'y');

    return 0;
}

int getDepartureTime(void)
{
    printf("Enter the departure time form Kuala Limper:\n");

    int departureTimeHH;
    printf("HH: ");
    scanf("%d", &departureTimeHH);

    int departureTimeMM;
    printf("MM: ");
    scanf("%d", &departureTimeMM);

    int departureTime = departureTimeHH * 60 + departureTimeMM;
    return departureTime;
};

int calculateArrivalTime(int departureTime)
{
    int arrivalTime = departureTime + (1 * 60) + 45;
    return arrivalTime;
};

void printArrivalTime(int arrivalTime)
{

    int arrivalTimeHH = (arrivalTime / 60) % 24;
    int arrivalTimeMM = arrivalTime % 60;

    printf("Arrival time in Kuching: %.2d:%.2d\n", arrivalTimeHH, arrivalTimeMM);
};
