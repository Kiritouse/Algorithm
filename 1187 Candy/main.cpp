#include <stdio.h>
const int p = 1000000007;
int pow(int x,int y){
	if(y==0) return 1;
	int temp = x;
	for(int i = 0;i<y-1;i++){
		x = x%p*temp%p;
	}
	return x;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int sum = 3*(n-1)*pow(2,n-2)%p;
		printf("%d\n",sum);
	}
	
}
