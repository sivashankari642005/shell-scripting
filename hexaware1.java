import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		//int n=sc.nextInt();
		//sc.nextLine();
		String line=sc.nextLine();
		String[] name=line.split(" ");
		String result="";
		int prev = Integer.MIN_VALUE;
		for(int i=0;i<name.length;i++)
		{
		    int len=name[i].length();
		    if(len%2!=0&&len>prev)
		    {
		       result=name[i];
		       prev=len;
		    }
		}
		if(!result.isEmpty())
		{
		    System.out.println(result);
		}
		else{
		        System.out.println("Better luck Next Time");   
		}
	}
}
