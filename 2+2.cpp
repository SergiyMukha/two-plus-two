// arithmetic program for children
// 
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum LEVEL
{
	EASY, MEDIUM, HARD
};
enum ZNAK
{
	PLUS = 1, MINUS
};

int main()
{
	srand((unsigned)time(0));
	int a, b, res, sum;
	int temp, bal;
	ZNAK xZn;
	LEVEL xLevel;
	int fQuit = 1;
	while (fQuit != 0)
	{
		bal = 0;
		cout << "Hello, my friend!\n";
		cout << "Choose your level, ";
		cout << "please.\n";
		cout << "Eesy (0), Midl (1),";
		cout << "Hard (2)\n";
		cin >> temp;
		cout << "\nWell. Let's go!\n\n\n";

		switch (temp)
		{
		case 0:
			xLevel = EASY;
			break;
		case 1:
			xLevel = MEDIUM;
			break;
		case 2:
			xLevel = HARD;
			break;
		default:
			xLevel = EASY;
			break;
		}

		for (int i = 0; i < 12; i++)
		{
			temp = (1 + rand() % 2);
			if (temp == 1)
				xZn = PLUS;
			else
				xZn = MINUS;
			switch (xLevel)
			{
			case EASY:
				a = (1 + rand() % 10);
				b = (1 + rand() % 10);
				break;
			case MEDIUM:
				a = (1 + rand() % 20);
				b = (1 + rand() % 20);
				break;
			case HARD:
				a = (1 + rand() % 100);
				b = (1 + rand() % 100);
				break;
			default:
				break;
			}

			if (a < b && xZn == MINUS)
			{
				temp = a;
				a = b;
				b = temp;
			}

			if (xZn == PLUS)
			{
				sum = a + b;
				cout << "\n" << a << "+" << b << "=";
			}
			else
			{
				sum = a - b;
				cout << "\n" << a << "-" << b << "=";
			}
			cin >> res;
			cout << "\n";

			if (res == sum)
			{
				cout << "Right!\n";
				bal++;
			}
			else
				cout << "Nope.\n";
		}

		cout << "Your rating is: ";
		cout << bal << "\n";
		cout << "Maybe some more?\n";
		cout << "Yes (1), No (0)\n";
		cin >> fQuit;
	}

	return 0;
}
