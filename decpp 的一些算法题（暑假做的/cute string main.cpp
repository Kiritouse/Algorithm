#include <stdio.h>
#include <string.h>

int main(){
	char c[201];
	
	while(scanf("%[^\n]",c)!=EOF){//%s这样子写，如果中间输入空格的话会自动当成下次输入
	//比如abcde abc//第一次输入的len就是5了
	getchar();//如果直接用那个读取直到回车结束的话，如果不用getchar会一直读取
	//因为回车也是一种字符 
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
