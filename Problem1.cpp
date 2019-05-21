//Problem 1//

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()

{
	int i, j, arr[10], s, l;
	double sum = 0;

	cout << "Enter the ten (10) numbers: " << endl;

	for (i = 0; i < 10; i++)
	{
		cin >> arr[i];

		if (i == 0)
		{
			l = arr[i];
			s = arr[i];
		}
		else if (arr[i] > l)
		{
			l = arr[i];6
		}
		else if (arr[i] < s)
		{
			s = arr[i];
		}
		sum = sum + arr[i];
	}
	cout << " " << endl;
	cout << "The smallest number is " << s << endl;
	cout << "The largest number is " << l << endl;
	cout << "The sum of the 10 numbers is " << sum << endl;
	cout << setprecision(2) << fixed << "The average of the 10 number is " << (sum / 10);

	_getch();
	return 0;

}