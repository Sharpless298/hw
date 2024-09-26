#include <stdio.h>

int main() {
	printf("Please input the current year: ");
	int a;
	scanf("%d", &a);
	printf("Please input the year of your birthday: ");
	int b;
	scanf("%d", &b);
	printf("You are %d years old.\n", a-b);
}
