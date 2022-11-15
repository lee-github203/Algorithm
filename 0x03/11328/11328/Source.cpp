#include <iostream>
using namespace std;
#define ALPHABET_ARRAY_LENGTH (26)
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	string input_str_1;
	string input_str_2;
	int alphabet_arr[ALPHABET_ARRAY_LENGTH] = { 0, };
	size_t i;
	size_t j = 0;
	bool result;

	cin >> n;

	for (i = 0; i < n; ++i)
	{
		cin >> input_str_1 >> input_str_2;

		while (1)
		{
			if (j > input_str_1.size() - 1)
			{
				break;
			}

			++alphabet_arr[input_str_1[j] - 'a'];
			++j;
		}

		j = 0;

		while (1)
		{
			if (j > input_str_2.size() - 1)
			{
				break;
			}

			--alphabet_arr[input_str_2[j] - 'a'];
			++j;
		}

		result = 1;

		for (j = 0; j < ALPHABET_ARRAY_LENGTH; ++j)
		{
			if (alphabet_arr[j] != 0)
			{
				result = 0;
				break;
			}
		}

		if (result)
		{
			cout << "Possible\n";
		}
		else
		{
			cout << "Impossible\n";
		}

		for (j = 0; j < ALPHABET_ARRAY_LENGTH; ++j)
		{
			alphabet_arr[j] = 0;
		}

		j = 0;
	}
	
	return 0;
}