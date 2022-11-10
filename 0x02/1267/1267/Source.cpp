#include <iostream>
using namespace std;
#define ARRAY_LENGTH (20)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int call_time_arr[ARRAY_LENGTH] = { 0, };
	int i;
	const int second_y = 30;
	const int second_m = 60;
	const int fee_y = 10;
	const int fee_m = 15;
	int N_y;
	int N_m;
	int temp_y;
	int temp_m;
	int sum_y;
	int sum_m;

	cin >> N;

	for (i = 0; i < N; ++i)
	{
		cin >> call_time_arr[i];
	}

	N_y = 0;
	N_m = 0;

	for (i = 0; i < N; ++i)
	{
		temp_y = call_time_arr[i] / second_y;
		temp_m = call_time_arr[i] / second_m;

		N_y += temp_y + 1;
		N_m += temp_m + 1;
	}

	sum_y = N_y * fee_y;
	sum_m = N_m * fee_m;

	if (sum_y == sum_m)
	{
		cout << 'Y' << ' ' << 'M' << ' ' << sum_y;
	}
	else if (sum_y > sum_m)
	{
		cout << 'M' << ' ' << sum_m;
	}
	else
	{
		cout << 'Y' << ' ' << sum_y;
	}

	return 0;
}