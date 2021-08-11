#include <iostream> 

using namespace std;

int main()
{
	int n; // numero de letras
	int i; // variavel contadora
	int i2; // variavel contadora
	char nome[21];
	
	cin >> n;
	cin.ignore();
	cin.getline(nome, 21);
	
	for(i = 0; i < n; i++)
	{
		for (i2 = 0; i2 < 3; i2++)
			cout << nome[i];
	}
	
	return 0;
}