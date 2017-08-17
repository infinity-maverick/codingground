import java.util.*;

public class calculator{
	public static void main(String args[]){

		Scanner sc=new Scanner(System.in);
		System.out.printf(
		"/* Old skool\n    2 operand CALCULATOR */\n\n\n   Enter calculation ( Operand_1 operator Operand_2");

		int n1=sc.nextInt();
		char operator=sc.next().charAt(0);
		int n2=sc.nextInt();



		System.out.printf("=");

		switch(operator)
			{
			case '+': System.out.printf("%d",n1+n2); break;
			case '-': System.out.printf("%d",n1-n2); break;
			case '*': System.out.printf("%d",n1*n2); break;
			case '/': System.out.printf("%d",n1/n2); break;
			default: System.out.printf("Invalid operator");
			}
			sc.close();
}
}
