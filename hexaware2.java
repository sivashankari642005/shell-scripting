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
		int min_price=Integer.MAX_VALUE,profit,max_profit=0;
		for(int i=0;i<n;i++)
		{
		    if(arr1[i]<min_price)
		    {
		        min_price=arr1[i];
		    }
		    profit=arr1[i]-min_price;
		    if(profit>max_profit)
		    {
		        max_profit=profit;
		    }
		}
		System.out.println(max_profit);
		
	}
}
