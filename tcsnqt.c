import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc= new Scanner(System.in);
		String name=sc.nextLine();
		char ch=sc.nextLine().charAt(0);
		String[] children=new String[50];
		if(ch=='y')
		{
		    String child=sc.nextLine();
		    children=child.split(",");
		    int len=children.length;
		    int total=len+1;
		    System.out.println("Total members:"+total);
		    System.out.println("COMMISSION DETAILS");
		    System.out.println(name+":"+500*len+" INR");
		    for(int i=0;i<len;i++)
		    {
		        System.out.println(children[i]+":"+"250"+" INR");
	    	}
		}
		else
		{
		    int total=1;
		    System.out.println("Total members:"+total);
		    System.out.println("COMMISSION DETAILS");
		    System.out.println(name+":"+"250"+" INR");
	    }
	}
		
}
