#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	printf("Throwing two dice...\n");
	
	int a = rand()%6+1, b = rand()%6+1;
	printf("One dice shows %d and another dice shows %d.\n", a, b);
	printf("The score is %d + %d = %d.\n", a, b, a+b);
}
