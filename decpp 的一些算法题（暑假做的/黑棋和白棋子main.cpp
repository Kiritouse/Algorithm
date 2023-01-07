#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		getchar(); 
		char c[16][16];
		for(int i  = 0;i<n;i++){
		    for(int j =0;j<n;j++){
		    	scanf(" %c",c[i][j]);
		    }
			getchar(); 
		} 
		for(int i =0;i<n;i++){
			for(int j =0;j<n;j++){
				printf("%c",c[i][j]);
			}
			printf("\n"); 
		}
	} 
	
} 
