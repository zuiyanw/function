#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ŀ���ƣ���ӡһ������ÿһλ
//��Ŀ���ݣ��ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ ������1234����������ֵΪ1 2 3 4
void add(int n)
{
	if (n > 9)
	{
		add(n / 10);
		printf("%d ", n % 10);
	}
	else
	{
		printf("%d ", n % 10);//���һλ�Ǹ�λ�� ��10ȡģ���������� ����ֱ��дnҲ����
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	add(n);
	return 0;
}

