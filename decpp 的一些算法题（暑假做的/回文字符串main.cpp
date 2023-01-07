#include <stdio.h>
#include <string.h>
int main(){
	int k;
	scanf("%d",&k);
	while(k--){
	char ch[1001] = {0};
	int arr[27] = {0},flag[27] = {0};//记录每个字母出现的次数 
	scanf("%s",&ch);
	int len = strlen(ch);
	int count = 0;
	int flag2;
	//这种题不是让你真的去枚举出来能否为回文，主要是抓住回文的特征
	//只是问你能不能构成一个回文串 
	//思路分析：如果说要出现回文串
	//也就是说如果总长度为奇数，除了一个数可以为奇数以外 
	// 其他任何字母必须为偶数，且对数相同
	//如果总长度为偶数的话，那么所有字母出现次数都必须为偶数，且对数相同
	if(len%2==0){
	for(int i = 0;i<len;i++){
		arr[ch[i]-'a']++;//记录了所有字母出现次数 
	}
	for(int i = 0;i<len;i++ )
	    if(arr[i]!=0&&arr[i]%2==0){
	    	flag[count] = arr[i];
			count++; //去掉中间所有0，将所有有数的下标移动到一起 
	    }
	}
	int n = 0; 
	while(flag[n]!=0){
        if(flag[n] == flag[n+1]){
        flag2 = 1;
        } 
	}
}
} 
