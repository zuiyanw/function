利用上面实现的函数打印100 - 200之间的素数
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//函数判断素数  质数又称素数。一个大于1的自然数，除了1和它自身外，不能被其他自然数整除的数叫做质数；否则称为合数（规定1既不是质数也不是合数）。
int prime(int n)
{
	int count = 0;
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			count = 1;
			return 0;
		}
	}
	if (count == 0)
	{
		return 1;
	}
}
int main()
{
	int m = 100;
	int n = 200;
	int i = 0;
	int ret = 0;
	int count = 0;//计次
	for (i = 101; i <= 200; i += 1)//100为偶数 从101开始判断 +=1为跳过偶数
	{
		ret = prime(i);//素数判断函数 根据判断函数返回值来判断 1/0
		if (ret == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("count=%d", count);
	return 0;
}