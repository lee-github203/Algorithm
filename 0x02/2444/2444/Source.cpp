#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int i;
	int j;
	int true_count = 0;

	cin >> N;

	for (i = 0; i < N * 2 - 1; ++i)
	{
		for (j = 0; j < N * 2 - 1; ++j)
		{
			if (i + j == N - 1 || i - j == N - 1)
			{
				true_count = 1;
			}

			if (true_count)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}

			if (j - i == N - 1 || i + j == (N - 1) * 3)
			{
				break;
			}
		}

		true_count = 0;
		cout << '\n';
	}

	return 0;
}