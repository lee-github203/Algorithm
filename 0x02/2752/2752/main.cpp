#include <iostream>
using namespace std;
#define ARRAY_LENGTH (3)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[ARRAY_LENGTH] = { 0, };
	int i = 0;
	int j = 1;

	for (int i = 0; i < ARRAY_LENGTH; ++i)
	{
		cin >> arr[i];
	}

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

	for (int i = 0; i < ARRAY_LENGTH; ++i)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}