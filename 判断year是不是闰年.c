#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�����ж����꣺ʵ�ֺ����ж�year�ǲ�������
//�ж������׼�� 1.�ܱ�4�����Ҳ��ܱ�100���� 2.�ܱ�400����
//if(((year%4 == 0)&&(year%100 != 0))||(year%400==0))
int leap(int n)
{
	if ((n % 4 == 0) && (n % 100 != 0) || (n % 400 == 0))
	{
		return 1;
	}
	//return 0; ���򷵻�  ���п��Բ�д
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = leap(n);//�ж����꺯��
	if (ret == 1)
	{
		printf("%d������\n", n);
	}
	else
	{
		printf("%d����������\n", n);
	}
	return 0;
}