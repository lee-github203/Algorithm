#include <iostream>
using namespace std;

int input_arr[100] = { 0, };

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x;
	int v;
	size_t i;
	size_t count;

	cin >> x;

	for (i = 0; i < x; ++i)
	{
		cin >> input_arr[i];
	}

	cin >> v;

	count = 0;

	for (i = 0; i < x; ++i)
	{
		if (input_arr[i] == v)
		{
			++count;
		}
	}

	cout << count;

	return 0;
}