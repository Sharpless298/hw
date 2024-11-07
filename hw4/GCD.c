#include <stdio.h>

int gcd(int a, int b) {
	return b ? gcd(b, a%b) : a;
}

int main() {
	printf("Please input two numbers(a,b): ");
	int a, b;
	scanf("%d,%d", &a, &b);	
	if(a<=0 || b<=0 || a>10000 || b>10000) {
		printf("Error!\n");
		return 0;
	}
	printf("GCD(%d, %d) = %d", a, b, gcd(a, b));
}
