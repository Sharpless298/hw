#include <stdio.h>

int main() {
	long long int a, b, c;
	printf("Please input a triangle's 3 sides(a,b,c): ");
	scanf("%lld,%lld,%lld", &a, &b, &c);
	(a+b>c && a+c>b && b+c>a) ? printf("It's a triangle!\n") : printf("It's not a triangle\n");
}
