#include<iostream>
#include<conio.h>

using namespace std;

int main ()
{
system ("cls");
int a, b;
	cout << "Enter number 1 : " << endl;
	cin >> a;
	cout << "Enter number 2 : " << endl;
	cin >> b;
	if (a^b)
	{
		cout << "Numbers are not same";
	}
	else
	{
		cout << "Numbers are same";
	}
(void)_getch();
return 0;
}
