#include <stdio.h>

int main() {
	int a;
	printf("Please input a two-digit number (10-99): ");
	scanf("%d", &a);
	printf("The reversed number is %d%d!\n", a%10, a/10);
}
