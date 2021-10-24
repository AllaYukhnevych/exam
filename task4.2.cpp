#include <iostream>
using namespace std;

int main()
{
	const int Row = 3;
	const int Col = 3;

	int arr1[Row][Col]{ {}, {}, {} };
	int arr2[Row][Col]{ {}, {},{} };
	int sum_arr[Row][Col] = { {},{},{} };

	cout << "Matrix one " << endl;
	for (int i = 0; i < Row; ++i)
	{

		for (int j = 0; j < Col; j++)
		{
			arr1[i][j] = rand() % 20;
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Matrix two " << endl;
	for (int i = 0; i < Row; ++i)
	{

		for (int j = 0; j < Col; j++)
		{
			arr2[i][j] = rand() % 20;
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Matrix sum " << endl;
	for (int i = 0; i < Row; i++)
	{
		for (int j = 0; j < Col; j++)
		{

			sum_arr[i][j] = arr1[i][j] + arr2[i][j];
			cout << sum_arr[i][j] << " ";
		}
		cout << endl;
	}


}