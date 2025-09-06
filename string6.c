#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%s",str);
    int uppercase=0;
    int lowercase=0;
    int special=0;
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
    	if(str[i]>='A' && str[i]<='Z')
    	{
    		uppercase++;
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			lowercase++;
		}
		else
		{
			special++;
		}
	}
	printf("uppercase:%d",uppercase);
	printf("lowercase:%d",lowercase);
	printf("special:%d",special);
}
