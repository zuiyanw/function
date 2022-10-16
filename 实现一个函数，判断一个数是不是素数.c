#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//函数判断素数  质数又称素数。一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；否则称为合数（规定1既不是质数也不是合数）。
void prime(int n)
{
	int count = 0;
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			count++;
			printf("%d不是素数\n", n);
			break;
		}
	}
	if (count == 0)
	{
		printf("%d是素数\n", n);
	}
}
int main()
{
	int n = 0;
A:
	scanf("%d", &n);
	if (n > 1)
	{
		prime(n);//素数判断函数
	}
	else
	{
		printf("输入错误，请重新输入一个大于1的自然数>:\n");
		goto A;
	}
	return 0;
}