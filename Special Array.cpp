#include <iostream>

using namespace std;

int main()
{
	int n; //numero de elementos
	int x[100]; //vetor para armazenar os elementos
	int i; // variavel contadora
	int especial; //verificar se o vetor é especial
	
	especial = 0;
	
	cin >> n;
	
	//loop para armazenar os valores dos elementos no vetor e verificar se é especial
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
		
		if (x[i] <= 0)
			especial++;
	}
	
	//apresentar se o vetor é especial
	if (especial == 0)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}