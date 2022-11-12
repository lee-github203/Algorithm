#include <iostream>
using namespace std;

void insert(int index, int num, int arr[], int& length);
void erase(int index, int arr[], int& length);
void printArr(int arr[], int& len);

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	/*int arr1[10] = { 10, 50, 40, 30, 70, 20 };
	int length = 6;

	insert(3, 60, arr1, length);
	erase(4, arr1, length);*/

	int arr[10] = { 10, 20, 30 };
	int len = 3;

	insert(3, 40, arr, len); // 10 20 30 40
	printArr(arr, len);
	insert(1, 50, arr, len); // 10 50 20 30 40
	printArr(arr, len);
	insert(0, 15, arr, len); // 15 10 50 20 30 40
	printArr(arr, len);

	int arr2[10] = { 10, 50, 40, 30, 70, 20 };
	int len2 = 6;
	erase(4, arr2, len2); // 10 50 40 30 20
	printArr(arr2, len2);
	erase(1, arr2, len2); // 10 40 30 20
	printArr(arr2, len2);
	erase(3, arr2, len2); // 10 40 30
	printArr(arr2, len2);

	return 0;
}

void insert(int index, int num, int arr[], int& length)
{
	size_t i;

	for (i = length; i > index; --i)
	{
		arr[i] = arr[i - 1];
	}

	arr[index] = num;
	++length;
}

void erase(int index, int arr[], int& length)
{
	size_t i;

	--length;

	for (i = index; i < length; ++i)
	{
		arr[i] = arr[i + 1];
	}

	arr[i] = 0;
}

void printArr(int arr[], int& len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << ' ';
	}

	cout << "\n\n";
}