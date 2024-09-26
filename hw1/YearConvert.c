#include <stdio.h>

int main() {
	int a;
	printf("Please input a year in ROC: ");
	scanf("%d", &a);
	printf("ROC %d is AD %d.\n", a, a+1911);
}
