//Jeff Fitch
//Assignment
#include <iostream>
#include <conio.h>
using namespace std;

struct Entry
{
	string type;
	string input;
};
int main()
{
	
	const int NUM_ENTRIES = 10;
	Entry entries[NUM_ENTRIES] =
	{
		{"adjective",""},
		{"foods plural ",},
		{"verb",""},
		{"flavor adjective",""},
		{"noun",""},
		{"foods plural",""},
		{"color",""},
		{"something you ride in",""},
		{"animal",""},
		{"person",""},
	};
	for (int i=0; i < NUM_ENTRIES; i++)
	{
		cout << (i + 1) << ". Enter a " << entries[i].type << ": ";
		cin >> entries[i].input;
	}
	string corrections="y";
	int mistake = 0;
	{
		while (corrections == "y")
		{
			cout << "Do you want to fix any mistakes? (y/n): ";
			cin >> corrections;
				if (corrections == "y")
				{
					cout << "Which entry would you like to fix? (1-10): ";
					cin >> mistake;
					cout << "Enter a " << entries[mistake - 1].type << ": ";
					cin >> entries[mistake].input;
				}
				if (corrections != "y" && corrections != "n")
				{
					cout << "please answer y or n";
					corrections = "y";
				}
		}
		cout << "Today I went to my favorite Taco Stand called the "<<entries[0].input<<" "<<entries[8].input<<".\n";
		cout << "Unlike most food stands, they cook and prepare the food in a "<<entries[7].input<<" while you "<<entries[2].input<<".\n";
		cout << "The best thing on the menu is the "<<entries[6].input<<" "<<entries[4].input<<".\n";
		cout << "Instead of ground beef they fill the taco with "<<entries[5].input<<", cheese, and top it off with a salsa made from "<<entries[1].input<<".\n";
		cout<<"Ask "<<entries[9].input<<". They said it's "<<entries[3].input<<" !\n";
	}
	(void)_getch();
	return 0;
}