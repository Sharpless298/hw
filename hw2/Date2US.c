#include <stdio.h>

int main() {
	printf("Date (UK): ");
	int a, b, c;
	scanf("%d/%d/%d", &a, &b, &c);
	printf("=Date (US): %02d/%02d/%04d\n", b, a, c);
}
