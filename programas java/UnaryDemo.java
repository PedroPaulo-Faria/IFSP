class UnaryDemo {
public static void main(String[] args) {
int result = +1;
// result is now 1
System.out.println("resultado num positivo= "+result);
result--;
// result is now 0
System.out.println("resultado num subtraido= "+result);
result++;
// result is now 1

System.out.println("resultado num somado= "+result);
result = -result;
// result is now -1
System.out.println("resultado num negativo= "+ result);
boolean success = false;
// false
System.out.println("operador logico= "+success);
// true
System.out.println("operador logico invertido= "+!success);
}
}