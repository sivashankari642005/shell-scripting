import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    String str=sc.nextLine();
		StringBuilder sb=new StringBuilder();
		int end=str.length();
		for(int i=str.length()-1;i>=0;i--)
		{
		    if(str.charAt(i)==' ')
		    {
		        sb.append(str.substring(i+1,end));
		        sb.append(' ');
		        end=i;
		    }
		}
		sb.append(str.substring(0,end));
		System.out.println(sb);
	}
}
