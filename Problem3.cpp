// PROBLEM 3 //
#include <iostream>
#include <cstring>
#include <conio.h>

using namespace std;

int main()
{
	char a[200];
	int size;
	cout << "Enter characters: ";
	cin.getline(a, 200);
	size = strlen(a);

	for (int i = size; i >= 0; i--)
	{
		cout << a[i];
	}
	cout << "\n\nArray size = " << size + 1 << endl;

	system("Pause");
	_getch();
	return 0;

}