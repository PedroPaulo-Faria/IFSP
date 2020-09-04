#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

void mostraMaiores(int x[])
{
	double soma=0;
	double media;
	double contador = 0;
	double maior_que = 0;
	
	for(int i = 0; i < 10; ++i)
	{
		//soma += x[i];			
		soma=x[i]+soma;		
		//contador++;
		media = soma /contador;	
		contador++;
	}
	//PERGUNTAR SIZEOF PRO PROFESSOR
	//media = (double)soma / (sizeof(x)/sizeof(x[0]));
	
	//media = (double)soma / (double)contador;
	
	
	for(int i = 0; i < 10; ++i)
	{
		if(x[i] > media)
		{
			maior_que++;
		}
	}
	
	//cout << setprecision(1);
	cout<< contador<<endl;
	cout << soma << endl;
	cout << media << endl;
	
	cout << maior_que << " elementos estão acima da media!" << endl;
	//cout << (double)media;
}

int main(int argc, char** argv)
{
	int array[10];
	
	for(int i = 0; i < 10; ++i)
	{
		cout << "Digite o " << i + 1 << "º valor: ";
		cin >> array[i];
	}
	
	mostraMaiores(array);
	
	return 0;
}