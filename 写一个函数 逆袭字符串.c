#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //дһ������ ��������һ���ַ���������
#include <stdlib.h>
#include <assert.h>
void reverse(char *str)
{
	assert(str);//���� ȷ��ָ�����Ч��
	int len = strlen(str);
	char *left = str;
	char *right = str + len - 1;
	while (left<right)//�м�û���ַ���ʱ����Ҫ���� ֻ��һ���ַ�ʱҲ����Ҫ����
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	
}
int main()
{
	char arr[20] = { 0 };
	//scanf("%s", arr);//abcdef-----fedcba
	gets(arr);//��ȡһ�� ����scanf
	reverse(arr);//������
	printf("%s\n", arr);
	return 0;
}
