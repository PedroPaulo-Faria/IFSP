#include <iostream>
using namespace std;

#define TAM 5

void dobra_array(int p[])
{
	for(int i=0; i<TAM; ++i)
	{
		p[i] *= 2;
	}
}

void mostra_array1(int p[])
{
    for(int i=0; i<TAM; ++i)
	{
		cout << p[i] << endl;
	}
	cout << endl;
}

void mostra_array2(int p[])
{
    for(int i=0; i<TAM; ++i)
	{
		cout << p[i] << endl;
		//p++;
	}
	cout << endl;
	
}

int main(int argc, char** argv)
{
	  int a[TAM] = {10, 20, 30, 40, 50};

	  mostra_array1(a);	
	  dobra_array(a);
    mostra_array2(a);
	
	  return 0;
}  
