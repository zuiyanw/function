#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֡�a��ǰn�� ������ļ��㷽ʽ����
#include <stdlib.h>//���磺 2+22+222+2222+22222

	
int main()
{
	int n = 0;
	int a = 0;
	int i = 0;
	int sum = 0;
	int ret = 0;
	scanf("%d %d", &a, &n);
	for (i = 0; i < n; i++)
	{
		ret = ret * 10 + a;
		sum = sum + ret;
	}
	printf("%d\n", sum);
	return 0;
}
