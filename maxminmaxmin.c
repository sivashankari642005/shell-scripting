import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int[] arr1=new int[n];
		for(int i=0;i<n;i++)
		{
		    arr1[i]=sc.nextInt();
		}
		int[] result=new int[n];
		int start=0;
		int end=n-1;
		for(int i=0;i<n;i++)
		{
		    if(i%2==0)
		    {
		        result[i]=arr1[end--];
		    }
		    else{
		        result[i]=arr1[start++];   
		    }
		}
		for(int i=0;i<n;i++)
		{
		    System.out.println(" "+result[i]);
		}
	}
}
