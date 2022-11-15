#include <iostream>
using namespace std;
#define NUMBER_CLASS (6)

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int number_student;
	int max_people_room;
	size_t i;
	int man_student_arr[NUMBER_CLASS] = { 0, };
	int woman_student_arr[NUMBER_CLASS] = { 0, };
	bool sex = 0;
	size_t grade;
	size_t count;

	cin >> number_student >> max_people_room;

	for (i = 0; i < number_student; ++i)
	{
		cin >> sex;
		cin >> grade;

		if (sex)
		{
			++man_student_arr[grade - 1];
		}
		else
		{
			++woman_student_arr[grade - 1];
		}
	}

	count = 0;

	for (i = 0; i < NUMBER_CLASS; ++i)
	{
		count += man_student_arr[i] / max_people_room;
		count += woman_student_arr[i] / max_people_room;

		if (man_student_arr[i] % max_people_room)
		{
			++count;
		}

		if (woman_student_arr[i] % max_people_room)
		{
			++count;
		}
	}

	cout << count;

	return 0;
}