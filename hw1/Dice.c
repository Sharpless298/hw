#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	printf("Throwing a dice.... %d.\n", rand()%6+1);
}
