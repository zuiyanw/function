#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//��Ŀ���ƣ��ַ������򣨵ݹ�ʵ�֣�
//��Ŀ���ݣ���дһ������ reverse_string(char* string)(�ݹ�ʵ��)
//ʵ�֣��������ַ����е��ַ���������
//Ҫ�󣺲���ʹ��c�������е��ַ�������������
int my_strlen(char* str)//�������ָ�� ����Ϊ reverse_string(char str[])�е�str[]����Ԫ�ص�ַ
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str + 1);
	}
	return 0;
}
void reverse_string(char str[])
{
	int right = 0;
	int left = 0;
	right = my_strlen(str) - 1;//-1��Ҫ����
	char tmp = str[left];
	str[left] = str[right];// abcdefg  1.a��gλ�û��� ������ʱֻ��g��ֵ��a  2.'/0'��ֵ��g֮ǰ��λ�� 3.��bcdef���з�������(��Ϊ�Ȱ�'\0'���Ƶ���right��λ�� ����f�ͳ�Ϊ���µ�right)
	str[right] = '\0';
	if (my_strlen(str + 1) > 1)//�ж�������ֻ���ַ�������2������=2����ʱ�����Ҫ����
	{
		reverse_string(str + 1);
	}
		str[right] = tmp;
	
}
int main()
{
	char arr[] = "abcdefg";//���gfedcba
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}