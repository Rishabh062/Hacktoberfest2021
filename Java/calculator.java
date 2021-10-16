import java.util.*;
class calculator
{
public static void main(String arg[])
{
int a,b;
double x;
Scanner x=new Scanner(System.in);
System.out.println("enter the first no= ");
a=x.nextInt();
System.out.println("enter the second no= ");
b=x.nextInt();
double add,sub,mul,div;
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
System.out.println("sum of the no is= " +add);
System.out.println("subtraction of the no is= " +sub);
System.out.println("multiplication of the no is= " +mul);
System.out.println("division of the no is= " +div);

}
}
