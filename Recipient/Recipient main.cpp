#include <stdio.h>
const int p = 1000000007;
__int64 d[1001] = {0,0,1};
__int64 f[1001][1001]  ={0};
int n = 1007;
//这次来递归来求
   void dp(){
	if(n==2){
		return;
	}
	d[n] = (n-1)*(d[n-2]+d[n-1])%p;
	n--;
	dp();
   }

int main(){
	for(int i = 3; i < 1001; i ++)
	d[i] = (i - 1) * (d[i-1] + d[i-2]) % p;
	
	
	f[0][0] = 1;
	for(int i = 1;i<1001;i++){
		f[i][0] = 1;
		f[i][i] = 1;
		for(int j = 1;j<=i;j++){
			f[i][j] = (f[i-1][j]+f[i-1][j-1])%p;
		}
	}
      
    
	  
	

	int n,k;
	while(scanf("%d %d",&n,&k)!=EOF){
		if(k==0&&n!=0){
			printf("1\n");
			continue;
		}
		else if(k==0&&n==0){
			continue;
		}
		else{
		
			printf("%I64d\n",d[k]*f[n][k]%p);
			}
		
		
	}

}
