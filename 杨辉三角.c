#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//杨辉三角
int main()
{ 
//    1          1
//   1 1         1 1
//  1 2 1        1 2 1
// 1 3 3 1       1 3 3 1
//1 4 6 4 1      1 4 6 4 1
//1 5 10 10 5 1
	//把左边的改成右边的形式 发现像一个二维数组  第一列都是1  最里面的都是1 可以先把这两个确定住 再计算里面的数字
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)// 打印行
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)//确定左边的1
			{
				arr[i][j] = 1;
			}
			if (i == j)//确定右边的1
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)//根据数字排列 看出 从第3行(下标为2) 第2列数字开始变化 
			{
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			}
		}
		
	}
	//打印函数
	for (i = 0; i < 10; i++)
	{
		//for (j = 0; j < 9-i; j++)//空格数为数组行数-1-i 例如5行的数组是 5-1-i
		//{
		//	printf(" "); //此行代码数字多了还是会偏移
		//}
		for (j = 0; j <= i; j++)//j<10的话 会把右边的三角区域的数字也打印 这里改成j<=i
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");//打印一行换行
	}

	return 0;
}