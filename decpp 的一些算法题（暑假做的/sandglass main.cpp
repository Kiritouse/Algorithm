#include <stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int l;//ָ��l�������ƺ���Ĵ�ӡ 
		for(int i = 0;i<n;i++){
			l = 0; 
			if(i==0||i==n-1){
				for(int j = 0;j<n-1;j++){
					printf("%-");
				}
			}
		
			else{
				//����\ǰ��Ŀո�
				for(int j = 0;j<i-1;j++){
					printf(" ");
				}
				l++//����ָ�����ұ��ƶ�һλ; 
				//�������\
				if(i==1){
					printf("\\"); 
					for(int j = 0;j<i-2;j++){
						printf(" ");
					}
					printf("/");
					printf("\n");
				}
				else {
					for(int j = 0;j<i-2;j++){
						printf(" ");
					}
					printf("\\"); 
					for(int j = 0;j<n-1-i*2;j++){
						printf("*");//����*�Ĵ�ӡ 
					}
					printf("/");
					printf("\n");
				}
				 
			}
		}
		
	}
	
} 
