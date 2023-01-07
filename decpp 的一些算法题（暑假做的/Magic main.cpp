#include <stdio.h>
#include <string.h>

void selectdown(int N, int array_N[])//降序函数，传入数组和数组中元素的数量
{
	int j, temp;
	for (int i = 0; i < N; i++)
	{
		j = i;
		for (int k = j + 1; k < N; k++)
		{
			if (array_N[k] > array_N[j])
			{
				j = k;
			}
		}
		temp = array_N[i];
		array_N[i] = array_N[j];
		array_N[j] = temp;
 
 
	}
}
void selectup(int N,int array_N[])//升序函数，传入数组和数组中元素的数量
{
	int j,temp;
	for (int i = 0; i <N ; i++)
	{
		j = i;
			for (int k = j+1; k < N; k++)
			{
				if (array_N[k]<array_N[j])
				{
					j = k;
				}
			}
			temp = array_N[i];
			array_N[i] = array_N[j];
			array_N[j] = temp;
	}
int main(){
   int n;
   while(scanf("%d",&n)!=EOF){
   	char strzheng[5];
   	char strfu[5];
	char temp[5]; 
	   sprintf(str,"%d",n);
	    
   }	

	
	
	
}
