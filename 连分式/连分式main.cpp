#include<stdio.h>
__int64 gcd(__int64  a,__int64 b)//�����Լ�� 
{
	if(a%b==0)
	{
		return b;
	}
	a%=b;
	return gcd(b,a);
} 
int main()
{
	int T,i,a,b,n;
	__int64 t,fz,fm,r;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d %d",&a,&b,&n);
		fz=a;
		fm=b;
	__int64 t1=gcd(fz,fm); 
		fz/=t1;
		fm/=t1;
		for(i=0;i<n-1;i++)//���� n=1ʱ��ֱ����� a/b �ģ�ҲҪ��֤���� 
		{
			t=fz;//�仯֮ǰ�ķ��� 
			fz=a*fm;
			fm=b*fm+t;
			r=gcd(fz,fm);//����Ҫ��һ���м�������fz��fm�����Լ������Ϊ����fz/=gcd(fz,fm)��fz��ֵ�����˱仯����͵���fm/=gcd(fz,fm)��ֵ�����˱仯	
			fz/=r;
			fm/=r;
		}
		printf("%I64d/%I64d\n",fz,fm);
	}
	return 0;
}
