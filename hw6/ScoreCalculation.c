#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ary[10];

int cmp(const void *a, const void *b) {
	return *(int*)a - *(int*)b;
}

int main() {
	printf("Enter the scores: ");
	int f = 0, highest = 0, lowest = 101, ok = 1;
	for(int i=0; i<10; i++) {
		scanf("%d", &ary[i]);
		if(ary[i] == -1) ary[i] = 0;
		if(ary[i] == -2) ary[i] = 0, f = 1;
		if(ary[i] > highest) highest = ary[i];
		if(ary[i] < lowest) lowest = ary[i];
		if(ary[i]>100 || ary[i]<-2) ok = 0;
	}
	if(!ok) {
		printf("Invalid score entered!\n");
		return 0;
	}
	qsort(ary, 10, sizeof(int), cmp);

	int score;
	if(f) 
		score = (int)round((ary[0]*1.0+ary[1]+ary[2])/3);
	else {
		double sum = 0;
		for(int i=0; i<10; i++)
			sum += ary[i]*1.0;
		score = (int)round(sum/10.0);
		if(score >= 90) score += 5;
		if(score > 100) score = 100;
	}

	printf("homework score: %d\n", score);
	printf("highest: %d\n", highest);
	printf("lowest: %d\n", lowest);
}
