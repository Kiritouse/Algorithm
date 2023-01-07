#include <stdio.h>
#include <string.h>
char s[102] = {0};
char sago[1001][101] = {0};//前一个空储存是第几个子串，后面一个空用来储存子串
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
	//我知道问题了，问题就是最外层循环的flag的值的问题
	 for(int i = 1;i<=num;i++){//遍历之前储存的第i个字符串,因为我们判断的前面的，现在判断的是第n个，所以判断的数量应该-1
	  if(strcmp(sago[i],temp)==0){//少用循环去判断，这种字符串有判断的函数，自己用循环去判断太容易出错！！！
	  	return true;
	  }
	 }
	 return false;
	 
}
void strsort(int n){
	memset(tempsave,0,sizeof(tempsave));
	for(int i = 1;i<=n-1;i++){//末尾是n-1
		for(int j =i+1;j<=n-1;j++){
		if(strcmp(sago[i],sago[j])>0){//strcmp原理，两个字符串依次相减，如果说某个字母相减为0，那么下一位相减，如果不为0,返还差值
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
		int l,r,len = strlen(s);//为了减少循环次数，我们用l 和 r储存每个窗口的边界
		int n =1;
		for(l=0,r=l+m-1;r<len;l++,r++){//两个指针指向窗口两端
		   //printf("当前判断的字符串为:");
		   //for(int i = l;i<=r;i++){
		   	//printf("%c",s[i]);
		   //}
		   //printf("\n");
			if(!isrepeat(l,r,n)){//判断两个窗口内的字符串是否在之前已经储存过了//这个写得有问题
			//printf("!该字符没有重复：");
			//for(int i = l;i<=r;i++){
				//printf("%c",s[i]);
			//}
			//printf("\n");
				for( int i = l,k=0 ;i<=r;i++,k++){//赋值程序
					sago[n][k] = s[i];//如果说没有重复的话，就这个字符串储存进tempsave数组里面
					//
				}
				//printf("sago[%d]为:",n);
				//for(int i = 0;i<m;i++) printf("%c",sago[n][i]);
				//printf("\n");
				n++;
			}	
		}
		//现在开始排序
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
	//askjdaskdhaskdjaslkjdaslkdjaslkdjasl //错误样例
	//asjdhas竟然不在?

}
