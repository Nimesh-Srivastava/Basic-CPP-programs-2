#include <iostream>
#include <conio.h>

using namespace std;

void main()
{
	system("cls");
	int a, b, c;
	cout << "Enter number 1 : ";
	cin >> a;
	cout << "Enter number 2 : ";
	cin >> b;
	cout << "Enter number 3 : ";
	cin >> c;
	int c1 = ((a + b) - (a - b)) / 2;
	int c2 = ((c1 + c) - (c1 - c)) / 2;
	int c3 = ((a + b) + (a - b)) / 2;
	int c4 = ((c3 + c) + (c3 - c)) / 2;
	cout << "Highest : " << c2 << " > " << c1 << " > " << c4 << " : Lowest" <<endl;
	
        (void)_getch();
}
