#include<stdio.h>
int main(void)
{
  int K;
  scanf("%d",&K);
  while(K--)
  {
  	int a,b,c;
  	int d,e,f;
  	scanf("%d%d%d",&a,&b,&c); 
    scanf("%d%d%d",&d,&e,&f); 
if(a>b)
    {
    	int tmp = a;
    	a = b;
    	b = tmp;
	}
	if(b>c)
	{
		int tmp = b;
    	b = c;
    	c = tmp;
	}
		if(a>b) 
	{
    	int tmp = a;
    	a = b;
    	b = tmp;
	}
	if(d>e)
    {
    	int tmp = d;
    	d = e;
    	e = tmp;
	}
	if(e>f)
	{
		int tmp = e;
    	e = f;
    	f = tmp;
	}
	if(d>e)
    {
    	int tmp = d;
    	d = e;
    	e = tmp;
	}  
	if(a * e == b * d && b * f == e * c)    //不是整除，是成比例！ 
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
