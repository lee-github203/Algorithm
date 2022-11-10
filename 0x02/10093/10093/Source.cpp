#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long max_value;
	long long min_value;
	long long i;

	cin >> max_value >> min_value;

	if (max_value - min_value < 0)
	{
		max_value ^= min_value;
		min_value ^= max_value;
		max_value ^= min_value;
	}

	if (max_value - min_value == 0 || max_value - min_value == 1)
	{
		cout << 0;
	}
	else
	{
		cout << max_value - min_value - 1 << '\n';

		for (i = min_value + 1; i < max_value; ++i)
		{
			cout << i << ' ';
		}
	}

	return 0;
}