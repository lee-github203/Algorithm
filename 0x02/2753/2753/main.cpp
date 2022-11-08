#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int month;

	cin >> month;

	if (month % 4 == 0 && month % 100 != 0 || month % 400 == 0)
	{
		cout << '1';
	}
	else
	{
		cout << '0';
	}

	return 0;
}