#include <iostream>

using namespace std;

int main()
{
	int n; //numerador da divisao
	int d; //divisor da divisao
	
	cin >> n >> d;
	/*
	//loop para verificar se os dois sao divisiveis
	//verificar se sao divisiveis por 2, 3 ou 5
	while (((n % 2 == 0) && (d % 2 == 0)) || ((n % 3 == 0) & (d % 3 == 0)) || ((n % 5 == 0) & (d % 5 == 0)))
	{
		if ((n % 2 == 0) && (d % 2 == 0))
		{
			n = n / 2;
			d = d / 2;
		}
		else if ((n % 3 == 0) & (d % 3 == 0))
		{
			n = n / 3;
			d = d / 3;
		}
		else if ((n % 5 == 0) & (d % 5 == 0))
		{
			n = n / 5;
			d = d / 5;
		}
	}
	*/
	//caso o numero seja primo e nao divisivel por 2, 3 ou 5
	while (n != 1 && (d % n == 0))
	{
		d = d / n;
		n = n / n;
	}
	cout << n << " " << d << endl;
	
	return 0;
}