#include <iostream>

using namespace std;

int main()
{
	int n; //quantidade de vetores
	int x[1000]; //vetor
	int menor; // menor vetor
	int maior; // maior vetor
	int i; //variavel contadora
	
	cin >> n;
	
	for (i = 0; i < n; i++)
	{
		cin >> x[i];
		if (i == 0)
		{
			menor = x[0];
	        maior = x[0];
		}
		if (x[i] > maior)
			maior = x[i];
		else if (x[i] < menor)
			menor = x[i];
	}
	cout << maior - menor << endl;
	
	return 0;
}