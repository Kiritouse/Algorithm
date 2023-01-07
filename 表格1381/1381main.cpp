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
void prfmap(int c){//i是第几行上面的线,c是有多少列
		 	for(int  j = 0;j<c;j++){//j是第几列
		 	    prfjian(maxlen[j]+2);//打印减号同时打印加号
		 	}
		prfplus();//补齐末尾加号
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(p,0,sizeof(p));
		memset(maxlen,0,sizeof(maxlen));
		memset(vis,0,sizeof(vis));
		memset(lenarr,0,sizeof(lenarr));
		//这道题的我半天不过的原因就是没有初始化
	int r,c;
	char ch;
	scanf("%d %d",&r,&c);
	getchar();//这里加getchar()就没有问题
	for(int i = 0;i<c;i++){
		//getchar();这里加getchar()也会有问题
		//之后会退不出输入程序
		scanf("%c",&ch);
		if(ch=='l'){
			vis[i] = 1;//为什么此时i变为1了？,一定记得在前面加getchar();
			//是不是跳过了i=0的情况
		}//某一列的对齐情况
		 if(ch=='c'){
			vis[i] = 2;

		}
		 if(ch=='r'){
			vis[i] = 3;
		}
	}
	//每一列的对齐情况
	for(int i = 0;i<r;i++){
		for(int j = 0;j<c;j++){
			scanf("%s",p[i][j]);//这里为什么可以用%s可以呢
			//而不用那种可以输入带空格的字符串
			//注意我们这里是三维数组
			//第三个空代表一个单词，输入单词按空格后就代表
			//这一个单词输入完了
			int len = strlen(p[i][j]);
			lenarr[i][j] = len;//储存每个字符的长度
			if(len>=maxlen[j]){
				maxlen[j] = len;
			}
		}
	 }
     for(int i = 0;i<r;i++){
	 	prfmap(c);//打印前面的线
	 	printf("\n");
	 	for(int j  = 0;j<c;j++){
	 		prfshu();//打印竖线
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
			//根据字符长度和最大长度来确定空格	
			int left = (maxlen[j]+2-lenarr[i][j])/2;
		   //利用c语言向下取整的性质满足题意；
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
	
