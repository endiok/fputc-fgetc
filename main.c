#include <stdio.h>
//1.fputc
#include <string.h>
#include <errno.h>
int main()
{
	FILE* pfwrite = fopen("test.txt","w");
	if (pfwrite == NULL)
	{
		printf("%s\n",strerror(errno));
		return 0;
	}
	fputc('b', pfwrite);
	fputc('i', pfwrite);
	fputc('t', pfwrite);
	fclose(pfwrite);
	pfwrite = NULL;
	return 0;
}
//2.fgetc
#include <string.h>
#include <errno.h>
int main()
{
	FILE* pfread = fopen("test.txt", "r");
	if (pfread == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	printf("%c",fgetc(pfread));
	printf("%c", fgetc(pfread));
	printf("%c", fgetc(pfread));
	fclose(pfread);
	pfread = NULL;
	return 0;
}
//3.fgets--Get from the file,then add it to the buf
int main()
{
	char buf[1024] = { 0 };
	FILE* pf = fopen("test.txt","r");
	if (pf == NULL)
	{
		return 0;
	}
	fgets(buf,1024,pf);
	puts(buf);//printf("%s",buf);
	puts(buf);
	fclose(pf);
	pf = NULL;
	return 0;
}
//4.fputs--put a string to the file
int main()
{
	FILE* pf = fopen("test.txt", "w");
	if (pf == NULL)
	{
		return 0;
	}
	fputs("hello\nworld\n",pf);
	fclose(pf);
	pf = NULL;
	return 0;
}
