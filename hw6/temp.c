#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int match(const char *a, const char *num, int length) {
    	for (int i = 0; i < length; i++) {
        	if (a[8 - length + i] != num[10 - length + i]) {
            		return 0; 
        	}
    	}
    	return 1; 
}

int compare(const void*a, const void*b){
	return strcmp((const char*)a, (const char*)b);
}

int main() {
    	char a[5][8];  
	char num[100][11]; 

    	for (int i = 0; i < 5; i++) {
        	scanf("%s", a[i]);
    	}

    	for (int i = 0; i < 100; i++) {
        	scanf("%s", num[i]);
    	}

    	int prize[] = {10000000, 2000000, 200000, 40000, 10000, 4000, 1000, 200};
    	int prize_length[] = {8, 8, 8, 7, 6, 5, 4, 3};

	int vis[100] = {0};
    	int win[100] = {0};
    	int win_prize[100] = {0};  

	qsort(num, 100, sizeof(num[0]), compare);
	
	char number[100][9]={0};
	for (int i = 0; i < 100; i++) {
		memmove(number[i], num[i]+2, 9);
	}
	
	for (int i = 0; i < 100; i++) {
		if (!vis[i] && number[i] == a[0]) {
			vis[i] = 1;
			win[i] = i;
			win_prize[i] = 10000000;
		}
	}
	

	for (int i = 0; i < 100; i++) {
		if (!vis[i] && number[i] == a[1]) {
			vis[i] = 1;
			win[i] = i;
			win_prize[i] = 2000000;
		}
	}
	
    	for (int i = 0; i < 100; i++) {
        	for (int j = 2; j < 5; j++) {
            		for (int k = 0; k < 8; k++) {
                		if (!vis[i] && match(a[j], num[i], prize_length[k])) {
					vis[i] = 1;
                    			win[i] = i;  
                    			win_prize[i] = prize[k];
                		}
            		}
        	}
    	}

    	for (int i = 0; i < 100 - 1; i++) {
        	for (int j = 0; j < 100 - i - 1; j++) {
            		if (win_prize[j] < win_prize[j + 1]) {
				
                		int temp_prize = win_prize[j];
                		win_prize[j] = win_prize[j + 1];
                		win_prize[j + 1] = temp_prize;

                		int temp_index = win[j];
                		win[j] = win[j + 1];
                		win[j + 1] = temp_index;
            		}
        	}
    	}

    	for (int i = 0; i < 100; i++) {
        	if (win_prize[i] != 0) {
            		printf("%s%9d\n", num[win[i]], win_prize[i]);
        	}
    	}

   	return 0;
}
