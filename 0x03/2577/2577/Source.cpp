#include <iostream>
#include <string>
using namespace std;
#define ARRAY_LENGTH (10)
#define ASCII_CODE_NUMBER (48)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a;
	int b;
	int c;
	size_t i;
	size_t index;
	int arr[ARRAY_LENGTH] = { 0, };

	cin >> a >> b >> c;

	auto sum = to_string(a * b * c);

	for (i = 0; i < sum.size(); ++i)
	{
		index = sum[i] - ASCII_CODE_NUMBER;
		++arr[index];
	}

	for (i = 0; i < ARRAY_LENGTH; ++i)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}