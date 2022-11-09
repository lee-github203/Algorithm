#include <iostream>
using namespace std;
#define ARRAY_LENGTH (5)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[ARRAY_LENGTH] = { 0, };
	int i;
	int j;
	int average = 0;
	int median;

	for (i = 0; i < ARRAY_LENGTH; ++i)
	{
		cin >> arr[i];
		average += arr[i];
	}

	i = 0;
	j = 1;

	while (1)
	{
		if (i == ARRAY_LENGTH - 1)
		{
			break;
		}

		if (arr[i] > arr[j])
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

	median = arr[2];
	average /= ARRAY_LENGTH;

	cout << average << '\n';
	cout << median << '\n';

	return 0;
}