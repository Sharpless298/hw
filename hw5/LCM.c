#include <stdio.h>

long long gcd(long long a, long long b) {
	return b ? gcd(b, a%b) : a;
}

int main() {
	printf("Please input two numbers(a,b): ");
	long long a, b;
	scanf("%lld,%lld", &a, &b);
	printf("LCM(%lld, %lld) = %lld\n", a, b, a/gcd(a, b)*b);
}
