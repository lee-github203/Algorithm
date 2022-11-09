#include <iostream>
using namespace std;
#define ARRAY_LEGNTH (7)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[ARRAY_LEGNTH] = { 0, };
	int i;
	int sum = 0;
	int positive_number_count = 0;
	int positive_number_arr[ARRAY_LEGNTH] = { 0, };
	int min;

	for (i = 0; i < ARRAY_LEGNTH; ++i)
	{
		cin >> arr[i];
	}

	for (i = 0; i < ARRAY_LEGNTH; ++i)
	{
		if (arr[i] % 2 != 0)
		{
			sum += arr[i];
			positive_number_arr[positive_number_count] = arr[i];
			++positive_number_count;
		}
	}

	if (positive_number_count == 0)
	{
		cout << "-1";
		return 0;
	}

	i = 1;
	min = positive_number_arr[0];

	while (1)
	{
		if (i == positive_number_count)
		{
			break;
		}

		if (min > positive_number_arr[i])
		{
			min = positive_number_arr[i];
		}

		++i;
	}

	cout << sum << '\n';
	cout << min << '\n';

	return 0;
}