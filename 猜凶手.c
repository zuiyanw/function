#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()        
{                 
	             
//题目名称：猜凶手
//题目内容：日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个
//以下是4个嫌疑犯的供词：
//A说：不是我 1   
//B说：是C 1
//C说：是D 0
//D说: C在胡说 1
//已知三个人说了真话，1个人说了假话 假设真话为1 假话为0 A+B+C+D=3  学会把问题转换为程序思维 真1   0假
	char killer = '0';
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
		{
			printf("killer是：%c\n", killer);
		}
	}
	
	return 0;
}