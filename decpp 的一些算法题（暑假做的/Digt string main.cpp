#include <stdio.h>
#include <string.h>
 
__int64 pow(__int64 x,__int64 y){
	if(y==1){
		return 1;
	}
	else{
		__int64 temp = x;
		for(__int64 i = 0;i<y-1;i++){
			x*=temp;
		}
	}
}
int str_to_num(char c1){
	
}

int main(){
	int n;
	char c[32];
	while(scanf("%s %d",&c,&n)){
		int flag  = 0,jinzhi; 
	      int max = 0; 
	    int len = strlen(c); 
	    int sum = 0;
	    int num =0;
	    int i;
		for( i =0;i<len;i++){
			//�ҵ������ַ���ȷ������
			if(c[i]>max){
				max = c[i];//�ҵ���������, 
			} 
		 
		}
		if(max>=65&& max<=70 ){//���������A��F֮��
		 jinzhi  = max-54; 
		}
		else{}//ȷ���˽�����
			jinzhi = max-'0'+1;
		}
		for(int i = 0;i<len;i++){
			if(jinzhi<=10){//ʮ�������¾Ͳ��õ��ú��� 
				sum+=(c[i]-'0')*pow(jinzhi,len-1-i); 
			}
			else{
				if(!(c[i]>='A'&&c[i]<='Z'){
					sum+=(c[i]-'0')*pow(jinzhi,len-1-i);
					//��������ַ�A��F��ô�������� 
				}
				else{
				  sum+=(str_to_num(c[i]))*pow(jinzhi,len-1-i);	
				} 
			}
		}
		printf("%d\n",sum);
	 }
	 

