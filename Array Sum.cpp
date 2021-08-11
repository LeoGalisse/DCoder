#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n; //numero de elementos
	int x[100]; //vetor para armazenar os elementos
	int i; // variavel contadora
	int maior; // maior numero dos elementos
	int soma; //soma dos elementos
	
	soma = 0;
	maior = 0;
	
	cin >> n;
	
	//loop para armazenar os valores dos elementos no vetor, soma e armazenar o maior vetor
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
		soma += x[i];
		
		if (x[i] > maior)
			maior = x[i];
	}
	
	//apresentar valor do resto da soma dividido pelo maior elemento
	cout << soma%maior << endl;
	
	return 0;
}