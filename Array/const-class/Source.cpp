#include<iostream>
#include<string>

using namespace std;

class Something
{
public:
	string m_value = "default";

	// ���� �Լ��� const�μ� ���� ����
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
	something.getValue() = "OK"; // m_value �� string& �̹Ƿ� �Լ��� �̸����� m_value�� �ٲ�
	cout << "after :" << something.getValue() << endl;

	const Something something2;
	something2.getValue();

	return 0;
}