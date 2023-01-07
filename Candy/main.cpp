#include <stdio.h>
const int p = 1e9+7;
int main() {
	int n;
	while (scanf("%d", &n)!=EOF) {
		if(n==0) break;
		__int64 x,y,z;
		x=y=z=n/3;
		if(n%3==2){
			y++;
			z++;
		}
		else if(n%3==1) y++;
		int ans = ((x*(x-1)*(x-2)/6)%p+(y*(y-1)*(y-2)/6)%p+(z*(z-1)*(z-2)/6)%p+(x*y*z)%p)%p;
		printf("%d\n",ans);

	}
	return 0;
}
