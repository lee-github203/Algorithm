#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int i;
	int j;

	cin >> N;

	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			if (j <= i)
			{
				cout << '*';
			}
		}

		cout << '\n';
	}

	return 0;
}