#include <stdio.h>
#include <string.h>
int judge(int num,char ch[][200]){
	int Index01 = strlen(ch[0]);//��֪ʶ
	//��ά�����strlen�����ʲô ҪŪ�� 
	//������Ե�һ�н�������ɨ��
	//Ҳ����˵�����index01��ʵ���ǵ�0���ַ����ĳ��� 
	for(int i = 0;i<Index01;i++){//������һ���ַ�����ÿһ���ַ������� 
	  char ch2 = ch[0][i];//������һ���ַ����ĵ�i���ַ� 
	  for(int j = 1;j<num;j++){//����������ַ��� 
	    int templen = strlen(ch[j]);//��ǰ�������ַ����ĳ���,��һ���մ����У�������ʱ����ʡ�� 
		if(i==templen||ch2!=ch[j][i]){//���ߵ�����̵�����ľ�ͷ
		//���߷����˵�һ���ַ�����ĳһ���ַ�����������
		//j���ַ�����ĳһ���ַ� //ֱ�ӷ��ر������˵ڼ����ַ� 
			return i;
		} 
	  	
	  }   	
	}
	return Index01;//�����û�з��֣�˵��ȫ����һ������ôֱ�ӷ��ص�һ������ 
}

int main(){
	int t;
	int cnt  =1;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		char ch[n][200];
		for(int i = 0;i<n;i++){
			scanf("%s",ch[i]); 
		}
		printf("Case %d: ",cnt);
			int index = judge(n,ch);
			for(int i = 0;i<index;i++){
				printf("%c",ch[0][i]);
			}
			printf("\n");
			cnt++; 
		 
	}
} 
