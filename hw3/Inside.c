#include <stdio.h>

int main() {
	printf("Please input a coordinate(x,y): ");
	long long int x, y;
	scanf("%lld,%lld", &x, &y);
	if(x<200LL && x>-200LL && y<110LL && y>-110LL) {
		printf("Inside\n");
		return 0;
	}
	(x<=200LL && x>=-200LL && y<=110LL && y>=-110LL) ? printf("On the boundary\n") : printf("Outside\n");
}
