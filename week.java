import java.util.*;
public class week{
	public static void main(String args[]){

	Scanner sc=new Scanner(System.in);
	System.out.printf(
	"/* Corresponding Weekday */\n/* from Day number */\n");

	System.out.printf(
	"// Enter Day number : ");

	int i=sc.nextInt();

	if (i>31 || i<1)
		System.out.println("Invalid day number");

	else if((i+1)%7==0)
		System.out.println("Sunday");

	else if(i%7==0)
		System.out.println("Monday");

	else if((i-1)%7==0)
		System.out.println("Tuesday");

	else if((i-2)%7==0)
		System.out.println("Wednesday");

	else if((i-3)%7==0)
		System.out.println("Thursday");

	else if((i-4)%7==0)
		System.out.println("Friday");

	else if((i-5)%7==0)
		System.out.println("Saturday");

	 sc.close();

 }

}
