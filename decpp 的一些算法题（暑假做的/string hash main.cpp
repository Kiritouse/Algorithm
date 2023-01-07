#include <stdio.h>
#include <string.h>
__int64 pow(__int64 x,__int64 y){
	if(y==0){
		x = 1;
	}
	else{
		__int64 temp = x;
		for(__int64 i = 0;i<y-1;i++){
			x*=temp;
		}
	}
	return x;
} 
int main(){
	char c[1011];
	while(scanf("%s",&c)!=EOF){
		getchar();
		__int64 len = strlen(c);
		__int64 p=1000000007;
		__int64 hash = (pow(26,len))%p;
		for(int i = 0;i<len;i++){
			hash += ((c[i]-'a')*pow(26,len-1-i))%p; 
			hash %=p; 
		}
		
		printf("%d\n",hash%p);
	
	} 
}
