#include <iostream>
#include <cstdlib>
using namespace std;
#define ALPHABET (26)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string input_str_1;
	string input_str_2;
	size_t i;
	size_t count;

	cin >> input_str_1 >> input_str_2;

	int input_arr[ALPHABET] = { 0 };

	for (i = 0; i < input_str_1.size(); ++i)
	{
		++input_arr[input_str_1[i] - 'a'];
	}

	for (i = 0; i < input_str_2.size(); ++i)
	{
		--input_arr[input_str_2[i] - 'a'];
	}

	count = 0;

	for (i = 0; i < ALPHABET; ++i)
	{
		if (input_arr[i] != 0)
		{
			count += abs(input_arr[i]);
		}
	}

	cout << count << '\n';

	return 0;
}