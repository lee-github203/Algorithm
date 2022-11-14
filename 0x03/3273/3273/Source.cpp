#include <iostream>
using namespace std;

int input_arr[100001] = { 0, };
bool bool_array[2000001] = { 0, };

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	int x;
	size_t i;
	int a_j;
	size_t count = 0;
	int j;

	cin >> n;

	for (i = 0; i < n; ++i)
	{
		cin >> input_arr[i];
	}

	cin >> x;

	for (i = 0; i < n; ++i)
	{
		a_j = x - input_arr[i];

		if (a_j > 0 && bool_array[a_j] == 1)
		{
			++count;
		}

		j = input_arr[i];
		bool_array[j] = 1;
	}

	cout << count;

	return 0;
}