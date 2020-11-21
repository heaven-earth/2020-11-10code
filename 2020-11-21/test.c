#include<stdio.h>
#include<windows.h>
#include<string.h>

void * memmove(void * dst, const void * src, size_t count){
	//用一个辅助变量保存首地址
	void * ret = dst;
	if (dst <= src || (char*)dst >= ((char*)src + count)){
		while (count--){
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1;
			src = (char*)src + 1;
		}
	}
	else{
		dst = (char*)dst + 1;
		src = (char*)src + 1;

		while (count--){
			*(char*)dst = *(char*)src;
			dst = (char*)dst - 1;
			src = (char*)src - 1;
		}
	}
	return (ret);
}

void* memcpy(void* dst, const void* src, size_t count){
	void* ret = dst;
	assert(dst);
	assert(src);
	while (count--){
		*(char*)dst = *(char*)src;
		dst = (char*)dst + 1;
		src = (char*)src + 1;

	}
	return(ret);
}

char* my_strstr(const char* str1, const char* str2){
	assert(str1);
	assert(str2);

	char* cp = (char*)str1;
	char* substr = (char*)str2;
	char* s1 = NULL;
	if (*str2 == '\0'){
		return NULL;
		while (*cp){
			s1 = cp;
			substr = str2;
			while (*s1 && *substr && (*s1 == *substr)){
				s1++;
				substr++;
			}
			if (*substr == '\0')
				return cp;
			cp++;
		}
	}

}

//class Solution {
//	List<String> list = new ArrayList<>();
//	int n;
//	public List<String> generateParenthesis(int n) {
//		this.n = n;
//		helper("", 0, 0);
//		return list;
//	}
//	public void helper(String curr, int left, int rigth){
//		//递归终止
//		if (left == n && right == n){
//			list.add(curr);
//			return;
//		}
//		//剪枝
//		if (left > n || left < right)
//			return;
//
//		helper(curr + "(", left + 1, rigth);
//		helper(curr + ")", left, rigth + 1);
//
//	}
//}