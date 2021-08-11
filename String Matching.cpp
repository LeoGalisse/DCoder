#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n; //numero de teste
	char sequencia[101]; // frase a ser testada
	char sequencia2[101]; // palavras favoritas
	int i; // variavel contadora
	char *pch;

	cin >> n;
	cin.ignore();

	for (i = 0; i < n; i++)
	{
		cin >> sequencia;;
		cin >> sequencia2;
		
		pch = strstr(sequencia, sequencia2);
		if (pch != NULL)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	return 0;
}
