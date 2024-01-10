#include <stdio.h>

struct Fruit {
	char name[15];
	char expiryDate[15];
	float price;
	float weight;
};

int main() {
	struct Fruit fruit[3];
	
	printf("Please enter 3 fruits details: \n");
	for (int i = 0; i < 3; i++) {
		printf("Fruit #%d name: ", i + 1);
		scanf("%s", fruit[i].name);
		
		printf("Fruit #%d Expiry Date: ", i + 1);
		scanf("%s", fruit[i].expiryDate);
		
		printf("Fruit #%d price(per kg): ", i + 1);
		scanf("%f", &fruit[i].price);
		
		printf("Fruit #%d weight(kg): ", i + 1);
		scanf("%f", &fruit[i].weight);
	}
	
	float totalPrice = 0;
	float averagePrice = 0;
	printf("Your fuits details are as follow: \n");
	for (int i = 0; i < 3; i++) {
		printf("Fruit #%d:\n", i + 1);
		
		printf("Expiry Date: %s\n", fruit[i].expiryDate);
		printf("Price per kg: %.2f\n", fruit[i].price);
		printf("Weight(kg): %.2f\n", fruit[i].weight);
		averagePrice += fruit[i].price;
		
		float total = fruit[i].price * fruit[i].weight;
		totalPrice += total;
		printf("Total price: RM%.2f\n", total);
	}
	averagePrice /= 3;
	
	printf("The overall total price = RM%.2f\n", totalPrice);
	printf("The average price per kg = RM%.2f\n", averagePrice);
}