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

//������ַ�޷�ʹ��
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
//	//�����ո�  ����� ��  4194���������
//	while (*str == ' ')// �����ո�
//	{
//		str++;
//	}
//	int flag = 1;// ����λ 
//	if (*str == '-')
//	{
//		flag = -1;  //�����-  ����-1   ���Ƿ��Ǹ���
//		str++;  //str++ �жϺ�����ַ��Ƿ�������
//	}
//
//	else if (*str == '+')
//		str++;  // str++ �жϺ�����ַ��Ƿ�������
//	long long res = 0;
//	while (*str != '\0')
//	{
//		if (*str<'0' || *str>'9')// ����Ǹ��ַ� ��Ч���ַ���
//			break; //ֱ������ 
//		res = res * 10 + (*str - '0');//�ַ�4��52-�ַ�0�����������4��   �ַ�0��48 
//		if (res > INT_MAX || -res < INT_MAX)  //�ж�������Ƿ񳬳����η�Χ  ������Χ�� ����0
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
//	//�����Ϸ���У��
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
	while (*str == ' ')//�����ո�
	{
		str++;
	}
	if (*str == '+')//������һ������λ
	{
		str++;
		if (*str == '-')//��ֹ��һ��Ϊ��-����
			return 0;
	}
	if (*str == '-')
	{
		flag = -1;//���Ϊ����
		str++;
	}
	while (*str <= '9'&&*str >= '0'&&*str != '\0')//����������û��Խ��
	{
		count = (count * 10 + (*str - 48));
		str++;
	}
	count *= flag;//ȷ������
	return count;
}

int main()
{
	char str[] = "   +432sds44";
	printf("%d\n", my_atoi(str));
	system("pause");
	return 0;
}

