#include <stdio.h>

int main() {
	printf("How many chickens are in the cage? ");
	int a;
	scanf("%d", &a);
	printf("How many rabbits are in the cage? ");
	int b;
	scanf("%d", &b);
	printf("There are %d feet in the cage.\n", 2*a+b*4);
}
