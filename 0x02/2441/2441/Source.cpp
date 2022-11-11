#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int i;
	int j;
	int same_count = 0;

	cin >> N;

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			if (i == j)
			{
				same_count = 1;
			}

			if (same_count)
			{
				cout << '*';
			}
			else
			{
				cout << ' ';
			}
		}

		same_count = 0;
		cout << '\n';
	}

	return 0;
}