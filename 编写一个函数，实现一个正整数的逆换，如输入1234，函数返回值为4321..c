#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ŀ���ƣ���ӡһ������ÿһλ
//��Ŀ���ݣ��ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ ��дһ��������ʵ��һ�����������滻��������1234����������ֵΪ4321.
void add(int n)
{
	if (n > 9)
	{
		printf("%d ", n % 10);
		add(n / 10);
	}
	else
		printf("%d", n);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	add(n);
	return 0;
}