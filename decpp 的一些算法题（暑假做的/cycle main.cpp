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
		for( x = -r+1;x<=r;x++){//ע��Ӹ�����ʼ 
		//��-rǰ��һ����ʼ����ѭ����r��ʱ�������+2�������Ͱ�-r������ȥ�� 
			y = sqrt(r*r-x*x);
			ytemp = y;
			if(y-ytemp==0){
				count+=2;
			}
			
		}
		printf("%d\n",count);
    }
	
}
