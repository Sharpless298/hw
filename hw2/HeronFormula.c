#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	printf("Please input the lengths of the three sides of the triangle(a,b,c): ");
	scanf("%d,%d,%d", &a, &b, &c);
	double s = (a+b+c)/2.0;
	printf("Area of the triangle = %.3lf.\n", sqrt(s*(s-a)*(s-b)*(s-c)));
}
