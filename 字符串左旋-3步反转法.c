#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
void reverse(char*left, char*right)//��Ӧ�ϴ��������±��ַ
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
	assert(arr);//���� ȷ��ָ��arr����Ч��
	reverse(arr, arr+n-1);//�ƶ�2λ arr+2-1�ҵ�b�ĵ�ַ
	reverse(arr+n, arr+len-1);
	reverse(arr, arr+len-1);
}
int main()        
{                           
//��Ŀ���ƣ��ַ�������
//��Ŀ���ݣ�ʵ��һ�����������������ַ����е�k���ַ���

//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD����2���ַ��õ�CDAB
//3����ת����
//1.��������ַ���
//2.�����ұ��ַ���
//3.���������ַ���
	int n = 0;
	char arr[] = "ABCD";
	scanf("%d", &n);
	left_move(arr, n);
	printf("%s\n", arr);
	
	return 0;
}