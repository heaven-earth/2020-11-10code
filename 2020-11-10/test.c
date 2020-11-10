#include<stdio.h>
#pragma warning(disable:4996) 
#include<Windows.h>

void Switch(int arr[], int num)
{
	int arr2[] = { 0 };
	int i = 0;
	int	j = 0;
	for (i = 0; i < num; i++)
	{
		if (arr[i] % 2 == 1)
		{
			arr2[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < num; i++)
	{
		if (arr[i] % 2 == 0)
		{
			arr2[j] = arr[i];
			j++;
		}
	}
	for (i = 0; i < num; i++)
	{
		printf("%d ", arr2[i]);
	}
}

void Reverse(int *arr, int left, int right)
{
	if (left >= right)
		return;

	int temp = arr[left];
	arr[left] = arr[right];
	arr[right] = temp;

	Reverse(arr, left + 1, right - 1);
}

void Exchange(int*arr, int left, int right)
{
	while (left <= right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}

void Sum(int n,int m)
{
	int sum = 0;
	int x = 0;
	for (int i = 1; i < m; i++)
	{
		x = x * 10 + n;
		sum += x;
	}
	printf("sum=%d\n", sum);
}

int main()
{
	int n;
	scanf("%d", &n);
	int i, j, k;
	for (i = 1; i <= n ; i++)
	{
		for (j = 0; j < n - i ; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 2 * i - 1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = n - 1; i >0; i--)
	{
		for (j = n - i ; j > 0; j--)
		{
			printf(" ");
		}
		for (k = 2 * i - 1; k > 0; k--)
		{
			printf("*");
		}
		printf("\n");
	}

	

	//int n, m;
	//scanf("%d %d", &n, &m);
	//Sum(n, m);


	//int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//int left = 0;
	//int right = sizeof(arr) / sizeof(arr[0]);
	////Reverse(arr, left , right-1 );
	//Exchange(arr, left, right - 1);
	//for (int i = 0; i < right ; i++){
	//	printf("%d ", arr[i]);
	//}


	/*int arr[] = { 5, 2, 8, 7, 4, 0, 3, 6, 1, 9 };
	int num = sizeof(arr) / sizeof(arr[0]);
	Switch(arr, num);

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	for (int i = 0; i < 10; i++){
		printf("%d ", *(p + i));
	}*/
	
	system("pause");
	return 0;
}