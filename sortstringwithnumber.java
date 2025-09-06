import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    String str=sc.nextLine();
	    String[] string=str.split(" ");
	    int len=string.length;
	    String[] result=new String[9];
	    for(int j=0;j<len;j++)
	    {
	        String word=string[j];
	        for(int i=0;i<word.length();i++)
	        {
	            if(word.charAt(i)>='0'&&word.charAt(i)<='9')
	            {
	               String final1=word.replaceAll("\\d", "");
	               char ch=word.charAt(i);
	               int value=ch-'0';
	               result[value]=final1;
	            }
	        }
	    }
	    for(int i=0;i<result.length;i++)
	    {
	            if(result[i]!=null)
	            {
	                System.out.print(" "+result[i]);
	            }
	        
	    }
	    
		
	}
}
