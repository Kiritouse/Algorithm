#include <stdio.h>
#include <string.h>
char p[22][22][22] = {0};
int maxlen[22]  ={0};
int vis[22] = {0};
int lenarr[22][22]  ={0};
void prfplus(){
		printf("+");
}
void prfjian(int len){
	   prfplus();
	    for(int i = 0;i<len;i++)
        printf("-");
}
void prfshu(){
	printf("|");
}
void prfspace(int len){//
	for(int i = 0;i<len;i++)
	printf(" ");
}
void prfmap(int c){//i�ǵڼ����������,c���ж�����
		 	for(int  j = 0;j<c;j++){//j�ǵڼ���
		 	    prfjian(maxlen[j]+2);//��ӡ����ͬʱ��ӡ�Ӻ�
		 	}
		prfplus();//����ĩβ�Ӻ�
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(p,0,sizeof(p));
		memset(maxlen,0,sizeof(maxlen));
		memset(vis,0,sizeof(vis));
		memset(lenarr,0,sizeof(lenarr));
		//�������Ұ��첻����ԭ�����û�г�ʼ��
	int r,c;
	char ch;
	scanf("%d %d",&r,&c);
	getchar();//�����getchar()��û������
	for(int i = 0;i<c;i++){
		//getchar();�����getchar()Ҳ��������
		//֮����˲����������
		scanf("%c",&ch);
		if(ch=='l'){
			vis[i] = 1;//Ϊʲô��ʱi��Ϊ1�ˣ�,һ���ǵ���ǰ���getchar();
			//�ǲ���������i=0�����
		}//ĳһ�еĶ������
		 if(ch=='c'){
			vis[i] = 2;

		}
		 if(ch=='r'){
			vis[i] = 3;
		}
	}
	//ÿһ�еĶ������
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++){
			scanf("%s",p[i][j]);//����Ϊʲô������%s������
			//���������ֿ���������ո���ַ���
			//ע��������������ά����
			//�������մ���һ�����ʣ����뵥�ʰ��ո��ʹ���
			//��һ��������������
			int len = strlen(p[i][j]);
			lenarr[i][j] = len;//����ÿ���ַ��ĳ���
			if(len>=maxlen[j]){
				maxlen[j] = len;
			}
		}
	 }
     for(int i = 0;i<r;i++){
	 	prfmap(c);//��ӡǰ�����
	 	printf("\n");
	 	for(int j  = 0;j<c;j++){
	 		prfshu();//��ӡ����
	    if(vis[j]==1){
			int left = 1;
			prfspace(left);
			for(int k = 0;k<lenarr[i][j];k++){
			 	printf("%c",p[i][j][k]);
			}
			int right = maxlen[j]+2-left-lenarr[i][j];
			prfspace(right);
		}
		if(vis[j]==2){
			//�����ַ����Ⱥ���󳤶���ȷ���ո�	
			int left = (maxlen[j]+2-lenarr[i][j])/2;
		   //����c��������ȡ���������������⣻
		    prfspace(left);
		   	for(int k = 0;k<lenarr[i][j];k++){
		   	 	printf("%c",p[i][j][k]);
		   	}
			int right = maxlen[j]+2-lenarr[i][j]-left;
			prfspace(right);
		 }
		if(vis[j]==3){
			int right = 1;
			int left = maxlen[j]+2-lenarr[i][j]-right;
			prfspace(left);
			for(int k = 0;k<lenarr[i][j];k++){
			 	printf("%c",p[i][j][k]);
			}
			prfspace(right);
		 }
	 	}
	 	prfshu();
	 	printf("\n");
	 }
	  prfmap(c);
	  printf("\n");
	}
}
	
