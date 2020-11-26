#include <stdio.h>
#include <windows.h>

#pragma warning(disable:4996)

//int a[10];

int main()
{
	int a = 10000;
	printf("%d\n", a);
	fwrite(&a, sizeof(int), 1, stdout);
	//FILE * fp;
	//fp = fopen("example.txt", "wb");

	//int a = 10000;
	//fprintf(fp, "%d", a);
	////fwrite(&a, sizeof(int), 1, fp);

	//fclose(fp);
	//if (NULL == pFile){
	//	printf("fopen error!\n");
	//	return 1;
	//}

	//int c = 'x';

	//do{
	//	printf("begin pos: %d\n", ftell(pFile));
	//	c = fgetc(pFile);
	//	printf("%c: end pos: %d\n", c, ftell(pFile));
	////	rewind(pFile); //读写位置进行恢复到最开始,类似：fseek(pFile, 0, SEEK_SET);
	//	fseek(pFile, 0, SEEK_SET);
	//	printf("%c ", c);

	//	Sleep(100);
	//} while (c != EOF);




	
	//fseek(pFile, 9, SEEK_SET);
	//fputs(" sam", pFile);


	//printf("%d\n", a);
	//printf("%d\n", b);

	//FILE *, 句柄
	//FILE *fp = fopen("test.log", "w");
	//if (NULL == fp){
	//	printf("fopen error!\n");
	//	system("pause");
	//	return 1;
	//}


	//"abcd\nefg\nxyz";
	//for (int c = 'a'; c <= 'z'; c++){
	//	int pos = ftell(fp);
	//	printf("%d\n", pos);
	//	fputc(c, fp);
	//}
	//fseek(fp, -3, SEEK_END);
	//fputs("XYZ", fp);

	//int i = 0;
	//char c = 0;
	//float f = 0.0;
	////fprintf(fp, "hello %d, hello %c, hello %f\n", 100, 'c', 3.14);
	//fscanf(fp,"hello %d, hello %c, hello %f", &i, &c, &f);

	//char str[64];
	//fgets(str, 64, fp);
	//printf("%s", str);
	//fgets(str, 64, fp);
	//printf("%s", str);
	//fgets(str, 64, fp);
	//printf("%s", str);
	//fputs("hello world!\n", fp);
	//fputs("hello bit!\n", fp);
	//fputs("hello 73!\n", fp);


	//int c = 'x';
	//while (c != EOF){
	//	//c = fgetc(stdin);
	//	//printf("%c ", c);
	//}
	//printf("\n");
	//for (int i = 'A'; i <= 'Z'; i++){
	//	//printf("%c\n", i);
	//	//fputc(i, stdout);
	//	//fputc(i, fp);
	//}

	//fclose(fp);

	system("pause");
	return 0;
}