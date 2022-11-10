#include <iostream>
using namespace std;
#define ARRAY_LENGTH (20)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int i;
	int arr[ARRAY_LENGTH] = { 0, };
	int section_arr[2] = { 0, };
	//int j;
	int q;
	int r;
	int temp;

	for (i = 0; i < ARRAY_LENGTH; ++i)
	{
		arr[i] = i + 1;
	}

	for (i = 0; i < ARRAY_LENGTH / 2; ++i)
	{
		cin >> section_arr[0] >> section_arr[1];

		q = section_arr[0] - 1;
		r = section_arr[1] - 1;

		while (q < r)
		{
			temp = arr[q];
			arr[q] = arr[r];
			arr[r] = temp;

			++q;
			--r;
		}
	}

	for (i = 0; i < ARRAY_LENGTH; ++i)
	{
		cout << arr[i] << ' ';
	}

	return 0;
}