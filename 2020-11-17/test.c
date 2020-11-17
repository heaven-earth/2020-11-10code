#include<stdio.h>
#include<windows.h>
#include<string.h>

//class Solution {
//	//记录前后两个下标的数组rang
//	int[] rang = new int[2];
//	public String longestPalindrome(String s) {
//		int n = s.length();
//		if (n == 0 || n == 1)
//			return s;
//		//字符串转化为字符串数组
//		char[]ss = s.toCharArray();
//		for (int i = 1; i < n; i++)
//		{
//			helper(ss, n, i, i);
//			helper(ss, n, i - 1, i);
//		}
//		//截取字符串的子字符串
//		return s.substring(rang[0], rang[1]);
//
//	}
//	public void helper(char[]ss, int n, int start, int end){
//		while (start >= 0 && end <= n - 1)
//		{
//			if (ss[start] == ss[end])
//			{
//				start--;
//				end++;
//			}
//			else
//				break;
//		}
//		if (end - (start + 1)>rang[1] - rang[0])
//		{
//			rang[0] = start + 1;
//			rang[1] = end;
//		}
//	}
//}

/* strncat example */
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	return 0;
//}

/* strncmp example */
//int main()
//{
//	char str[][5] = { "R2D2", "C3PO", "R2A6" };
//	int n;
//	puts("Looking for R2 astromech droids...");
//	for (n = 0; n<3; n++)
//	if (strncmp(str[n], "R2xx", 2) == 0)
//	{
//		printf("found %s\n", str[n]);
//	}
//	return 0;
//}

/* strstr example */
//int main()
//{
//	char str[] = "This is a simple string";
//	char * pch;
//	pch = strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(str);
//	return 0;
//}

/* strtok example */
int main()
{
	char *p = "zhangpengwei@bitedu.tech";
	const char* sep = ".@";
	char arr[30];
	char *str = NULL;
	strcpy(arr, p);//将数据拷贝一份，处理arr数组的内容
	for (str = strtok(arr, sep); str != NULL; str = strtok(NULL, sep))
	{
		printf("%s\n", str);
	}
	return 0;
}