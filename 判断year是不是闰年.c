#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//函数判断闰年：实现函数判断year是不是闰年
//判断闰年标准： 1.能被4整除且不能被100整除 2.能被400整除
//if(((year%4 == 0)&&(year%100 != 0))||(year%400==0))
int leap(int n)
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	//return 0; 否则返回  此行可以不写
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = leap(n);//判断闰年函数
	if (ret == 1)
	{
		printf("%d是闰年\n", n);
	}
	else
	{
		printf("%d不是是闰年\n", n);
	}
	return 0;
}