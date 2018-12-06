#include<iostream>
using namespace std;

int sumTo(int sumto)
{
	if (sumto <= 0)
		return 0;
	else if (sumto <= 1)
		return 1;
	else
	{
		cout << "B : " << sumto << endl;
		const int sum_m = sumTo(sumto - 1);

		cout << "A : " << sum_m << endl;
		return sum_m + sumto;

	}
}

void main()
{
	cout << sumTo(10) << endl;
}