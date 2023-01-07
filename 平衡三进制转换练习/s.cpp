#include <stdio.h>
#include <string.h>
__int64 pow2(__int64 x,int y){
	if(y==0) return 1;
	int temp = x;
	for(int i = 0;i<y-1;i++)
	x*=temp;
	return x;
}
char s[100000];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
       memset(s,0,sizeof(s));
		scanf(" %s",s);
		getchar();
		int len  = strlen(s);
		int num = 1;
		__int64 ans = 0;
		for(int i=0;i<len;i++){
			if(s[i]=='1'){
				num = 1;
			}
			if(s[i]=='0'){
				num = 0;
			}
			if(s[i]=='-')
			ans-= pow2(3,len-1-i);
			else ans+=num*pow2(3,len-1-i); 
		}
		printf("%I64d\n",ans);
	}
}
