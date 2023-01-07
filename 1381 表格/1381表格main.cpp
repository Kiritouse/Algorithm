#include <stdio.h>
#include <string.h>
char *p[11][11];
int main(){
	int r,c;
	scanf("%d %d",&r,&c);
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++){
			scanf("%s",p[i][j]);
		}
	}
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++){
			int len = strlen(p[i][j]);
			for(int k = 0;k<len;k++){
				printf("%c",*p[i][j]);
			}
		}
	}
}
