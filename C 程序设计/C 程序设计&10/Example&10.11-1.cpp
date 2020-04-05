#include<stdio.h>
void main()
{
	char str[80];
	FILE *fp;
	fp = fopen("text", "w");//新创建一个文件
	printf("input string:\n");
	gets_s(str);
	fprintf(fp, "%s", str);
	fclose(fp);
	fp = fopen("text", "r");
	while (fscanf(fp,"%s",str)!=EOF)
	{
		for (int i = 0; str[i] != '\0'; i++)
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] -= 32;
		printf("%s\n", str);
	}
	fclose(fp);
}