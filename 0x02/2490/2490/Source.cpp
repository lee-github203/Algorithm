#include <iostream>
using namespace std;
#define ARRAY_LENGTH (12)
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[ARRAY_LENGTH] = { 0, };
	int i;
	int zero_count = 0;

	for (i = 0; i < ARRAY_LENGTH; ++i)
	{
		cin >> arr[i];
	}

	for (i = 0; i < ARRAY_LENGTH; ++i)
	{
		if (arr[i] == 0)
		{
			++zero_count;
		}

		if ((i + 1) % 4 == 0) // ? i + 1 % 4 == 0
		{
			if (zero_count == 1)
			{
				// µµ -> A
				cout << "A\n";
			}
			else if (zero_count == 2)
			{
				// °³ -> B
				cout << "B\n";

			}
			else if (zero_count == 3)
			{
				// °É -> C
				cout << "C\n";
			}
			else if (zero_count == 4)
			{
				// À· -> D
				cout << "D\n";
			}
			else
			{
				// ¸ð -> E
				cout << "E\n";
			}

			zero_count = 0;
		}
	}

	return 0;
}