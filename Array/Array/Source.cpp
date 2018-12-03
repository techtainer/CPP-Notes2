#include <iostream>

void temp(int *test)
{
	std::cout << *(test+1) << std::endl;
	
}

int main()
{
	int val[20]{ 1,2,3, };

	temp(&(val[1]));

	return 0;
}