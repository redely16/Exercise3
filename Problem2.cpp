//Problem 2//
#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	int n, i;
	double a[100], b[100], c[100];
	cout << "Enter a temperature for a week of Province A, Province and then Province C." << endl;
	{
		cout << " " << endl;
		for (i = 1; i <= 7; i++)
		{
			cout << "Province A, Day " << i << ": ";
			cin >> a[i];
		}
		cout << " " << endl;
		for (i = 1; i <= 7; i++)
		{
			cout << "Province B, Day " << i << ": ";
			cin >> b[i];
		}
		cout << " " << endl;
		for (i = 1; i <= 7; i++)
		{
			cout << "Province C, Day " << i << ": ";
			cin >> c[i];
		}
		cout << " " << endl;
		cout << "Displaying Values:" << endl;
		cout << " " << endl;
		for (i = 1; i <= 7; i++)
		{
			cout << "Province A, Day " << i << "= ";
			cout << a[i] << endl;
		}
		cout << " " << endl;
		for (i = 1; i <= 7; i++)
		{
			cout << "Province B, Day " << i << "= ";
			cout << b[i] << endl;
		}
		cout << " " << endl;
		for (i = 1; i <= 7; i++)
		{
			cout << "Province C, Day " << i << "= ";
			cout << c[i] << endl;
		}
		_getch();
		return 0;
	}

}