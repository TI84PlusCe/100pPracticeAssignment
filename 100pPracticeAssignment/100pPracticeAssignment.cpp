#include <iostream>
using namespace std;
void bubSort(int rah[]);

int main()
{
	int n[10] = { 10, 13, 6, 4, 6645, 543, 23, 43, 422, 511 };
	cout << "This is an unsorted list \n";
	cout << "---------------------------\n";

	for (int index = 0; index < 10; index++)
	{
		cout << n[index] << "\t";
	}
	cout << "\n";
	bubSort(n);
	cout << "This is a sorted list \n";
	cout << "---------------------------\n";

	for (int index = 0; index < 10; index++)
	{
		cout << n[index] << "\t";
	}

}

void bubSort(int rah[])
{
	int re;
	for (int i = 0; i < 10; i++)
	{
		for (int x = i + 1; x < 10; x++)
		{
			if (rah[x] < rah[i])
			{
				re = rah[i];
				rah[i] = rah[x];
				rah[x] = re;
			}
		}
	}
}