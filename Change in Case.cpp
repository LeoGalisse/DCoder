#include <iostream>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main()
{
	int n; //tamanho da palavra
	char nome[41]; // palavra a ser analisada
	int x; // onde se localiza a letra maiuscula
	int y; // onde sera alterado para maiusculo
	char c; // letra a ser convertida
	int i; // variavel contadora

	cin >> n;
	cin >> nome;
	cin >> x >> y;

	for (i = 0; i < n; i++)
	{
		if (i == x || i == y) // caso seja x, colocar a letra em minusculo
		{
			c = nome[i]; // atribuir letra do vetor a c
			if (c >= 'A' && c <= 'Z') // checar se a letra é maiuscula
				putchar (tolower(c)); // imprime a letra escolhida em minusculo
			else // caso ao contrario a letra é minuscula
				putchar (toupper(c)); // imprime a letra escolhida em caixa alta
		}
		else // imprima as outras letras como devido
		{
			c = nome[i];
			putchar(c);
		}
	}

	return 0;
}
