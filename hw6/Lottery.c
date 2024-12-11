#include <stdio.h>
#include <string.h>

void swap(int a, int b, char c[100][100]) {
	char t[100];
	strcpy(t, c[a]);
	strcpy(c[a], c[b]);
	strcpy(c[b], t);
}

int check(int a, int b, char c[100][100]) {
	return strcmp(c[a], c[b]) > 0;
}

int main() {
	char a[5][100];
	char b[100][100];
	for(int i=0; i<5; i++)
		scanf("%s", a[i]);
	for(int i=0; i<100; i++)
		scanf("%s", b[i]);

	int len[8] = {8, 8, 8, 7, 6, 5, 4, 3};
	int c[8] = {1000000, 200000, 20000, 40000, 10000, 4000, 1000, 200};
	for(int i=0; i<99; i++)
		for(int j=0; j<99-i; j++)
			if(check(j, j+1, b)) swap(j, j+1, b); 
	
	int vis[100];
	memset(vis, 0, sizeof(vis));

	int len2 = 0;
	for(int i=0; i<8; i++) {
		for(int j=0; j<100; j++) {
			if(vis[j]) continue;
			for(int k=0; k<5; k++) {
				int ok = 1;
				for(int d=0; d<len[i]; d++)
					if(a[k][8-d-1] != b[j][10-d-1]) ok = 0;
				if(ok) {
					vis[j] = 1;
					printf("%s ", b[j]);
					if(!len2) 
						len2 = printf("%d", c[i]);
					else 
						printf("%*d", len2, c[i]);
					printf("\n");
				}
			}
		}
	}
}
