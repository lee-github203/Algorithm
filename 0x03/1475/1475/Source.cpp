#include <iostream>
using namespace std;
#define ARRAY_LENGTH_I (8)
#define ARRAY_LENGTH_J (10)
#define ASCII_CODE_NUMBER (48)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[ARRAY_LENGTH_I][ARRAY_LENGTH_J] = { 0, };
	string input_str;
	size_t i;
	size_t j;
	size_t index;
	size_t count;
	size_t n_size;
	size_t exit_count;

	cin >> input_str;

	i = 0;
	j = 0;
	n_size = input_str.size();

	while (1)
	{
		if (i > n_size - 1)
		{
			break;
		}

		index = (size_t)input_str[i] - ASCII_CODE_NUMBER;

		while (1)
		{			
			if (index == 6 || index == 9)
			{
				if (arr[j][6] == 0)
				{
					arr[j][6] = 1;
					break;
				}
				else if (arr[j][9] == 0)
				{
					arr[j][9] = 1;
					break;
				}
				else
				{
					++j;
				}
			}
			else if (arr[j][index] == 0)
			{
				arr[j][index] = 1;
				break;
			}
			else
			{
				++j;
			}
		}

		++i;
		j = 0;
	}

	i = 0;
	j = 0;
	count = 0;
	exit_count = 0;

	while (1)
	{
		if (exit_count)
		{
			break;
		}

		while (1)
		{
			if (j == ARRAY_LENGTH_J)
			{
				exit_count = 1;
				break;
			}
			else if (arr[i][j] == 0)
			{
				++j;
			}
			else
			{
				++i;
				++count;
				break;
			}
		}

		j = 0;
	}

	cout << count;

	return 0;
}