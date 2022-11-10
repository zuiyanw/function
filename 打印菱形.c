#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //题目名称：打印菱形
#include <stdlib.h>//题目内容：用c语言在屏幕上输出一下图案：

//      *
//     ***
//    *****
//   *******  
//  *********
// ***********
//*************
// ***********
//  *********
//   ******* 
//    *****
//     ***
//      *
int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);//输入有几行
	for (i = 0; i <n ; i++)//打印上半部分 
	{
		int j = 0;
		for (j = 0; j < n - 1 - i; j++)//1.先打印空格
		{
			printf(" ");
		}
		for (j = 0; j < i*2 + 1 ; j++)//2.打印'*'
		{
			printf("*");
		}
		printf("\n");//第一行打印完成换行
	}
	for (i = 0; i < n - 1; i++)//打印下半部分 
	{
		int j = 0;
		for (j = 0; j <= i; j++)//1.先打印空格
		{
			printf(" ");
		}
		for (j = 0; j< 2*(n-1-i)-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
