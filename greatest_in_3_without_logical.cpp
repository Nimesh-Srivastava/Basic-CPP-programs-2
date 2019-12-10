#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	system("cls");
	int a, b, c;
	cout << "Enter number 1 : ";
	cin >> a;
	cout << "Enter number 2 : ";
	cin >> b;
	cout << "Enter number 3 : ";
	cin >> c;
// 	if((a-b)>0)
// 	{
// 		if((a-c))>0
// 		{
// 			cout<<"Greatest : "<<a;
// 		}
// 		else if((c-b)>0)
// 		{
// 			cout<<"Greatest : "<<c;
// 		}
// 		else
// 		{
// 			cout<<"Greatest : "<<b;
// 		}
// 	}
	int c1 = ((a + b) - (a - b)) / 2;
	int c2 = ((c1 + c) - (c1 - c)) / 2;
	int c3 = ((a + b) + (a - b)) / 2;
	int c4 = ((c3 + c) + (c3 - c)) / 2;
	cout << "Highest : " << c2 << " > " << c1 << " > " << c4 << " : Lowest" <<endl;
	(void)_getch();
  	return 0;
}
