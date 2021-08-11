#include <iostream>
#include <string>

using namespace std;

int main()
{
	int jogo[5][5];
	int i, j;
	string letra;
	int player1 = 0, player2 = 0;
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
		{
			cin >> letra;
			if(letra == "X")
				jogo[i][j] = 88;
			if(letra == "O")
				jogo[i][j] = 79;
		}

    if(jogo[0][0] == jogo[1][1] && jogo[1][1] == jogo[2][2])
	{
		if(jogo[0][0] == 88)
			player1++;
		else if(jogo[0][0] == 79)
			player2++;
	}
	if(jogo[0][0] == jogo[0][1] && jogo[0][2] == jogo[0][1])
	{
		if(jogo[0][0] == 88)
			player1++;
		else if(jogo[0][0] == 79)
			player2++;
	}
	if(jogo[0][0] == jogo[1][0] && jogo[2][0] == jogo[1][0])
	{
		if(jogo[0][0] == 88)
			player1++;
		else if(jogo[0][0] == 79)
			player2++;
	}
	if(jogo[0][2] == jogo[1][2] && jogo[2][2] == jogo[1][2])
	{
		if(jogo[0][0] == 88)
			player1++;
		else if(jogo[0][0] == 79)
			player2++;
	}
	if(jogo[2][0] == jogo[2][1] && jogo[2][2] == jogo[2][0])
	{
		if(jogo[0][0] == 88)
			player1++;
		else if(jogo[0][0] == 79)
			player2++;
	}
	if(jogo[0][2] == jogo[1][1] && jogo[1][1] == jogo[2][0])
	{
		if(jogo[0][0] == 88)
			player1++;
		else if(jogo[0][0] == 79)
			player2++;
	}
	if(jogo[1][0] == jogo[1][1] && jogo[1][2] == jogo[1][0])
	{
		if(jogo[0][0] == 88)
			player1++;
		else if(jogo[0][0] == 79)
			player2++;
	}
	if(jogo[0][1] == jogo[1][1] && jogo[2][1] == jogo[1][1])
	{
		if(jogo[0][0] == 88)
			player1++;
		else if(jogo[0][0] == 79)
			player2++;
	}
	
	if(player1 == player2)
		cout << "Draw" << endl;
	else if(player2 > player1)
		cout << "Player 1" << endl;
	else
		cout << "Player 2" << endl;
		
	return 0;
}