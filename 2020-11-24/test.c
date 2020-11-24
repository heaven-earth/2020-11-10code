/#include<stdio.h>
#include<string.h>
////
////int main()
////{
////	//LeetCode121.买卖股票的最佳时机
////		int maxProfit = 0;
////		int min = Integer.MAX_VALUE;
////
////		for (int i = 0; i < prices.length; i++){
////			if (prices[i] < min){
////				min = prices[i];
////			}
////			if (prices[i] - min > maxProfit){
////				maxProfit = prices[i] - min;
////			}
////		}
////		return maxProfit;
////	}
////}
//

//LeetCode 15.三数之和
//class Solution {
//	public List<List<Integer>> threeSum(int[] nums) {
//		List<List<Integer>> res = new ArrayList<List<Integer>>();
//		if (nums == null || nums.length < 3)
//			return res;
//
//		Arrays.sort(nums);//数组排序
//
//		for (int i = 0; i < nums.length; i++){
//			//（去重）当前值等于前一个值，就跳过
//			if (i > 0 && nums[i - 1] == nums[i])
//				continue;
//
//			int left = i + 1;
//			int right = nums.length - 1;
//
//			while (left < right){
//				int sum = nums[i] + nums[left] + nums[right];
//				if (sum == 0){
//					//添加这个集合，先转Array,再转List,
//					res.add(Arrays.asList(nums[i], nums[left], nums[right]));
//					//（去重）左右指针，与下一个相等就跳过
//					while (left < right && nums[left] == nums[left + 1])
//						left++;
//					while (left < right && nums[right] == nums[right - 1])
//						right--;
//					left++;
//					right--;
//					//小于0就向右找大的值
//				}
//				else if (sum < 0){
//					left++;
//					//大于0就向左找大的值
//				}
//				else{
//					right--;
//				}
//			}
//		}
//		return res;
//	}
//}