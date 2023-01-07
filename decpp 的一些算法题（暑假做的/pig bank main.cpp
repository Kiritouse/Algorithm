#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int a,b,c;
		int day = 0;
		scanf("%d %d %d",&a,&b,&c);
		if(a<c){
		while(a<c){
			a = a+b;
			day++;
		}
	   }
	   else 
	   day = 0;
	   printf("%d\n",day);
	
	}
	
}
