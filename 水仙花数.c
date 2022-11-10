#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //题目名称：打印水仙花数
#include <stdlib.h>//题目内容：求出0-100000之间所有的“水仙花数”并输出
//水仙花数 是指一个n位数，其各位数字的n次方之和确好等于该数本身，如：153=1^3+5^3+3^3
#include <math.h>
int main()
{
	int i = 0;

	for (i = 0; i < 100000; i++)
	{
		int n = 1;//位数
		int tmp = i;
		int sum = 0;
		while (tmp /= 10)//1.判断出数字的位数n
		{
			n++;//i除以10 商不为0 位数+1
		}
		tmp = i;//不能在循环内部改变i 
		while (tmp)//2.求出每一位的n次方之和sum
		{
			sum += pow(tmp % 10, n);//先计算末位的n次方
			tmp /= 10;//去掉末位
		}
		if (sum == i)//3.如果sum == i, 则为水仙花数
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
