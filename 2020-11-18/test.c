#include<stdio.h>
#include<windows.h>
#include<string.h>


//20.��Ч������
//class Solution {
//	public boolean isValid(String s) {
//		//����һ��ջ��
//		Stack<Character> stack = new Stack<Character>();
//		//������ȡ������ַ������е�ÿһλ��
//		for (char c : s.toCharArray())
//		{
//			//����������ţ��ǾͰѶ�Ӧ������������ջ��
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
//				//���������е������Ŷ���ȡ���ˣ���Ӧ��������Ҳ����ջ�ˡ�
//				//��ʱ�����Ŀ�ʼ���������ˡ�
//				if (stack.isEmpty())
//				{
//					return false;
//				}
//				//���������c���Ų�����ջ������ջ�����ţ�����false
//				//��һ��������pop��Ԫ�ؾ͵�����ջ������ֵ�����Ԫ��
//				if (c != stack.pop())
//				{
//					return false;
//				}
//			}
//		}//û�з���false�������ַ�����ͱ�������
//		//����ջֻ���ǿյ�
//		return stack.isEmpty();
//	}
//}
//��ϣ��
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
//5.��̬�滮
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