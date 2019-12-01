#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

	system("cls");

	/*
	int n1,n2;
	cout<<"Enter number 1 : ";
	cin>>n1;
	cout<<"Enter number 2 : ";
	cin>>n2;
	cout << "Greater number is : " << ((n1 + n2) + (n1 - n2)) / 2;
	*/

	/*
	int a, b, c;
	cout << "Enter number 1 : ";
	cin >> a;
	cout << "Enter number 2 : ";
	cin >> b;
	cout << "Enter number 3 : ";
	cin >> c;
	if((a-b)>0)
	{
		if((a-c))>0
		{
			cout<<"Greatest : "<<a;
		}
		else if((c-b)>0)
		{
			cout<<"Greatest : "<<c;
		}
		else
		{
			cout<<"Greatest : "<<b;
		}
	}
	int c1 = ((a + b) - (a - b)) / 2;
	int c2 = ((c1 + c) - (c1 - c)) / 2;
	int c3 = ((a + b) + (a - b)) / 2;
	int c4 = ((c3 + c) + (c3 - c)) / 2;
	cout << "Highest : " << c2 << " > " << c1 << " > " << c4 << " : Lowest" <<endl;
	*/

	/*
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
	*/

	/*
	int a;
	cout << "Enter a number : ";
	cin >> a;
	a / 55 ? cout << "Number is divisible by both 5 and 11" << endl : cout << "Number is not divisible by both 5 and 11";
	*/

	/*
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
	*/

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
