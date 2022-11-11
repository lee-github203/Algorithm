#include <iostream>
using namespace std;
#define ARRAT_LENGTH (9)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[ARRAT_LENGTH] = { 0, };
	int max = arr[0];
	size_t i;
	size_t max_value_index;

	for (i = 0; i < ARRAT_LENGTH; ++i)
	{
		cin >> arr[i];

		if (max < arr[i])
		{
			max = arr[i];
			max_value_index = i;
		}
	}

	cout << max << '\n' << max_value_index + 1<< '\n';

	return 0;
}