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
		printf("Can��t open the file! ");
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
	//ֻ��"r"
	FILE *pf = foprn("test.txt", "r");
	//ֻд��w������д������һ���µ��ļ�
	FILE *pf = foprn("test.txt", "w");
	//д��׷��д��a��
	FILE *pf = foprn("test.txt", "a");
	//��rb������һ���������ļ�
	FILE *pf = foprn("test.txt", "rb");
	//��wb����дһ���������ļ�������һ���µ��ļ�
	FILE *pf = foprn("test.txt", "wb");
	//��ab����׷��дһ���������ļ�
	FILE *pf = foprn("test.txt", "ab");
	//��д+����r+��һ���ı��ļ�
	FILE *pf = foprn("test.txt", "r+");
	//Ϊ�˶�д��w+��,����һ���µ��ļ�


	//fseek
	FILE *pfile;
	pfile = fopen("example.txt", "wb");
	//�ı�������fputs
	fputs("This is a apple.", pfile);
	//���Ҷ�λ�������
	fseek(pfile, 9, SEEK_SET);
	//fseek(pfile, -6, SEEK_END);
	fputs("sam", pfile);
	fclose(pfile);


	//ftell������ʼλ�õ���ǰλ�õ�ƫ����=�ļ����ݴ�С
	FILE * pFile;
	long size;
	pFile = fopen("myfile.txt", "rb");
	if (pFile == NULL)perror("Error opening file");
	else{
		//��λ����ĩβ��λ��
		fseek(pFile, 0, SEEK_END);
		//�����ļ����ݵĴ�С����0��ʼ��ǰ�����
		size = ftell(pFile);
		fclose(pFile);
		printf("size of myfile.txt:%ld bytes.\n", size);
	}


	//rewind�ص��ļ���ʼλ��
	//fseek(pf , 0 , SEEK_SET);= rewind(pf);
	int n;
	FILE *file;
	char buffer[27];
	
	file = fopen("myfile.txt", "w+");//��д�����ļ�
	for (n = 'A'; n <= 'Z'; n++){
		fputc(n, file);
	}
	rewind(file);
	//���������룬�������ַ���ֽ�1������26���ļ���
	fread(buffer, 1, 26, file);
	fclose(file);
	buffer[26] = '\0';
	//��Ļ����ַ�����
	puts(buffer);


	//�ļ������ж�
	//fgetc�ж��Ƿ�ΪEOF����������
	//fgets�ж��Ƕ�����NULL�������ˣ�
	//�������ļ��Ķ�ȡ�������жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���
	//fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ���


	return 0;
}