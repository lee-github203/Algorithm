#include <iostream>
using namespace std;
#define ARRAY_LENGTH (3)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	const int hundread = 100;
	const int thousand = 1000;
	const int ten_thousand = 10000;
	int arr[ARRAY_LENGTH] = { 0, };
	int i;
	int j;
	int sum = 0;

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

	if (arr[0] == arr[2])
	{
		// 1.
		sum = ten_thousand + arr[0] * thousand;
	}
	else if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
	{
		// 2.
		if (arr[0] == arr[1] || arr[1] == arr[2])
		{
			sum = thousand + arr[1] * hundread;
		}
		else
		{
			sum = thousand + arr[2] * hundread;
		}
	}
	else
	{
		// 3.
		sum = arr[2] * hundread;
	}

	cout << sum;

	return 0;
}