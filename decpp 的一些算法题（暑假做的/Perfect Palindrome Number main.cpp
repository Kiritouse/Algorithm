#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		int c = 0;
		int flag = 0;
		scanf("%d",&n);
		if(n%11!=0){
			printf("0\n");
			continue;
		}
		else {
			for(int i = 0;i<=n/11;i++){
				for(int j = 0;j<=n/1001;j++){
					for(int k = 0;k<=n/1111;k++){
						if(i*11+j*1001+k*1111==n){
							c = i+j+k;
							flag =1;
						}
					}
					if(flag){
						break;
					}
				}
				if(flag){
					break;
				}
			}
			printf("%d\n",c); 
			
			
			
			
		}
		
	}
	
} 
