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
			if (strcmp(arr1, arr2) == 0)//������ƽʱϰ�߲�ͬ����������ȷ���0��
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

//���Ͼ���
int find(int a[3][3], int row, int col, int key)
{
	int i = 0;//�ӵ�0�п�ʼ��
	int j = col - 1;//�ӵ�0�е����һλ��ʼ��
	while (i < row&&j >= 0)//����С�ڵ�row��,���ڵ��ڵ�0λ
	{
		if (key>a[i][j])//�������һλ������+1
		{
			i++;
		}
		else if (key<a[i][j])//С�����һλ��λ����ǰ-1
		{
			j--;
		}
		else{
			return 1;//�ҵ�����1ֵ
		}
	}
	return 0;
}
#include<windows.h>
#include<string.h>
//ģ��ʵ��strcat�ַ���ƴ��
int main()
{
	//ģ��ʵ��strlen
	char str1[] = "hello";
	char str2[] = "wolrd!";
	printf("%d\n", strlen(str1));
	//char*pch = strcat(str1, str2);
	//puts(pch);

	////ģ��ʵ��strcmp
	//printf("%d\n", strcmp("abc", "bcd"));

	//if (0==strcmp(str1, str2))
	//{
	//	printf("���\n");
	//}
	//else{
	//	printf("�����\n");
	//}
	//
	//ģ��ʵ��strcpy
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
//		printf("�ҵ��ˡ�\n");
//	}
//	else{
//		printf("û�ҵ���\n");
//	}

	/*char str[] = "ABCDEFGH";
	int key = 0;
	int num = sizeof(str) / sizeof(str[0]) - 1;
	printf("��������Ҫ��ת�ַ��ĸ���:");
	scanf("%d", &key);
	levo(str, num, key);
	printf("%s", str);
*/
	/*int a = Judge();
	printf("%d\n", a);*/
	system("pause");
	return 0;
}
