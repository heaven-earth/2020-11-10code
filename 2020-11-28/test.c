#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#pragma warning (disable:4996)


//class Solution {
//	public int search(int[] nums, int target) {
//		for (int i = 0; i < nums.length; i++){
//			if (nums[i] == target)
//				return i;
//		}
//		return -1;
//	}
//}


//LeetCode 50.Pow(x, n)
//class Solution {
//	public double myPow(double x, int n) {
//		long N = n;
//		double res = 1.0;
//		if (N < 0){
//			x = 1 / x;
//			N = -N;
//		}
//
//		//辅助变量取x值，如果幂次是单数，那就将这个数乘一次
//		double cur = x;
//		for (long i = N; i > 0; i /= 2){
//			if (i % 2 == 1){
//				res *= cur;
//			}
//			cur *= cur;
//		}
//		return res;
//	}
//}

//class Solution {
//	public double myPow(double x, int n) {
//		return Math.pow(x, n);
//	}
//}
//
//class Solution {
//	public double myPow(double x, int n) {
//		double res = 1;
//		if (n < 0){
//			x = 1 / x;
//			n = -n;
//		}
//		for (int i = 0; i < n; i++){
//			res *= x;
//		}
//		return res;
//	}
//}