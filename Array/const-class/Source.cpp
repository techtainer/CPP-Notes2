#include<iostream>
#include<string>

using namespace std;

class Something
{
public:
	string m_value = "default";

	// 같은 함수라도 const로서 구분 가능
	const string& getValue() const
	{
		cout << "const version" << endl;
		return m_value;
	}

	string& getValue()
	{
		cout << "non-const version" << endl;
		return m_value;
	}
};

int main()
{
	Something something;
	cout << "before :" << something.getValue() << endl;
	something.getValue() = "OK"; // m_value 가 string& 이므로 함수의 이름으로 m_value를 바꿈
	cout << "after :" << something.getValue() << endl;

	const Something something2;
	something2.getValue();

	return 0;
}