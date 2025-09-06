import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		int k=sc.nextInt();
		int j=sc.nextInt();
		int m=sc.nextInt();
		int p=sc.nextInt();
		int atebanna=0,atepeanut=0;
		if(k==0||n==0||j==0||m==0||p==0)
		{
		    System.out.println("invalid");
		}
		else{
		    if(k>0)
		    {
		        atebanna=m/k;
		    }
		    if(j>0)
		    {
		        atepeanut=p/j;
		    }
		    n=n-(atebanna+atepeanut);
		    System.out.println("Total monkeys left in the tree:"+n);
		}
	}
		
}#include <stdio.h>

int main()
{
    int n;
    int j=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[j]=arr[i];
            j++;
        }
        if(i>=j)
        {
            arr[i]=0;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
}
