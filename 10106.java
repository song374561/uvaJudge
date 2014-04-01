import java.math.BigInteger;
import java.util.Scanner;

class Main
{
	public static void main(String[] args)
	{
		Scanner cin = new Scanner(System.in);
		String a,b;
		while(cin.hasNext())
		{
			a = cin.next();
			b = cin.next();
			
			BigInteger Ba = new BigInteger(a);
			BigInteger Bb = new BigInteger(b);
			
			Ba = Ba.multiply(Bb);
			System.out.println(Ba);
		}
	}
}