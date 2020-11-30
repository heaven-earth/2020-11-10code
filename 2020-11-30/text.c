#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#pragma warning (disable:4996)


//LeetCode 287. 寻找重复数
//int findDuplicate(int[] nums) {
//		int n = nums.length;
//		int start = 1;
//		int end = n - 1;//因为数组中有一个数重复了一次，减去重复的这一个就是数组最大值。
//
//		while (start < end){
//			int mid = start + (end - start) / 2;
//			int count = 0;
//
//			for (int i = 0; i < n; i++){
//				if (nums[i] <= mid){
//					count++;//记录数组中比小于等于中位数的值
//				}
//			}
//
//			if (count > mid){
//				end = mid;//计数大于中位数，就让中位数当做有重复区域的最大值
//			}
//			else{
//				start = mid + 1;//不小于，说明前面的1~mid没问题，就让后面的一为作为最小值。
//			}
//		}
//		return start;
//}
//
//LeetCode 167. 两数之和 II - 输入有序数组
//
// int[] twoSum(int[] numbers, int target) {
//		int[] res = new int[2];
//		int l = 0;
//		int r = numbers.length - 1;
//		while (l <= r){
//			int sum = numbers[l] + numbers[r];
//			if (sum == target){
//				res[0] = l + 1;//下标从1开始。
//				res[1] = r + 1;
//				return res;
//			}
//			else if (sum < target){
//				l++;
//			}
//			else{
//				r--;
//			}
//		}
//		return res;
//}
//

//LeetCode 33.搜索旋转排序数组
// int search(int[] nums, int target) {
//		int n = nums.length;
//		if (n == 0)
//			return -1;
//		int left = 0;
//		int right = n - 1;
//		while (left <= right){
//			int mid = (left + right) / 2;
//			if (nums[mid] == target)
//				return mid;
//			if (nums[mid] < nums[right]){
//				if (nums[mid] < target && target <= nums[right]){
//					left = mid + 1;
//				}
//				else{
//					right = mid - 1;
//				}
//			}
//			else{
//				if (nums[left] <= target && target < nums[mid]){
//					right = mid - 1;
//				}
//				else{
//					left = mid + 1;
//				}
//			}
//		}
//		return -1;
//}

//int search(int[] nums, int target) {
//	for (int i = 0; i < nums.length; i++){
//		if (nums[i] == target)
//			return i;
//	}
//	return -1;
//}