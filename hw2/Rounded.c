#include <stdio.h>
#include <math.h>

int main() {
	printf("Floating point number: ");
	double d;
	scanf("%lf", &d);
	printf("The rounded value is %d.\n", (int)round(d));
}
