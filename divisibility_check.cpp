#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
  system("cls");
	int a;
	cout << "Enter a number : ";
	cin >> a;
	if (a / 5)
	{
		if (a / 11)
		{
			cout << "Number is divisible by both 5 and 11";
		}
		else
		{
			cout << "Number is divisible by 5";
		}
	}
	else if (a / 11)
	{
		if (a / 5)
		{
			cout << "Number is divisible by both 5 and 11";
		}
		else
		{
			cout << "Number is divisible by 11";
		}
	}
  (void)_getch();
  return 0;
}	
