#include <stdio.h>
#include <string.h>
char s[102] = {0};
char sago[1001][101] = {0};//ǰһ���մ����ǵڼ����Ӵ�������һ�������������Ӵ�
char tempsave[1001] = {0};
char temp[103] = {0};
bool isrepeat(int l,int r,int n){
	memset(temp,0,sizeof(temp));
	int c = 0;
	for(int i = l;i<=r;i++){
		temp[c++] = s[i];
	}
	int num;
	if(n==1){
	  num = n;
	}
	else num = n-1;
	//��֪�������ˣ�������������ѭ����flag��ֵ������
	 for(int i = 1;i<=num;i++){//����֮ǰ����ĵ�i���ַ���,��Ϊ�����жϵ�ǰ��ģ������жϵ��ǵ�n���������жϵ�����Ӧ��-1
	  if(strcmp(sago[i],temp)==0){//����ѭ��ȥ�жϣ������ַ������жϵĺ������Լ���ѭ��ȥ�ж�̫���׳�������
	  	return true;
	  }
	 }
	 return false;
	 
}
void strsort(int n){
	memset(tempsave,0,sizeof(tempsave));
	for(int i = 1;i<=n-1;i++){//ĩβ��n-1
		for(int j =i+1;j<=n-1;j++){
		if(strcmp(sago[i],sago[j])>0){//strcmpԭ�������ַ���������������˵ĳ����ĸ���Ϊ0����ô��һλ����������Ϊ0,������ֵ
		//if sago[i]>sago[j],swap
		strcpy(tempsave,sago[i]);  
		strcpy(sago[i],sago[j]); 
		strcpy(sago[j],tempsave);
		 }
		}
	}
}

int main(){
	int k;
	scanf("%d",&k);
	while(k--){
		memset(s,0,sizeof(s));
		memset(sago,0,sizeof(sago));
		memset(tempsave,0,sizeof(tempsave));
		int m;
		scanf("%d",&m);
		scanf("%s",s);
		int l,r,len = strlen(s);//Ϊ�˼���ѭ��������������l �� r����ÿ�����ڵı߽�
		int n =1;
		for(l=0,r=l+m-1;r<len;l++,r++){//����ָ��ָ�򴰿�����
		   //printf("��ǰ�жϵ��ַ���Ϊ:");
		   //for(int i = l;i<=r;i++){
		   	//printf("%c",s[i]);
		   //}
		   //printf("\n");
			if(!isrepeat(l,r,n)){//�ж����������ڵ��ַ����Ƿ���֮ǰ�Ѿ��������//���д��������
			//printf("!���ַ�û���ظ���");
			//for(int i = l;i<=r;i++){
				//printf("%c",s[i]);
			//}
			//printf("\n");
				for( int i = l,k=0 ;i<=r;i++,k++){//��ֵ����
					sago[n][k] = s[i];//���˵û���ظ��Ļ���������ַ��������tempsave��������
					//
				}
				//printf("sago[%d]Ϊ:",n);
				//for(int i = 0;i<m;i++) printf("%c",sago[n][i]);
				//printf("\n");
				n++;
			}	
		}
		//���ڿ�ʼ����
	   strsort(n);
		for(int i = 1;i<=n-1;i++){
			for(int j = 0;j<m;j++){
				printf("%c",sago[i][j]);
			}
			printf("\n");
		}
		
		printf("\n");
	}
	//7
	//askjdaskdhaskdjaslkjdaslkdjaslkdjasl //��������
	//asjdhas��Ȼ����?

}
