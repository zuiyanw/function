#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//题目名称：递归实现n的K次方
//题目内容：编写一个函数实现n的k次方,使用递归实现。
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