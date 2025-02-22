#include "Float.h"

void decompose(double d, int *i_part, double *f_part) {
	*i_part = (int)d;
	*f_part = d-(double)*i_part;
}
