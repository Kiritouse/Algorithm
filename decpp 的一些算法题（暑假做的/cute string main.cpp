#include <stdio.h>
#include <string.h>

int main(){
	char c[201];
	
	while(scanf("%[^\n]",c)!=EOF){//%s������д������м�����ո�Ļ����Զ������´�����
	//����abcde abc//��һ�������len����5��
	getchar();//���ֱ�����Ǹ���ȡֱ���س������Ļ����������getchar��һֱ��ȡ
	//��Ϊ�س�Ҳ��һ���ַ� 
	int  wordcount = 0;
	int zimucount = 0;
	int countzimu[27] = {0};
		int len = strlen(c);
		for(int i =0;i<len;i++){
				if(c[i]>='A'&&c[i]<='Z'){
					c[i] = c[i]+32;
				}
				countzimu[c[i]-'a']++;
			    if(c[i]==' '){
				  wordcount++;
			  }  
			
		}
		
		for(int i =0;i<27;i++){
			if(countzimu[i]!=0){
				zimucount++;
			} 
		}
		if(wordcount>9){
			printf("No\n");
			continue;
		}
		if(zimucount>10){
			printf("No\n");
			continue; 
		}
		printf("Yes\n");
		 
	
		
		
	}
}
