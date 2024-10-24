#include <stdio.h>
#include <math.h>

int main() {
	printf("Please input total duration of the call(HH:MM:SS): ");
	int a, b, c;
	scanf("%d:%d:%d", &a, &b, &c);
	double ans = floor((a*3600*0.045+b*60*0.045+c*0.045)*10)/10.0;
	printf("The total duration of your call is %02d:%02d:%02d, and your phone bill is %0.1lf dollars.\n", a, b, c, ans);
}
