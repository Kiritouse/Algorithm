#include <stdio.h>
#include <string.h>
int main(){
	int k;
	scanf("%d",&k);
	while(k--){
	    int tempsave = 0;
	    int inputnum ,i  = 0,j=0;
	    scanf("%d",&inputnum);
	    char str[11] = {0}; 
	    while(1){
	    	tempsave = inputnum%3;
	    	inputnum/=3;
	    	str[i] = tempsave +'0';
	    	i++;//����ת��Ϊ���������� 
	    }
	     int len  = strlen(str); 
	    while(1)//��ʱ��֪��ʲôʱ���Ƴ�ѭ��
		{
			if(str[j]=='2'){
				str[j]='-';
				str[j+1]++;//���˵Ϊ2�Ļ���ǰ��+1 
			}
			if(str[j] = '3'){//���Ϊ3�Ļ���Ҫʹ���Լ���Ϊ0��
			//ͬʱ����һλ����һλ1���ұ��ֺ�����ַ������ֲ���
			str[j] = '0';
			 
			} 
		} 
	}
} 
