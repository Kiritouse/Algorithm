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
    char a[20];//����һ���ַ����������20���ַ�
    while(scanf("%s",&a))//�������ַ�������ʽ�洢
    {
        if(a[0]=='0')//����Ϊ0ʱ��ֱ�ӽ���ѭ��
        break;
        int n;//����n
        n=strlen(a);//nΪ������ֵ��strlen()�������ã���ȡ�ַ�����ʵ���ȡ�ͷ�ļ�Ϊ#include <string.h>
        int x=atoi(a);//atoi()�������ã��ú�������ת����ĳ����������û��ִ����Ч��ת�����򷵻��㡣ͷ�ļ�Ϊ<stdlib.h>
        int i,m=0,s;
        for(i=0;i<=n-1;i++)//������Ӽ���
        {
            s=a[i]-48;//ascii������ʡ��ַ���0���ַ���9��asciiֵΪ48~57.�ַ�����ȥ48������Ӧ��ʮ������
            m+=pow(s,n);//����m=m+pow(s,n)��
        }
        if(m==x)//�ж�
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

