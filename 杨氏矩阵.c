#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
//题目名称：杨氏矩阵
//题目内容：有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，
//请编写程序在这样的矩阵中查找某个数字是否存在
//要求：时间复杂度小于0(N);
int find_k(int arr[3][3], int k, int *px, int *py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px &&y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		if (arr[x][y] < k)
		{
			x++;
		}
		if (arr[x][y] == k)
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	//  1 2 3  1.建立find_k函数 2.以arr[0][3]为起点查找 如果3>k,y--(3所在的纵列剔除 因为是递增矩阵)
	//  4 5 7                                         如果3<k,x++(3所在的恒列剔除 因为是递增矩阵)
	//  6 8 9  if找到 return 1; 没有return 0; 需要建立while循环 x的边界：x<=row  y>=0
	int arr[3][3] = { 1, 2, 3, 3, 5, 7, 7, 8, 9 };
	int k = 10;
	int x = 3;
	int y = 3;
	int ret =find_k(arr, k, &x, &y);//把行列的地址上传过去
	if (ret == 1)
		printf("找到了,k的坐标是:%d,%d\n", x, y);
	else
		printf("没找到\n");
	return 0;
}