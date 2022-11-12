#include <iostream>
using namespace std;
#define ASCII_CODE_LOWER_CASE_A (97)
#define ARRAY_LENGTH (26)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string S;
	size_t i;
	int alphabet_arr[ARRAY_LENGTH] = { 0, };
	size_t index;

	cin >> S;

	for (i = 0; i < S.size(); ++i)
	{
		index = S[i] - ASCII_CODE_LOWER_CASE_A;
		++alphabet_arr[index];
	}

	for (i = 0; i < ARRAY_LENGTH; ++i)
	{
		cout << alphabet_arr[i] << ' ';
	}

	return 0;
}