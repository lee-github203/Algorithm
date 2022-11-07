#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x;
	const int length = 10001;
	int arr[length] = { 0, };

	cin >> n >> x;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] < x)
		{
			cout << arr[i] << ' ';
		}
	}

	return 0;
}