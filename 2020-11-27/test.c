#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#pragma warning (disable:4996)

int main()
{
	long num = 0;
	FILE *fp = NULL;
	if ((fp = fopen("fname.dat", "r")) == NULL)
	{
		printf("Can’t open the file! ");
		exit(0);
	}
	while (fgetc(fp) != EOF)
	{
		num++;
	}
	printf("num=%d\n", num);
	fclose(fp);
	

	int a = 10000;
	FILE *pf = foprn("test.txt", "wb");
	//fwrite
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
	//只读"r"
	FILE *pf = foprn("test.txt", "r");
	//只写“w”覆盖写，建立一个新的文件
	FILE *pf = foprn("test.txt", "w");
	//写，追加写“a”
	FILE *pf = foprn("test.txt", "a");
	//“rb”，读一个二进制文件
	FILE *pf = foprn("test.txt", "rb");
	//“wb”，写一个二进制文件，建立一个新的文件
	FILE *pf = foprn("test.txt", "wb");
	//“ab”，追加写一个二进制文件
	FILE *pf = foprn("test.txt", "ab");
	//读写+，“r+”一个文本文件
	FILE *pf = foprn("test.txt", "r+");
	//为了读写“w+”,建立一个新的文件


	//fseek
	FILE *pfile;
	pfile = fopen("example.txt", "wb");
	//文本行输入fputs
	fputs("This is a apple.", pfile);
	//查找定位光标作用
	fseek(pfile, 9, SEEK_SET);
	//fseek(pfile, -6, SEEK_END);
	fputs("sam", pfile);
	fclose(pfile);


	//ftell返回起始位置到当前位置的偏移量=文件内容大小
	FILE * pFile;
	long size;
	pFile = fopen("myfile.txt", "rb");
	if (pFile == NULL)perror("Error opening file");
	else{
		//定位在最末尾的位置
		fseek(pFile, 0, SEEK_END);
		//整个文件内容的大小，从0开始，前开后闭
		size = ftell(pFile);
		fclose(pFile);
		printf("size of myfile.txt:%ld bytes.\n", size);
	}


	//rewind回到文件起始位置
	//fseek(pf , 0 , SEEK_SET);= rewind(pf);
	int n;
	FILE *file;
	char buffer[27];
	
	file = fopen("myfile.txt", "w+");//读写，新文件
	for (n = 'A'; n <= 'Z'; n++){
		fputc(n, file);
	}
	rewind(file);
	//二进制输入，（数组地址，字节1，个数26，文件）
	fread(buffer, 1, 26, file);
	fclose(file);
	buffer[26] = '\0';
	//屏幕输出字符数组
	puts(buffer);


	//文件结束判定
	//fgetc判断是否为EOF（发生错误）
	//fgets判断是都返回NULL（读完了）
	//二进制文件的读取结束，判断返回值是否小于实际要读的个数
	//fread判断返回值是否小于实际要读的个数


	return 0;
}