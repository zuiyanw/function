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
	for (i = 0; i < n; i++)//ȷ������ѭ���Ĵ���
	{//ѭ��һ�Σ�
		char z = *arr;
		for (j = 0; j < len - 1;j++)//һ��4���ַ� j<4�Ļ� arr+3+1 ��Խ����� 
		{
			*(arr + j) = *(arr + j + 1);
		}
		*(arr + len - 1) = z;//���һ������
	}
}
int main()        
{                           
//��Ŀ���ƣ��ַ�������
//��Ŀ���ݣ�ʵ��һ�����������������ַ����е�k���ַ���

//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD����2���ַ��õ�CDAB
	int n = 0;
	char arr[] = "ABCD";
	scanf("%d", &n);
	left_move(arr, n);
	printf("%s\n", arr);
	
	return 0;
}