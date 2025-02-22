#include "Round.h"

void rounding(double *x, int p) {
	double t = 1;
	for(int i=0; i<p; i++)
		t *= 10.0;

	int tt = (*x*t+0.5);
	*x = tt*1.0/t;
}
