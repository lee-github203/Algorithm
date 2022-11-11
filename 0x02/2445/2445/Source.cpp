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
	int mid = 0;

	cin >> N;

	for (i = 0; i < N * 2 - 1; ++i)
	{
		if (i == N)
		{
			mid = 1;
		}

		for (j = 0; j < N * 2; ++j)
		{
			if (mid == 0 && i >= j || mid == 0 && i + j >= N * 2 - 1)
			{
				true_count = 1;
			}
			else
			{
				true_count = 0;
			}

			if (mid != 0 && i + j <= (N - 1) * 2)
			{
				true_count = 1;
			}
			else if (mid != 0 && j - i >= 1)
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
		}

		cout << '\n';
	}

	return 0;
}