#include<iostream>

const char* getName();

void main(void)
{
	using namespace std;

//	char *name = "SooRee"; // Error. 포인터에 값을 대입하려함
	const char *name = "SooRee"; // const 붙이면 허용
	const char *tmp = getName();

	int array[5] = { 1,2,3,4,5 };
	char c_array[] = "Hello";
	const char *co_name = "World";

	// char pointer 인 경우 주소를 안찍고 string을 출력함
	cout << array << endl;
	cout << c_array << endl;
	cout << co_name << endl;

	// char인 경우도 주소를 출력하라고 해도 값을 null이 나올때까지 출력
	char c_char = 'H';
	cout << &c_char << endl;

	//내용이 같으면 변수명과 상관없이 컴파일러가 같은 주소를 할당한다는데..다르네..
	const char *name1 = "SooRee"; 
	const char *name2 = "SooRee";
	cout << &name1 << endl;
	cout << &name2 << endl;
}

const char* getName()
{
	return "Ahn"; // const 일 경우, 그냥 return 해도됨
}
