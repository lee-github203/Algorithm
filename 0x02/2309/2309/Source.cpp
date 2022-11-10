#include <iostream>
using namespace std;
#define ARRAY_LENGTH (9)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[ARRAY_LENGTH] = { 0, };
	int i;
	int j;
	int sum;
	int exit_count;
	int dwarf1;
	int dwarf2;
	int height_two_dwarfs;

	for (i = 0; i < ARRAY_LENGTH; ++i)
	{
		cin >> arr[i];
	}

	i = 0;
	j = 1;

	while (1)
	{
		if (i == ARRAY_LENGTH - 1)
		{
			break;
		}
		else if (arr[i] > arr[j])
		{
			arr[i] ^= arr[j];
			arr[j] ^= arr[i];
			arr[i] ^= arr[j];
		}

		++j;

		if (j == ARRAY_LENGTH)
		{
			++i;
			j = i + 1;
		}
	}

	sum = 0;

	for (i = 0; i < ARRAY_LENGTH; ++i)
	{
		sum += arr[i];
	}

	dwarf1 = 0;
	dwarf2 = 1;
	height_two_dwarfs = 0;

	while (1)
	{
		height_two_dwarfs = arr[dwarf1] + arr[dwarf2];

		if (sum - height_two_dwarfs == 100)
		{
			break;
		}

		if (dwarf2 == ARRAY_LENGTH - 1)
		{
			++dwarf1;
			dwarf2 = dwarf1 + 1;

		}
		else
		{
			++dwarf2;
		}

		height_two_dwarfs = 0;
	}

	i = 0;
	exit_count = 0;

	while (1)
	{
		if (exit_count == 7)
		{
			break;
		}
		else if (i != dwarf1 && i != dwarf2)
		{
			cout << arr[i] << '\n';
			++exit_count;
		}

		++i;
	}

	return 0;
}