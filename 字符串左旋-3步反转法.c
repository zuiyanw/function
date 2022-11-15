#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void reverse(char*left, char*right)//对应上传的左右下标地址
{
	assert(left != NULL);
	assert(right != NULL);
	while (left<right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_move(char* arr, int n)
{
	
	int len = strlen(arr);
	assert(n <= len);
	assert(arr);//断言 确保指针arr的有效性
	reverse(arr, arr+n-1);//移动2位 arr+2-1找到b的地址
	reverse(arr+n, arr+len-1);
	reverse(arr, arr+len-1);
}
int main()        
{                           
//题目名称：字符串左旋
//题目内容：实现一个函数，可以左旋字符串中的k个字符。

//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋2个字符得到CDAB
//3步反转法：
//1.逆序左边字符串
//2.逆序右边字符串
//3.逆序整个字符串
	int n = 0;
	char arr[] = "ABCD";
	scanf("%d", &n);
	left_move(arr, n);
	printf("%s\n", arr);
	
	return 0;
}