#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
# include <assert.h>
int my_strlen(const char *arr)//const 保护arr 不可更改
{
	int count = 0;
	assert((*arr) != NULL);//断言 保证指针*arr的有效性  结果为假会报错
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