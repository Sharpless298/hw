#include <stdio.h>

int main() {
	int a, b;
	printf("Please input the price: ");
	scanf("%d", &a);
	printf("Please input the quantity: ");
	scanf("%d", &b);
	printf("The total price is NT$%d.\n", a*b);
}
