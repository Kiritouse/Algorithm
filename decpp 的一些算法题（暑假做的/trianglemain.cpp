#include <iostream>
#include <stdio.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int k;
    scanf("%d",&k);
    while(k--){
    	double x,y;
    	scanf("%lf",&x);
    	y = sqrt(1-(x*x));
    	printf("%.3f\n",y);
    	
    }
}
