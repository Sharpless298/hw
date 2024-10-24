#include <stdio.h>

int main() {
	printf("Please input a uniform-invoice number: ");
	char a, b;
	int c;
	scanf("%c%c%d", &a, &b, &c);
	printf("The last 3 digits are %03d.\n", c%1000);
}
