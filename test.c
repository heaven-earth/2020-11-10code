#include<stdio.h>
#include<windows.h>
#pragma warning(disable:4996)

两数之和
void twoSum(int* nums, int numsSize, int target) 
{
	for (int i = 0; i < numsSize-1; i++)
	{
		for (int j = i + 1; j < numsSize-1; j++) 
		{
			if (nums[i] + nums[j] == target)
			{
				printf("下标%d和%d\n", i, j);
				break;
			}		
		}
	}
}

//整数反转
int reverse(int x){
	int res = 0;
	int sum = 0;
	while (x != 0)
	{
		res = x % 10;
		x /= 10;
		if (sum > 214748364 || (sum == 214748364 && res > 7))
			return 0;
		if (sum < -214748364 || (sum == -214748364 && res < -8))
			return 0;
		sum = sum * 10 + res;
	}
	return sum;
}

//回文数
bool isPalindrome(int x){
	if (x<0)
		return 0;
	int temp = 0;
	int sum = 0;
	int temp2 = x;
	while (x != 0)
	{
		temp = x % 10;
		x /= 10;
		if (sum > 214748364 || (sum == 214748364 && temp > 7))
			return 0;
		if (sum < -214748364 || (sum == -214748364 && temp < -8))
			return 0;
		sum = sum * 10 + temp;
	}
	return sum == temp2;
}

void print(int n)

{

	if (n>9){
		print(n / 10);
	}
	printf("%d", n * 10);
}

int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int num = 0;
	scanf("%d", &num);
	print(num);

	int nums[] = { 2, 7, 11, 15 };
	int target = 9;
	int numsSize = sizeof(nums) / sizeof(nums[0]);
	twoSum(nums, numsSize,target);
	system("pause");
	return 0;
}