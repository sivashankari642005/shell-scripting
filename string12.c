#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	scanf("%[^\n]s",str);
	int len=strlen(str);
	int j=0;
	for(int i=0;i<len;i++)
	{
		if(i!=0)
		{
			str[j]=str[i];
			j++;
		}
		
		if(str[i]==' ')
		{
			i++;
		}
	}
	str[j]='\0';
	printf("%s",str);
}
