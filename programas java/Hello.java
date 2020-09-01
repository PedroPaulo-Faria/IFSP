import java.util.Scanner;
public class Hello {
  
  public static void main(String[] args) {
    Scanner ler = new Scanner(System.in);
    int num;
    int num2;
    int soma;
   
    System.out.println("Digite um num: ");    
    num= ler.nextInt();
    System.out.println("Digite o segundo numero: ");    
    num2= ler.nextInt();
    soma= num+num2;
    System.out.println(num+"+"+num2+"= "+soma);
  }
}