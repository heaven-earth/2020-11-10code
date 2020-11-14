#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

//void test(int **b)
//{
//}

//void show(int *arr, int num)
//{
//	for (int i = 0; i < num; i++){
//		printf("%d ", *(arr + i));
//	}
//
//}

//void show(const char *s)
//{
//	printf("%s\n", s);
//}
//void test1()
//{
//	printf("hello world!\n");
//}

//int Add(int a, int b)
//{
//	return a + b;
//}

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	if (0 == y){
		printf("div zero!\n");
		return -1;
	}
	return x / y;
}
#define NUM 5

void Menu()
{
	printf("########################\n");
	printf("# 1. Add        2. Sub #\n");
	printf("# 3. Mul        4. Div #\n");
	printf("########################\n");
	printf("Please Enter# ");
}

int main()
{
	int(*f[NUM])(int, int) = { NULL, Add, Sub, Mul, Div };

	int select = 0;
	int quit = 0;
	while (!quit){
		Menu();
		scanf("%d", &select);
		if (select < 1 || select > 4){
			printf("Enter Error, Try Again!\n");
			continue;
		}
		int x = 0;
		int  y = 0;
		printf("Please Enter Two Data: ");
		scanf("%d %d", &x, &y);

		int res = f[select](x, y);
		printf("result: %d\n", res);
	}



	//printf("%d\n", Add(10, 20));
	//int(*p)(int, int) = Add;
	//printf("%d\n", (*p)(100, 200));
	//printf("%d\n", p(100, 200));
	//printf("%p\n", Add);
	//printf("%p\n", &Add);
	//test1();
	//printf("%p\n", &test1);
	//printf("%p\n", test1);
	//int a = 10;
	//Print(a);
	//Print(100);
	/*show("abcd");*/
	//int arr[10] = { 0 };
	//int *p = arr;
	//int size = sizeof(arr) / sizeof(arr[0]);
	//show(p, size);
	//int *a[5] = { NULL };
	//test(a);
	//int a[5] = {0};
	//int (*p)[5] = &a;
	//int arr[4][5] = { 0 };
	//printf("%d\n", arr);
	//printf("%d\n", &arr);

	//printf("%d\n", arr+1);
	//printf("%d\n", &arr+1);
	//int arr[5] = { 0 };
	//printf("%p\n", arr);
	//printf("%p\n", &arr);
	//printf("%p\n", arr+1);
	//printf("%p\n", &arr+1);

	system("pause");
	return 0;
}