#include <stdio.h>
#include "TimeAdder.h"

void addTime(Time t1, Time t2) {
	if (t1.second + t2.second >= 60) t2.minute++, t1.second -= 60;
	if (t1.minute + t2.minute >= 60) t2.hour++, t1.minute -= 60;
	Time t3 = {t1.hour + t2.hour, t1.minute + t2.minute, t1.second + t2.second};
	
	printf("%02d:%02d:%02d\n", t3.hour, t3.minute, t3.second);
}
