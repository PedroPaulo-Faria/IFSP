#include <iostream>
using namespace std;

int incrementar_porValor(int i)
{
	i++;
	return i;
}

void incrementar_porReferencia(int &i)
{
	i++;
}

void incrementar_porReferencia2(int *i)
{
	(*i)++;
}

int main(int argc, char** argv)
{
	int a = 1;
	
	cout << "Valor de a: " << a << endl;
	cout << "Retorno da funcao incrementar: " << incrementar_porValor(a) << endl;
	cout << "Valor de a: " << a << endl;
	
	cout << "============================" << endl;
	
	cout << "Valor de a: " << a << endl;
    incrementar_porReferencia(a);
	cout << "Valor de a: " << a << endl;
	
	cout << "============================" << endl;
	
	cout << "Valor de a: " << a << endl;
    incrementar_porReferencia2(&a);
	cout << "Valor de a: " << a << endl;
    
	return 0;
}
