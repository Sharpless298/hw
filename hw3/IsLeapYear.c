#include <stdio.h>

int main() {
	printf("Please input a year: ");
	int a;
	scanf("%d", &a);
	if(a <= 0) {
		printf("ERROR!\n");
		return 0;
	}
	(!(a%400) || (!(a%4) && a%100)) ? printf("Leap Year\n") : printf("Not a Leap Year\n");
}
