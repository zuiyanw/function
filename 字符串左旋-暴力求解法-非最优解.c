#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void left_move(char* arr, int n)
{
	assert(arr);
	int i = 0;
	int j = 0;
	int len = strlen(arr);
	for (i = 0; i < n; i++)//确定左移循环的次数
	{//循环一次：
		char z = *arr;
		for (j = 0; j < len - 1;j++)//一共4个字符 j<4的话 arr+3+1 会越界访问 
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = z;//最后一个数字
	}
}
int main()        
{                           
//题目名称：字符串左旋
//题目内容：实现一个函数，可以左旋字符串中的k个字符。

//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋2个字符得到CDAB
	int n = 0;
	char arr[] = "ABCD";
	scanf("%d", &n);
	left_move(arr, n);
	printf("%s\n", arr);
	
	return 0;
}