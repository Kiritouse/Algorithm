#include <stdio.h>
 gcd(int x, int y) {
	return y ? (y, x % y) : x;
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		_int64 a, b;
		scanf("%I64d %I64d", &a, &b);
		//这道题就是运用了贪心的思想
		//具体原理，每一次减去最靠近该分数的分子为1的数，每次都减去最大
		//那么就能最快速得到该数 
		//不断相减直到剩下的分数分子为1，或者分母%分子==1
		while (1) {
			if (1 == a) {
				b /= a;
				printf("%I64d\n", b);// 
				break;
			}
			else
			{
			 _int64	temp = b / a + 1;//这一分母最靠近该分数
				printf("%I64d ", temp);
				//然后原分数去减去最靠近的那个分数
				a = a * temp - b;
				b = b * temp;//两分数相减
				int GCD = gcd(a, b);
				a /= GCD;
				b /= GCD;
			}
		}

	}
}
