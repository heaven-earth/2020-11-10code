#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#pragma warning (disable:4996)


//LeetCode 287. Ѱ���ظ���
//int findDuplicate(int[] nums) {
//		int n = nums.length;
//		int start = 1;
//		int end = n - 1;//��Ϊ��������һ�����ظ���һ�Σ���ȥ�ظ�����һ�������������ֵ��
//
//		while (start < end){
//			int mid = start + (end - start) / 2;
//			int count = 0;
//
//			for (int i = 0; i < n; i++){
//				if (nums[i] <= mid){
//					count++;//��¼�����б�С�ڵ�����λ����ֵ
//				}
//			}
//
//			if (count > mid){
//				end = mid;//����������λ����������λ���������ظ���������ֵ
//			}
//			else{
//				start = mid + 1;//��С�ڣ�˵��ǰ���1~midû���⣬���ú����һΪ��Ϊ��Сֵ��
//			}
//		}
//		return start;
//}
//
//LeetCode 167. ����֮�� II - ������������
//
// int[] twoSum(int[] numbers, int target) {
//		int[] res = new int[2];
//		int l = 0;
//		int r = numbers.length - 1;
//		while (l <= r){
//			int sum = numbers[l] + numbers[r];
//			if (sum == target){
//				res[0] = l + 1;//�±��1��ʼ��
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

//LeetCode 33.������ת��������
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