#include <stdio.h>
#include "TimeAdder.h"
int main(){
    Time t1, t2;
    printf("Please input t1 (hh:mm:ss): ");
    scanf("%d:%d:%d", &t1.hour, &t1.minute, &t1.second);
    printf("Please input t2 (hh:mm:ss): ");
    scanf("%d:%d:%d", &t2.hour, &t2.minute, &t2.second);
    printf("Result: ");
    addTime(t1, t2);
}
