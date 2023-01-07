#include <stdio.h>
__int64 gcd(__int64 x,__int64 y){
	return y?gcd(y,x%y):x;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		__int64 a,b;
		scanf("%I64d %I64d",&a,&b); 
		__int64 fenzi2 = 0,fenmu2 = 1;
		__int64 fenzi1 = 1,fenmu1 = a;
		__int64 GCD; 
		for(int i =a;i<=b;i++){
			fenzi1 = fenzi1*fenmu2+fenzi2*fenmu1;
			fenmu1 = fenmu1*fenmu2;
			GCD=gcd(fenzi1,fenmu1);
			fenzi1/=GCD;
			fenmu1/=GCD;
			fenzi2 = 1;
			fenmu2 = i+1;
		}
		printf("%I64d/%I64d\n",fenzi1,fenmu1);
	} 
}
