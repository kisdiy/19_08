#include<iostream>

using namespace std;


bool ShestiZnachChislo(int FirstNumber)
{
	if (FirstNumber / 100000 == 0) {
		throw FirstNumber;
	}
	else if (FirstNumber / 100000 > 9) {
		exception ex;
		throw ex;

	}
	else {
		int first, second;
		first = (FirstNumber / 100000) + (FirstNumber / 10000 % 10) + (FirstNumber / 1000 % 10);
		second = (FirstNumber % 10) + (FirstNumber / 100 % 10) + (FirstNumber / 10 % 10);
		if (first = second) {
			return true;
		}
		else {
			return false;
		}
	}
}

int main()
{
	int FirstNumber;
	bool res;
	cout << "Введите шестизначное число" << endl;
	cin >> FirstNumber;
	try
	{
		res = ShestiZnachChislo(FirstNumber);
		
	}
	catch (int num)
	{
		cout << "number < 100000" << endl;
		res = false;
	}
	catch (exception ex)
	{
		cout << "number > 999999" << endl;

		res = false;
	}
	cout << res;
}
