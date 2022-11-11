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

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N * 2 - 1; ++j)
		{
			if (i == j)
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
			
			if (i + j == (N - 1) * 2)
			{
				break;
			}
		}

		true_count = 0;
		cout << '\n';
	}

	return 0;
}