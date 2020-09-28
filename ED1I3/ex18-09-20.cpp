#include <iostream>

using namespace std;

struct Funcionario
{
	int prontuario;
	string nome;
	double salario;	
	struct Funcionario *prox; 
	
};

Funcionario* init(){
	
	return NULL;
};

int isEmpty(Funcionario* lista)
{
	return (lista== NULL);
}

Funcionario* insert(Funcionario* lista,int p,string n, double s)
{
	Funcionario* novo = new Funcionario;
	novo->prontuario = p;
	novo->nome=n;
	novo->salario=s;
	novo->prox = lista;
	return novo;
}

void print(Funcionario* lista)
{
	Funcionario* aux;
	aux = lista;
	double sal=0;
	while (aux != NULL)
	{		
		sal=sal+aux->salario;
		cout<<"----------------------------------"<<endl;		
		cout << "Prontuario: " << aux->prontuario << endl;
		cout << "Nome: " << aux->nome << endl;
		cout << "Salario:R$ " << aux->salario << endl;
		cout<<"----------------------------------"<<endl;		
		aux = aux->prox;		
	}
	cout<<"Total de salario:R$"<<sal<<endl;
	cout<<"----------------------------------"<<endl;
}

Funcionario* find(Funcionario* lista, int p)
{
	Funcionario* aux;
	aux = lista;
	while (aux != NULL && aux->prontuario != p)
	{
		aux = aux->prox;
	}
	if (aux == NULL)
	{
		aux = new Funcionario;
		aux->prontuario = -1;
		aux->prox = NULL;
	}
	return aux;
}

Funcionario* remove(Funcionario* lista, int p)
{
	Funcionario *ant = NULL;
	Funcionario *aux;	
	aux = lista;
	while (aux != NULL && aux->prontuario != p)
	{
		ant = aux;
		aux = aux->prox;
	}
	if (aux == NULL)
	{
		return lista;
	}
	if (ant == NULL) 
	{
		lista = aux->prox;
	}
	else 
	{
		ant->prox = aux->prox;
	}
	free(aux);
	return lista;
}

void freeList(Funcionario* lista)
{
	Funcionario *aux;
	aux = lista;
	while (aux != NULL)
	{
		Funcionario *ant = aux->prox;
		free(aux);
		aux = ant;
	}
}




Funcionario* comparar(Funcionario* lista, int p)
{
	Funcionario* aux;
	aux = lista;
	while (aux != NULL && aux->prontuario != p)
	{
		aux = aux->prox;
	}
	if (aux == NULL)
	{
		aux = new Funcionario;
		aux->prontuario = -1;
		aux->prox = NULL;
	}
	return aux;
}



int main(int argc, char** argv)
{
	
	Funcionario *listafunc;	
	int escolha;
	int sair =1;
	string nome;
	int prontuario;
	double salario;
	int ret;		
	listafunc = init();		
    while(sair!=0)
	{
		
		cout<< "0.Sair:" <<endl;
		cout<<"1.Incluir: "<<endl;
		cout<<"2.Excluir: "<<endl;
		cout<<"3.Pesquisar: "<<endl;
		cout<<"4.listar: "<<endl;		
		cout<<"Selecione a opcao que deseja: ";
		cin>>escolha;
		cout <<endl;
		
		if(escolha==0){
			
			sair=0;
		}
		
		if(escolha==1){			 
			Funcionario *comparacao;			
			cout<<"Insira o prontuario: ";
			cin>>prontuario; 					    												
			cout<<endl;
			cout<<"Insira o nome: ";
			cin>>nome;
			cout<<endl;
			cout<<"Insira salario:R$ ";
			cin>>salario;
			listafunc=insert(listafunc,prontuario,nome,salario);						
			cout<<endl;			
		}
		if(escolha==2){
			cout<<"Digite o prontuario: ";
			cin>>prontuario;
			Funcionario *procurado;
            procurado = find(listafunc,prontuario);  
	   	  	if (procurado->prontuario > -1)
			{
		  	   cout << "Item excluido: Nome: " << procurado->nome<<" -- Prontuario: "<<procurado->prontuario<<" -- Salario: R$"<<procurado->salario << endl;
				listafunc = remove(listafunc,prontuario); 		
			}
		    else
		    {
		   	   cout <<"Prontuario nao encontrado!" << endl;
		    }			
			cout<<endl;
		}
		if(escolha==3){
		  
		  cout<<"Digite o prontuario que deseja pesquisar: ";
		  cin>>prontuario;
		  cout<<endl;
	   	  Funcionario *procurado;
          procurado = find(listafunc,prontuario);  
	   	  	if (procurado->prontuario > -1)
			{
		  	   cout << "Resultado da busca: Nome: " << procurado->nome<<" -- Prontuario: "<<procurado->prontuario<<" -- Salarario: R$"<<procurado->salario << endl;		
			}
		    else
		    {
		   	   cout <<"Nao encontrado" << endl;
		    }
		}
		if(escolha==4){			
			Funcionario *listavazia;
			listavazia=listafunc;
			if(listavazia==NULL){
			cout <<endl;
			cout << "Lista vazia!" << endl;
			cout <<endl;	
			}
			else
			{
				print(listafunc); 		 			
				
			}
			
		}
	
	}		
		
	freeList(listafunc);			
	return 0;
}