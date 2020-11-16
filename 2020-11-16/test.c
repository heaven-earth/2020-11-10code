#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Judge()
{
	char arr1[10] = { "AABCD" };
	char arr2[10] = { "BCDAA" };
	int a = strlen(arr1);
	int b = strlen(arr2);
	if (a == b)
	{
		for (int i = 0; i < a; i--)
		{
			int tmp = arr1[0];
			for (int j = 0; j < a - 1; j++)
			{

				arr1[j] = arr1[j + 1];
			}
			arr1[a - 1] = tmp;
			if (strcmp(arr1, arr2) == 0)//和我们平时习惯不同，这里是相等返回0；
			{
				return 1;
			}
		}
	}
	return 0;
}


#include<stdio.h>
#include<Assert.h>
#pragma warning(disable:4996)
void levo(char *pstr, int num, int key)
{
	assert(pstr != NULL);
	int i = 0;
	int j = 0;
	for (i = 0; i < key; i++)
	{
		char tmp = pstr[0];
		for (j = 0; j < num - 1; j++)
		{
			pstr[j] = pstr[j + 1];
		}
		pstr[num - 1] = tmp;
	}
}

//杨氏矩阵
int find(int a[3][3], int row, int col, int key)
{
	int i = 0;//从第0行开始找
	int j = col - 1;//从第0行的最后一位开始找
	while (i < row&&j >= 0)//条件小于第row行,大于等于第0位
	{
		if (key>a[i][j])//大于最后一位，行数+1
		{
			i++;
		}
		else if (key<a[i][j])//小于最后一位，位数向前-1
		{
			j--;
		}
		else{
			return 1;//找到返回1值
		}
	}
	return 0;
}
#include<windows.h>
#include<string.h>
//模拟实现strcat字符串拼接
int main()
{
	//模拟实现strlen
	char str1[] = "hello";
	char str2[] = "wolrd!";
	printf("%d\n", strlen(str1));
	//char*pch = strcat(str1, str2);
	//puts(pch);

	////模拟实现strcmp
	//printf("%d\n", strcmp("abc", "bcd"));

	//if (0==strcmp(str1, str2))
	//{
	//	printf("相等\n");
	//}
	//else{
	//	printf("不相等\n");
	//}
	//
	//模拟实现strcpy
	/*char str1[100];
	char str2[] = "hello";
	char*p = strcpy(str1, str2);
	puts(p);*/
	
//int main()
//{
//	int a[3][3] = { { 1, 3, 5 }, { 3, 5, 7 }, { 5, 7, 9 } };
//	int res = find(a, 3, 3, 7);
//	if (res == 1)
//	{
//		printf("找到了。\n");
//	}
//	else{
//		printf("没找到。\n");
//	}

	/*char str[] = "ABCDEFGH";
	int key = 0;
	int num = sizeof(str) / sizeof(str[0]) - 1;
	printf("请输入你要旋转字符的个数:");
	scanf("%d", &key);
	levo(str, num, key);
	printf("%s", str);
*/
	/*int a = Judge();
	printf("%d\n", a);*/
	system("pause");
	return 0;
}
