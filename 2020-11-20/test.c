#include<stdio.h>
#include<string.h>
#include<windows.h>

//class Solution {
//	public int lengthOfLongestSubstring(String s) {
//		int n = s.length();
//		Set<Character> set = new HashSet<>();
//		int max = 0;
//		int left = 0;
//		int rigth = 0;
//		char[] ss = s.toCharArray();
//		while (left < n && rigth < n)
//		{
//			//如果哈希集里没有这个数，那就添加进去，让右指针往右移动。
//			if (!set.contains(ss[rigth])){
//				set.add(ss[rigth]);
//				rigth++;
//				//
//				max = Math.max(max, rigth - left);
//			}
//			else{
//				set.remove(ss[left]);
//				left++;
//			}
//		}
//		return max;
//	}
//}


//class Solution {
//	public int[] twoSum(int[] nums, int target) {
//		int n = nums.length;
//		int[] res = new int[2];
//		if (n == 0) return res;
//
//		HashMap<Integer, Integer> map = new HashMap<>();
//
//		for (int i = 0; i < n; i++) {
//			int value = nums[i];
//			int r = target - value;
//			if (map.containsKey(r)) {
//				res[1] = i;
//				res[0] = map.get(r);
//				return res;
//			}
//			else{
//				map.put(value, i);
//			}
//		}
//		return res;
//	}

	
	\
	//	暴力解法
		
	/*class Solution {
		public int[] twoSum(int[] nums, int target) {
			int n = nums.length;
			int[] res = new int[2];
			if (n == 0) return res;

			for (int i = 0; i < n; i++) {
				for (int j = i + 1; j < n; j++) {
					if (nums[i] + nums[j] == target) {
						res[0] = i;
						res[1] = j;
						return res;
					}
				}
			}
			return res;
		}
	}*/