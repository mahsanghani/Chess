#include <iostream>
#include <string>
#include "chess.h"

using namespace std;

int main()
{
	Board b;
	string s;
	bool newgame = true;
	cout << "   _____ _    _ ______  _____ _____ \n  / ____| |  | |  ____|/ ____/ ____| \n | |    | |__| | |__  | (___| (___  \n | |    |  __  |  __|  \\___  \\___ \\ \n | |____| |  | | |____ ____) |___) | \n  \\_____|_|  |_|______|_____/_____/ \n" << endl;
	cout << "Enter any key to continue" << endl;
	cin >> s;

	while (newgame) {
		b.setboard();
		while (b.playgame());
		cout << "Do you want to play again? y/n" << endl;
		cin >> s;
		if (s != "y") {
			newgame = false;
		}
	}
	return 0;
}