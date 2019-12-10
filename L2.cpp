#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	system("cls");

	/*
	int mon;
	cout << "Enter month number : ";
	cin >> mon;
	if (mon == 2)
	{
		cout << "Month has 28 days";
	}
	else if (mon / 2 == 0 && mon < 7)
	{
		cout << "Month has 30 days";
	}
	else if (mon / 2 != 0 && mon <= 7)
	{
		cout << "Month has 31 days";
	}
	else if (mon / 2 == 0 && mon > 7)
	{
		cout << "Month has 31 days";
	}
	else
	{
		cout << "Month has 30 days";
	}
	*/

	/*
	int a;	
	cout << "Enter the year : ";
	cin >> a;
	if (a % 4 == 0)
		cout << "It is a leap year";
	else
		cout << "It is not a leap year";
	*/

	/*int notes[8] = { 1,2,5,10,20,50,100,500 }, i = 0, check = 0, inp;
	cout << "Input the amount : ";
	cin >> inp;
	while (inp != 0)
	{
		while (notes[i] <= inp)
		{
			i++;
		}
		i--;
		check = inp / notes[i];
		cout << endl;
		cout << "No. of " << notes[i] << " rupee notes : " << check << endl;
		inp = inp - (notes[i] * check);
		i = 0;
		check = 0;
	}
	cout << endl;*/

	/*int x;
	char ch;
	cout << "Enter a character : ";
	cin >> ch;
	x = ch;
	if(x>=65 && x<=115)
	{
		if(x==65||x==69||x==73||x==79||x==85)
		{
			cout << "It is a vowel";
		}
		else
		{
			cout << "It is a consonant";
		}
	}
	else if((x>=32 && x<=47) || (x >= 58 && x <= 64) || (x >= 91 && x <= 96) || (x >= 123 && x <= 126))
	{
		cout  <<  "It is a special character";
	}
	else
	{
		cout  <<  "It is a number";
	}
	cout << endl;*/


	(void)_getch();
	return 0;
}
