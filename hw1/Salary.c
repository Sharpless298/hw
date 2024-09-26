#include <stdio.h>

int main() {
	printf("How much is the hourly payment? ");
	int a;
	scanf("%d", &a);
	printf("How much hours did you work in the last month? ");
	int b;
	scanf("%d", &b);
	printf("Your salary is %d.\n", a*b);
}
