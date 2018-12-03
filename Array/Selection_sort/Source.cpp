#include<iostream>

void printOut(const int *tmpArray, const int length)
{
	using namespace std;

	for (int i = 0; i < length; i++)
		cout << *(tmpArray+i) << " ";

	cout << endl;
}

int main(void)
{
	int value[] = { 3,5,2,1,4 };
	int total = sizeof(value) / sizeof(int);

	for (int i = 0; i < total; i++)
	{
		printOut(value, total);

		for (int j = (i + 1); j < total; j++)
		{
			if (value[i] > value[j])
			{
				//tmp = value[j];
				//value[i] = value[j];
				//value[j] = value[i];
				std::swap(value[i], value[j]);
			}
		}
	}

	printOut(value, total);

	return 0;
}