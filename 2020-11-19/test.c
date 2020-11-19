#include <stdio.h>
#include <assert.h>
#include <windows.h>

#pragma warning(disable:4996)

struct Stu{
	char name[32];
	int age;
};

char *my_strcat(char *src, const char *dst)
{
	assert(src);
	assert(dst);
	char *start = src;
	while (*start){
		start++;
	}
	while (*start = *dst){
		start++, dst++;
	}

	return src;
}

const char *my_strstr(const char *str, const char *sub_str)
{
	assert(str);
	assert(sub_str);

	while (*str){ //确定起始位置
		const char *p = str;
		const char *q = sub_str;
		while (*p && *q && *p == *q){ //局部比较
			p++;
			q++;
		}
		if (*q == '\0'){
			return str;
		}
		str++;
	}

	return NULL;
}

void *my_memcpy(void *dst, const void *src, int num)
{
	assert(dst);
	assert(src);

	char *_dst = (char *)dst;
	const char *_src = (const char *)src;

	while (num){
		*_dst = *_src;
		_dst++;
		_src++;
		num--;
	}
	return dst;
}
void *my_memmove(void *dst, const void *src, int num)
{
	assert(dst);
	assert(src);

	char *_dst = (char *)dst;
	const char *_src = (const char *)src;

	if (_dst > _src && _dst < _src + num){
		//right -> left
		_dst = _dst + num - 1;
		_src = _src + num - 1;

		while (num){
			*_dst = *_src;
			_dst--;
			_src--;
			num--;
		}
	}
	else{
		//left -> right
		while (num){
			*_dst = *_src;
			_dst++;
			_src++;
			num--;
		}
	}

	return dst;
}
int main()
{
	//int a[] = { 12, 3, 4, 5, 6 };
	//int b[10] = {0};
	char buf[16] = "abcd1234";
	memmove(buf, buf + 1, strlen(buf) + 1);

	//memcpy(buf + 1, buf, strlen(buf) + 1);
	//my_memmove(buf, buf + 1, strlen(buf) + 1);

	printf("%s\n", buf);





	//const char *str = "abc 123 abcd 1234 abcdef";
	//const char *sub_str = "1234";
	//const char *s = my_strstr(str, sub_str);
	//printf("%s\n", my_strstr(str, sub_str));
	//puts(my_strstr(str, sub_str));

	//char src[32] = "abcd1234";
	//my_strcat(src, " hello");
	//printf("%s\n", src);


	/*int a[5] = { 0 };*/
	//memset(a, 0, sizeof(a));
	//memset(a, 1, sizeof(a)); //注意，mem*操作单位是字节！！！

	//char buffer1[] = "DWgaOtP12df0";
	//char buffer2[] = "DWGAOTP12DF0";
	//int n;
	//n = memcmp(buffer1, buffer2, sizeof(buffer1));
	//if (n > 0) printf("'%s' is greater than '%s'.\n", buffer1, buffer2);//1
	//else if (n<0) printf("'%s' is less than '%s'.\n", buffer1, buffer2);//2
	//else printf("'%s' is the same as '%s'.\n", buffer1, buffer2);       //3


	//memcpy vs memmove - 待定
	//struct Stu src = {"tom", 21};
	//struct Stu dst;
	//memcpy(&dst, &src, sizeof(src));
	//const char *src = "abcd1234";
	//char dst[16];
	//memmove(dst, src, strlen(src)+1);

	//int c = toupper('a');
	/*int c = tolower('A');
	putchar(c);*/
	//printf("%c\n", c);
	system("pause");
	return 0;
}