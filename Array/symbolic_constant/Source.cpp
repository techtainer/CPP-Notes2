#include<iostream>

const char* getName();

void main(void)
{
	using namespace std;

//	char *name = "SooRee"; // Error. �����Ϳ� ���� �����Ϸ���
	const char *name = "SooRee"; // const ���̸� ���
	const char *tmp = getName();

	int array[5] = { 1,2,3,4,5 };
	char c_array[] = "Hello";
	const char *co_name = "World";

	// char pointer �� ��� �ּҸ� ����� string�� �����
	cout << array << endl;
	cout << c_array << endl;
	cout << co_name << endl;

	// char�� ��쵵 �ּҸ� ����϶�� �ص� ���� null�� ���ö����� ���
	char c_char = 'H';
	cout << &c_char << endl;

	//������ ������ ������� ������� �����Ϸ��� ���� �ּҸ� �Ҵ��Ѵٴµ�..�ٸ���..
	const char *name1 = "SooRee"; 
	const char *name2 = "SooRee";
	cout << &name1 << endl;
	cout << &name2 << endl;
}

const char* getName()
{
	return "Ahn"; // const �� ���, �׳� return �ص���
}
