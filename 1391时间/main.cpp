#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int hh,mm,ss;
		int n;
		scanf("%d",&n);
		ss=n%60;
		mm=n/60%60;
		hh=n/3600;
		//��ʵ����60Ϊһ������
		while(ss>=60){	//��һλ
			mm++;
		 }
		
		while(mm>=60){
	 	   hh++;
	 	   printf("yes\n");
		}
		if(hh<10){
			printf("0%d:",hh);
		}
		else{
			printf("%d:",hh);
		}
		if(mm<10){
			printf("0%d:",mm);
		}
		else{
			printf("%d:",mm);
		}
		if(ss<10){
			printf("0%d\n",ss);
		}
		else{
			printf("%d\n",ss);
		}
		
		
		
	}
}
