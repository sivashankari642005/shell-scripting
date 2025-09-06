import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		char nonrepeatchar=nonrepeat(str);
		if(nonrepeatchar!='\0')
		{
		    System.out.println(nonrepeatchar);
		}
		else{
		    System.out.println("not found");
		}
		
	}	
		
	public static char nonrepeat(String str)
	{
	    int[] charcounts=new int[256];
	    for(char c:str.toCharArray())
	    {
	        charcounts[c]++;
	    }
	    for(char c:str.toCharArray())
	    {
	        if(charcounts[c]==1)
	        {
	            return c;
	        }
	    }
	    return '\0';
	}
}
