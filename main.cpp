#include <iostream>
using namespace std;

/* sizeof */

int main()
{
	int arr[]{ 1, 12, 123, 1234, 12345 };
	// индекс  0   1    2    3      4
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
	{
		//этот алгоритм позволит вам использовать sizeof, для того чтобы опр n кол во индексов
		cout << arr[i] << endl;
	}
}