#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字。a的前n项 按上面的计算方式计算
#include <stdlib.h>//例如： 2+22+222+2222+22222

	
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
