#include <stdio.h>
#include <windows.h>

//struct Stu{
//	char name[16];
//	int age;
//}*p;
//
//struct Stu1{
//	char name[16];
//	int age;
//}stu;

//typedef struct {
//	int data;
//	Node *next;
//}Node;

//typedef struct Node {
//	int data;
//	struct Node *next;
//}node_t;



#pragma pack(1)

#pragma pack()

struct S1
{
	char c1; //1
	char c2; //1
	int i;   //3 + 4
	char c3;
};

struct S3
{
	double d;
	char c;
	int i;
};
struct S4
{
	char c1;      //1
	struct S3 s3; //7+16
	char *arr[3]; //12
	short *b;      //4
	double d;     //8
}; //48,

struct S5{
	char c;
	struct S3 s;
	char *a;
	char e[3];
	float *fp;
	float f;
	double d[3];
	struct S4 ss[2];
	char g;
};


struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

enum Color{
	RED,
	YELLOW,
	BLUE,
	PINK=10,
	BLACK,
	WHITE,
	GREEN
};

union Un1
{
	char c[9];
	int i;
};
int main()
{
	//0x00BFF8E0
	char *mem = (char*)malloc(sizeof(char)*10);
	//0x00FCA400
	if (NULL == mem){
		printf("malloc error\n");
		return 1;
	}

	for (int i = 0; i < 10; i++){
		*(mem + i) = i;
	}

	free(mem);

	//const int n = 20;
	//int a[n];















	/*printf("%d\n", sizeof(union Un1));*/
	//union Un
	//{
	//	int i;
	//	char c;
	//};
	//union Un un;
	//// 下面输出的结果是一样的吗？
	//printf("%d\n", &(un.i));
	//printf("%d\n", &(un.c));
	////下面输出的结果是什么？
	//un.i = 0x11223344;
	//un.c = 0x55;
	//printf("%x\n", un.i);


	//union Un
	//{
	//	char c;
	//	int i;
	//};
	////联合变量的定义
	//union Un un;

	//un.i = 1;
	//printf("%d\n", un.c);

	////计算连个变量的大小
	//printf("%d\n", sizeof(un));
	//printf("%p\n", &(un.c));
	//printf("%p\n", &(un.i));



	/*printf("%d\n", RED);
	printf("%d\n", YELLOW);
	printf("%d\n", BLUE);
	printf("%d\n", PINK);
	printf("%d\n", BLACK);*/



	//enum Color c = YELLOW;


	//struct S s = { 0 };
	//printf("%d\n", sizeof(struct S));
	//s.a = 10; //1010-> 010
	//s.b = 12; //1100
	//s.c = 3;  //00011
	//s.d = 4;  //0100



	//printf("%d\n", sizeof(struct S3)); //16
	//printf("%d\n", sizeof(struct S4)); //?
	/*node_t n;*/
	//p = &stu;
	//double *a, *b;

//	printf("%d, %d\n", sizeof(p), sizeof(stu));

	system("pause");
	return 0;
}