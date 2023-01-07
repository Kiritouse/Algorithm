#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int pow(int x,int y ){// 
	int temp = x;
	int i;
	if(y!=0){
		for( i =0;i<y-1;i++)
		{
			x = x*temp;
		}
		return x;
	}
	else 
	  return 1;
}
int main()
{
    char a[20];//定义一个字符串，其包含20个字符
    while(scanf("%s",&a))//数字以字符串的形式存储
    {
        if(a[0]=='0')//输入为0时，直接结束循环
        break;
        int n;//定义n
        n=strlen(a);//n为长度数值。strlen()函数作用：获取字符串真实长度。头文件为#include <string.h>
        int x=atoi(a);//atoi()函数作用：该函数返回转换后的长整数，如果没有执行有效的转换，则返回零。头文件为<stdlib.h>
        int i,m=0,s;
        for(i=0;i<=n-1;i++)//进行相加计算
        {
            s=a[i]-48;//ascii码的性质。字符串0到字符串9的ascii值为48~57.字符串减去48就是相应的十进制数
            m+=pow(s,n);//即是m=m+pow(s,n)。
        }
        if(m==x)//判断
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}

