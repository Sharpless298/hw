#include <stdio.h>

int main() {
	printf("Please input an IP address: ");
	int a, b, c, d;
	scanf("%d.%d.%d.%d", &a, &b, &c, &d);
	(a>=0 && a<=255 && b>=0 && b<=255 && c>=0 && c<=255 && d>=0 && d<=255) ? printf("The IP address %d.%d.%d.%d is valid.\n", a, b, c, d) : printf("The IP address %d.%d.%d.%d is invalid.\n", a, b, c, d);
}
