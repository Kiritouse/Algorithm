#include <stdio.h>
#include <string.h>
int judge(int num,char ch[][200]){
	int Index01 = strlen(ch[0]);//新知识
	//二维数组的strlen求的是什么 要弄清 
	//这里就以第一列进行纵向扫描
	//也就是说这里的index01其实就是第0个字符串的长度 
	for(int i = 0;i<Index01;i++){//遍历第一个字符串的每一个字符（横向 
	  char ch2 = ch[0][i];//遍历第一个字符串的第i个字符 
	  for(int j = 1;j<num;j++){//遍历后面的字符串 
	    int templen = strlen(ch[j]);//当前被遍历字符串的长度,第一个空代表行，不用列时可以省略 
		if(i==templen||ch2!=ch[j][i]){//当走到了最短的数组的尽头
		//或者发现了第一个字符串的某一个字符不等于下面
		//j个字符串的某一个字符 //直接返回遍历到了第几个字符 
			return i;
		} 
	  	
	  }   	
	}
	return Index01;//如果都没有发现，说明全部都一样，那么直接返回第一个长度 
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
