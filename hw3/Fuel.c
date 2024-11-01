#include <stdio.h>
#include <math.h>

int main() {
	printf("How much is the fuel left(unit: ton): ");
	int a;
	scanf("%d", &a);
	if(a>3700 || a<0) {
		printf("ERROR!\n");
		return 0;
	}
	int x = (int)round(a/3700.0*100.0);
	printf("Fuel remains: %d%%\n", x);
	if(x >= 75) printf("Fuel is sufficient, no need to worry.\n");
	else if(x >= 50) printf("More than 50%% of fuel remains, you can continue the journey with peace of mind.\n");
	else if(x >= 25) printf("Less than half of the fuel remains, pay attention to endurance.\n");
	else if(x >= 10) printf("Less than 25%% of fuel remains, it's recommended to start looking for refueling points.\n");
	else printf("Less than 10%% of fuel remains, please find fuel as soon as possible!\n");
}
