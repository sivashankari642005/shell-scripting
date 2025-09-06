#include <stdio.h>
int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    double num=2.95;
    int integer=(int)num;
    double fractionpart=num-integer;
    int fractionnum=(fractionpart*100);
    int result=gcd(fractionnum,100);
    int num1=fractionnum/result;
    int num2=100/result;
    printf("%d %d/%d",integer,num1,num2);
}
