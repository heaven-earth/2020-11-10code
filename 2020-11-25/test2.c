#include<stdio.h>
#include<windows.h>
#include<string.h>
#pragma warning(disable:4996)
#include <assert.h>
#include <stdlib.h>

//ģ��ʵ��strncat
char * my_strncat(char* dst, const char* src, size_t num)
{
	char* ret = dst;
	assert(dst);
	assert(src);
	while (*dst)
	{
		dst++;
	}
	while (num--)
	{
		*dst++ = *src++;
	}
	return ret;
}

//ģ��ʵ��strncpy
char* my_strncpy(char* dst, const char* src, size_t num)
{
	char* ret = dst;
	assert(dst);
	assert(src);
	while (num--)
	{
		*dst++ = *src++;
	}
	return ret;
}

//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//void findNumber(int arr[], int size){
//	int ret = 0;
//	for (int i = 0; i < size; i++){
//		ret = arr[i] ^ ret;
//	}
//	printf("%d\n", ret);
//}
//int main(){
//
//	int arr[] = { 1, 9, 1, 3, 3, };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	findNumber(arr, size);
//	system("pause");
//	return 0;
//}

void Bobsort(int* a, int n)//ð������
{
	int j = 0;
	int i = 0;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}
void find(int* a, int n, int* num)
{
	Bobsort(a, n);//��������
	int i = 0;
	int j = 0;
	for (i = 0; i < n;)
	{
		if (a[i] == a[i + 1])
		{
			i += 2;//����һ��
		}
		else
		{
			num[j] = a[i];
			i++;
			j++;
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 2, 1, 3 };
	int num[2] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	find(arr, size, num);
	printf("%d %d ", num[0], num[1]);
	return 0;
}