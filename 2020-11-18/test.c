#include<stdio.h>
#include<windows.h>
#include<string.h>


//20.有效率括号
//class Solution {
//	public boolean isValid(String s) {
//		//创建一个栈。
//		Stack<Character> stack = new Stack<Character>();
//		//遍历，取出这个字符数组中的每一位。
//		for (char c : s.toCharArray())
//		{
//			//如果是左括号，那就把对应的右括号推入栈。
//			if (c == '(')
//			{
//				stack.push(')');
//			}
//			else if
//				(c == '['){
//				stack.push(']');
//			}
//			else if (c == '{')
//			{
//				stack.push('}');
//			}
//			else{
//				//到这里所有的左括号都读取完了，对应的右括号也都入栈了。
//				//这时读到的开始是右括号了。
//				if (stack.isEmpty())
//				{
//					return false;
//				}
//				//如果读到的c符号不等于栈弹出的栈顶符号，返回false
//				//有一个这样的pop，元素就弹出了栈，返回值是这个元素
//				if (c != stack.pop())
//				{
//					return false;
//				}
//			}
//		}//没有返回false，整个字符数组就遍历完了
//		//最后的栈只能是空的
//		return stack.isEmpty();
//	}
//}
//哈希表
//class Solution {
//	public boolean isValid(String s) {
//		Stack<Character> stack = new Stack<>();
//		HashMap<Character, Character> map = new HashMap<>(){
//			{
//				put(')', '(');
//				put(']', '[');
//				put('}', '{');
//			}
//		};
//
//		for (char c : s.toCharArray())
//		{
//			switch (c){
//			case'(':
//			case'[':
//			case'{':
//				stack.push(c);
//				break;
//			case')':
//			case']':
//			case'}':
//				if (stack.empty() || stack.pop() != map.get(c)){
//					return false;
//				}
//				break;
//			}
//		}
//		return stack.empty();
//	}
//}
//5.动态规划
//class Solution{
//	public String longestPalindrome(String s) {
//		int len = s.length();
//		if (len < 2){
//			return s;
//		}
//		int maxlen = 1;
//		int start = 0;
//		boolean[][] dp = new boolean[len][len];
//		char[] ss = s.toCharArray();
//
//		for (int i = 0; i < len; i++)
//		{
//			dp[i][i] = true;
//		}
//		for (int j = 1; j < len; j++){
//			for (int i = 0; i < j; i++){
//				if (ss.[i] != ss.[j]){
//					dp[i][j] = false;
//				}
//				else{
//					if (j - i < 3){
//						dp[i][j] = true;
//					}
//					else{
//						dp[i][j] = dp[i + 1][j - 1];
//					}
//				}
//				if (dp[i][j] && j - i + 1>max){
//					max = j - i + 1;
//					start = i;
//				}
//			}
//		}
//		return s.substring(start, start + maxlen);
//	}
//
//}