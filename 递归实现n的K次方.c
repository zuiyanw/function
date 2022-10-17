#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ŀ���ƣ��ݹ�ʵ��n��K�η�
//��Ŀ���ݣ���дһ������ʵ��n��k�η�,ʹ�õݹ�ʵ�֡�
double add(int n, int k)
{
	if (k > 0)
	{
		return n*add(n, k - 1);
	}
	else if (k < 0)
	{
		return (1.0 / (add(n, -k)));
	}
	else if (k == 0)
	{
		return 1;
	}
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double ret = add(n, k);
	printf("%lf\n", ret);
	return 0;
}