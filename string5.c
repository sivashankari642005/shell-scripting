#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%s",str);
    int count1=0;
    int count2=0;
    int len=strlen(str);
    for(int i=0;i<len-1;i++)
    {
    	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
    	{
    		count1++;
		}
		else
		{
			count2++;
		}
	}
	printf("vowels %d",count1);
	printf("consonants %d",count2);
}
