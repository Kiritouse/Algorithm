#include <stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int r,x,ytemp;
		double y ;
		int count = 0;
		scanf("%d",&r);
		for( x = -r+1;x<=r;x++){//注意从负数开始 
		//从-r前面一个开始，当循环到r的时候计数会+2，这样就把-r包含进去了 
			y = sqrt(r*r-x*x);
			ytemp = y;
			if(y-ytemp==0){
				count+=2;
			}
			
		}
		printf("%d\n",count);
    }
	
}
