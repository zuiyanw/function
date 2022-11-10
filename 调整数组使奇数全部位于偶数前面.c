#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //题目名称：调整奇数偶数顺序
//题目内容：调整数组使奇数全部位于偶数前面
//题目：输入一个整数数组，实现一个函数。来调整该数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz ; i++)
	{
		printf("%d ", arr[i]);
	}
}
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	//先排除左边的奇数
	while (left<right)
	{
		while ((left < right) && (arr[left] % 2 == 1))//考虑到全是奇数或者偶数会溢出 需要left<right 当倒数第二个是奇数时 最后一个无需判断
		{
			left++;
		}
		while ((left < right) && (arr[right] % 2 == 0))//同理 需要附加条件 left<right
		{
			right--;
		}
		if (left<right)//假设中间的元素是：7 5 6 4   7的下标+1 找到5 再+1找到6  4的下标-1找到6 此时left=right 不需要交换 
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr, sz);
	return 0;
}
