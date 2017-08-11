import java.util.*;
class user{
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);

		System.out.println("Name   :");
		String name=sc.next();

		System.out.println("Roll no:");
		int roll=sc.nextInt();

		System.out.println("Section:");
		String section=sc.next();

		System.out.println("Branch :");
		String branch=sc.next();

		System.out.println("Name   :"+name);
		System.out.println("Roll no:"+roll);
		System.out.println("Section:"+section);
		System.out.println("Branch :"+branch);


                sc.close();
	}
}

