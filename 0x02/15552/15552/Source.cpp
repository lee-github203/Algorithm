#include <iostream>
using namespace std;
#define ARRAY_LENGTH (2)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int T;
	int arr[ARRAY_LENGTH] = { 0, };
	int i;

	cin >> T;

	for (i = 0; i < T; ++i)
	{
		cin >> arr[0] >> arr[1];
		cout << arr[0] + arr[1] << '\n';
	}

	return 0;
}