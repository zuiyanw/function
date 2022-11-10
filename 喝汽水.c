#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //题目名称：喝汽水
//题目内容：1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少瓶汽水

int main()
{
	int money = 0;
	int empty = 0;//空瓶子数
	int total = 0;//一共喝了多少瓶
	scanf("%d", &money);
	empty = money;//第一次喝完剩下的空瓶子
	total = money;//第一次喝的瓶子
	while (empty>=2)
	{
		total = total + empty / 2;//一开始的瓶子+置换过的瓶子
		empty = empty / 2 + empty % 2;//直换过的瓶子+上一次剩余的瓶子(5%2=1)
	}
	printf("%d\n", total);
	return 0;
}
