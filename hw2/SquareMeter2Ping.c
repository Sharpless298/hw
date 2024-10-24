#include <stdio.h>

int main() {
	printf("Please input an area in square meters: ");
	double d;
	scanf("%lf", &d);
	printf("%lf square meters = %lf ping.\n", d, d*0.3025);
}
