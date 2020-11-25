#include<stdio.h>
#include<windows.h>
#include<string.h>
#pragma warning(disable:4996)
#include <assert.h>
#include <stdlib.h>

//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//int main()
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	system("pause");
//	return 0;
//}

//函数地址无法使用
//int main()
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//
//	system("pause");
//	return 0;
//}
//int my_atoi(const char*str)
//{
//	assert(str != NULL);
//	//跳过空格  如果是 ‘  4194’这种情况
//	while (*str == ' ')// 跳过空格
//	{
//		str++;
//	}
//	int flag = 1;// 符号位 
//	if (*str == '-')
//	{
//		flag = -1;  //如果有-  则置-1   看是否是负数
//		str++;  //str++ 判断后面的字符是否是数字
//	}
//
//	else if (*str == '+')
//		str++;  // str++ 判断后面的字符是否是数字
//	long long res = 0;
//	while (*str != '\0')
//	{
//		if (*str<'0' || *str>'9')// 如果是个字符 无效的字符串
//			break; //直接跳出 
//		res = res * 10 + (*str - '0');//字符4是52-字符0就是真的数字4了   字符0是48 
//		if (res > INT_MAX || -res < INT_MAX)  //判断这个数是否超出整形范围  若超范围了 返回0
//			return 0;
//		str++;
//	}
//	return flag*res;
//}
//int main()
//{
//	char*str = "-4194";
//	int res1 = atoi(str);
//	printf("res1=%d\n", res1);
//	int res2 = my_atoi(str);
//	printf("res2=%d\n", res2);
//	return 0;
//}


//int myAtoi(const char* str) {
//	//参数合法性校验
//	assert(str != 0);
//	int num = 0;
//	int flag = 1;
//	while (*str == ' ') {
//		str++;
//	}
//	if (*str == '-') {
//		flag = -1;
//	}
//	if (*str == '-' || *str == '+') {
//		str++;
//	}
//	while (*str >= '0'&&*str <= '9') {
//		num = num * 10 + (*str - '0');
//		str++;
//	}
//	return flag * num;
//}
//int main() {
//	char* ptr1 = "-12345.12";
//	char* ptr2 = "+1234w34";
//	char* ptr3 = "   456er12";
//	char* ptr4 = "789 123";
//	int a = myAtoi(ptr1);
//	int b = myAtoi(ptr2);
//	int c = myAtoi(ptr3);
//	int d = myAtoi(ptr4);
//	printf("a=%d  b=%d c=%d  d=%d\n", a, b, c, d);
//	system("pause");
//	return 0;
//}

int my_atoi(const char *str)
{
	int count = 0;
	int flag = 1;
	while (*str == ' ')//跳过空格
	{
		str++;
	}
	if (*str == '+')//跳过第一个符号位
	{
		str++;
		if (*str == '-')//防止下一个为‘-’；
			return 0;
	}
	if (*str == '-')
	{
		flag = -1;//标记为负数
		str++;
	}
	while (*str <= '9'&&*str >= '0'&&*str != '\0')//遇到整数且没有越界
	{
		count = (count * 10 + (*str - 48));
		str++;
	}
	count *= flag;//确定符号
	return count;
}

int main()
{
	char str[] = "   +432sds44";
	printf("%d\n", my_atoi(str));
	system("pause");
	return 0;
}

