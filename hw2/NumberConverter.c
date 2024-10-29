#include <stdio.h>

int main() {
	printf("Please input an integer: ");
	int x;
	scanf("%d", &x);
	printf("Decimal(%d) = Hexadecimal(%x).\n", x, x);
	printf("\n");
	printf("Please input an integer octal: ");
	int y;
	scanf("%o", &y);
	printf("Octal(%o) = Hexadecimal(%x).\n", y, y);
}
