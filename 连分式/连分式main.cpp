#include<stdio.h>
__int64 gcd(__int64  a,__int64 b)//求最大公约数 
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
		for(i=0;i<n-1;i++)//这里 n=1时是直接输出 a/b 的，也要保证互质 
		{
			t=fz;//变化之前的分子 
			fz=a*fm;
			fm=b*fm+t;
			r=gcd(fz,fm);//这里要用一个中间量代替fz与fm的最大公约数，因为经过fz/=gcd(fz,fm)后fz的值发生了变化，这就导致fm/=gcd(fz,fm)的值发生了变化	
			fz/=r;
			fm/=r;
		}
		printf("%I64d/%I64d\n",fz,fm);
	}
	return 0;
}
