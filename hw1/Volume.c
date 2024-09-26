#include <stdio.h>

int main() {
	int a, b, c;
	printf("Please input the length: ");
	scanf("%d", &a);
	printf("Please input the width: ");
	scanf("%d", &b);
	printf("Please input the height: ");
	scanf("%d", &c);
	printf("The volume is %dx%dx%d = %d.", a, b, c, a*b*c);
}
