#include <stdio.h>

int main() {
	printf("Please input a coordinate(x,y): ");
	long long int x, y;
	scanf("%lld,%lld", &x, &y);
	(x<=200 && x>=-200 && y<=110 && y>=-110) ? printf("On the boundary\n") : printf("Outside\n");
}
