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
		//��������������̰�ĵ�˼��
		//����ԭ��ÿһ�μ�ȥ����÷����ķ���Ϊ1������ÿ�ζ���ȥ���
		//��ô��������ٵõ����� 
		//�������ֱ��ʣ�µķ�������Ϊ1�����߷�ĸ%����==1
		while (1) {
			if (1 == a) {
				b /= a;
				printf("%I64d\n", b);// 
				break;
			}
			else
			{
			 _int64	temp = b / a + 1;//��һ��ĸ����÷���
				printf("%I64d ", temp);
				//Ȼ��ԭ����ȥ��ȥ������Ǹ�����
				a = a * temp - b;
				b = b * temp;//���������
				int GCD = gcd(a, b);
				a /= GCD;
				b /= GCD;
			}
		}

	}
}
