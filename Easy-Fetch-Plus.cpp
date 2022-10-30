// Easy-Fetch-Plus.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int open[5];
	cout << "If you want to open Microsoft Edge(Press 1)\nIf you want to open VLC Media Player(Press 2)\nIf you want to open Google Chrome(Press 3)";
	cin>>open[5];
	if (open[5] == 1)
	{
		system("start msedge");
	}
	else if (open[5] == 2)
	{
		system("start vlc");
	}
	else if (open[5] == 3)
	{
		system("start chrome");
	}
	else
	{
		cout << "Invalid !!! ";
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
