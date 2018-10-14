
/**
 * Write a description of class Calculator here.
 *
 * @author (your name)
 * @version (a version number or a date)
 */
import java.util.Scanner;
public class Calculator
{
    public static void main()
    {
        double n1,n2,output;
        Scanner sc= new Scanner(System.in);
        System.out.println("\f");
        System.out.println("Enter the first number ");
        n1=sc.nextDouble();
        System.out.println("Enter the second number ");
        n2=sc.nextDouble();
        System.out.println("Enter an operator (+, -, *, /): ");
        char ch=sc.next().charAt(0);
        sc.close();
        switch(ch)
        {
            case '+':
                    output=n1+n2;
                    break;
            case '-':
                    output=n1-n2;
                            break;
                             case '*':
                    output=n1*n2;
                            break;
                             case '/':
                    output=n1/n2;
                            break;
            default:System.out.printf("WRONG OPERATOR");
            return;
        }
        System.out.println("Output is "+output);
    }
}
            
        
        
    