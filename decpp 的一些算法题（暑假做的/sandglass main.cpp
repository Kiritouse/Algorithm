#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int l;//指针l用来控制横向的打印 
		for(int i = 0;i<n;i++){
			l = 0; 
			if(i==0||i==n-1){
				for(int j = 0;j<n-1;j++){
					printf("%-");
				}
			}
		
			else{
				//控制\前面的空格
				for(int j = 0;j<i-1;j++){
					printf(" ");
				}
				l++//横向指针向右边移动一位; 
				//控制左边\
				if(i==1){
					printf("\\"); 
					for(int j = 0;j<i-2;j++){
						printf(" ");
					}
					printf("/");
					printf("\n");
				}
				else {
					for(int j = 0;j<i-2;j++){
						printf(" ");
					}
					printf("\\"); 
					for(int j = 0;j<n-1-i*2;j++){
						printf("*");//控制*的打印 
					}
					printf("/");
					printf("\n");
				}
				 
			}
		}
		
	}
	
} 
