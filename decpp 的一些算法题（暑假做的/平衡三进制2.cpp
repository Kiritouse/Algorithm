#include <string.h>
#include <stdio.h>
int pow(int x,int y){
	int temp = x; 
	if(y!=0){
	for(int i = 0 ;i<y-1;i++){
		x = x*temp;
	}
	return x; 
}
	else
	return 1;
}

int main(int argc, char** argv) {
	int k;
	scanf("%d",&k);
	while(k--){
		char s[11];
		scanf("%s",&s);
		int sum  = 0;
		int len = strlen(s);
		//��ʼ�����ַ��� 
		for(int i = 0;i<len;i++){
			if(s[i]!='-')
			sum = sum+(s[i]-'0')*pow(3,len-1-i);//Ŀǰ��������ǿ���
			//ʲôʱ���ʲôʱ���;
			else{
			s[i] = '1';
			sum = sum - (s[i]-'0')*pow(3,len-1-i);	
		}
			
	}
		printf("%d\n",sum);

	} 
	
	return 0;
}
