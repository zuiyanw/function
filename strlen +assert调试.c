#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
# include <assert.h>
int my_strlen(const char *arr)//const ����arr ���ɸ���
{
	int count = 0;
	assert((*arr) != NULL);//���� ��ָ֤��*arr����Ч��  ���Ϊ�ٻᱨ��
	while (*arr != '\0')
	{
		count++;
		arr++;
	}
	return count;
}
int main()
{
	
	char arr[] = "hello0";
	int len =my_strlen(arr);
	printf("%d\n", len);
	return 0;
}