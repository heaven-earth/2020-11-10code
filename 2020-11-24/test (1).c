#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)

//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//需求:在结构体中，需要一个变长的数组
typedef struct Score{
//	int num; //几门学科;
	int arr[0];// 0->数学，1->C语言， 2->OS...
}s_t;


int main()
{
	//struct Score s;
	//printf("%d\n", sizeof(s_t));





	s_t *s = (s_t *)malloc(sizeof(s_t)+10*sizeof(int));
	printf("%d\n", sizeof(s));

	//s->num = 10;

	//for (int i = 0; i < s->num; i++){
	//	(s->arr)[i] = i;
	//}


	//free(s);






	/*struct Score *s = (struct Score *)malloc(sizeof(struct Score));
	if (s == NULL){
		return 1;
	}
	s->num = 12;
	s->p = (int*)malloc(sizeof(int)*s->num);
	if (s->p == NULL){
		free(s);
		return 2;
	}

	free(s);*/
	//char *str = NULL;
	//str = GetMemory();
	//printf(str);





	//char *str = NULL;
	////GetMemory(&str);
	//str = GetMemory();
	//if ()
	//strcpy(str, "abcdefg");


	//const char *str = "hello world";
	//printf(str);
	//printf("%d\n", INT_MIN);
	/*int a[1000*1000];*/
	//char *p = (char*)malloc(20);
	////char *p = (char *)calloc(5, 1);
	//if (NULL == p){
	//	printf("malloc error!\n");
	//	return 1;
	//}

	//for (int i = 0; i < 5; i++){
	//	p[i] = i;
	//}

	//printf("malloc success!: %p\n", p);
	//char *ptr = realloc(p, 100000);
	//printf("ptr: %p\n", ptr);
	//if (NULL != ptr){
	//	p = ptr;
	//}
	//free(p);	
	//p = NULL;






	system("pause");
	return 0;
}