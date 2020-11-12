public class Quadrado2 extends Quadrilatero
{
	public Quadrado2 (double lado)
	{
		super(lado,lado); //Repassando argumentos para a superclasse
		super.ID = "Quadrado";
	}

	public double getPerimetro()
	{
		return 4 * super.lado1;
	}

	public double getDiagonal()
	{
		return lado1 * Math.sqrt(2);
	}

}
