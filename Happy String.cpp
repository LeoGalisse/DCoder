#include <iostream>

using namespace std;\

int main()
{
	char str[] = "zyxwvutsrqponmlkjihgfedcba"; // letras do alfabeto ao contrario
	int n; // quantidade de letras
	int i; // variavel contadora
	int i2; // variavel contadora
	
	cin >> n;
	i2 = n;
	
	for (i = 0; i < n; i++)
	{
		cout << str[26-i2];
		i2--;
	}
	
	return 0;
}