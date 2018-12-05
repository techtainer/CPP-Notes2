#include <iostream>
#include<array>
#include <tuple>

using namespace std;

std::tuple<int, double> getTuple()
{
	int a = 10;
	double d = 3.14;

	return std::make_tuple(a, d);
}

int& get(std::array<int, 100> my_array, int ix)
{
	return my_array[ix];
}

void main()
{
	std::array<int, 100> my_array;
	my_array[30] = 1024;

	get(my_array, 30) = 10; //�Լ�ó�� �������� �ᱹ my_array[30] �̶�� �ǹ�

	cout << my_array[30] << endl;

	//Tuple ����
	std::tuple<int, double> my_tp = getTuple();
	cout << std::get<0>(my_tp) << endl;
	cout << std::get<1>(my_tp) << endl;

	auto[a, d] = getTuple(); // C++17���� ����
	cout << a << endl;
	cout << d << endl;
}