import java.util.Scanner;
public class replace{
    String name,pattern,replac;
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a main string : ");
        String name=sc.nextLine();
        System.out.println("Enter a pattern string : ");
        String pattern=sc.nextLine();
        System.out.println("Enter a replace string : ");
        String replac=sc.nextLine();
        name=name.replace(pattern,replac);
        System.out.println(name);
        sc.close();
    }  
}