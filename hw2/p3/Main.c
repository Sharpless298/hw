#include <stdio.h>
 
#include "GetCountsOfSubString.h"
 
int main() {
    char srcstr[4097], substr[129];
    int count;
 
    printf("Enter the source string: ");
    scanf("%4096[^\n]", srcstr);
    printf("Enter the substring: ");
    scanf("%128s", substr);
 
    count = GetCountsOfSubString(srcstr, substr);
	
    switch (count) {
        case 0:
            printf("The needle \"%s\" does not appear in the haystack.\n", substr);
            break;
        case 1:
            printf("The needle \"%s\" appears %d time in the haystack.\n", substr, count);
            break;
        default:
            printf("The needle \"%s\" appears %d times in the haystack.\n", substr, count);
    }
 
    return 0;
}
