#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents=0):m_cents(cents)
	{}

	int getCents() const { return m_cents; }
	int& getCents() { return m_cents; } // m_cents의 reference
	
	friend bool operator == (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents == c2.m_cents;
	}

	friend bool operator != (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents != c2.m_cents;
	}

	friend bool operator > (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents > c2.m_cents;
	}

	friend bool operator < (const Cents &c1, const Cents &c2)
	{
		return c1.m_cents < c2.m_cents;
	}

	friend std::ostream& operator << (std::ostream &out, const Cents &cents)
	{
		out << cents.m_cents ;

		return out;
	}

	// friend를 안붙이면 내 class는 this로 하고 인자 입력 받을 필요없음
	Cents operator + (const Cents &c2)
	{
		return Cents(this->getCents() + c2.m_cents);
	}

	Cents operator - (const Cents &c2)
	{
		return Cents(this->getCents() - c2.m_cents);
	}

	Cents operator - () const
	{
		return Cents(-m_cents);
	}

	bool operator ! () const
	{
		return (m_cents == 0) ? true : false;
	}
};

//void add(const Cents &c1, const Cents &c2, Cents &c_out)
//{
//	c_out.getCents() = c1.getCents() + c2.getCents();
//}

int main()
{
	Cents cents1(6);
	Cents cents2(8);
	Cents sum;

	//add(cents1, cents2, sum);

	cout << (cents1 + cents2 + Cents(10)).getCents() << endl;
	cout << (Cents(100) - Cents(10) - Cents(10)).getCents() << endl;
	cout << -cents1 << endl;
	cout << !cents1 << endl;

	if (cents1 == cents2)
		cout << " Equal " << endl;
	else
		cout << " Not Equal" << endl;

	vector<Cents> arr(20);
	for (unsigned i = 0; i < 20; i++)
		arr[i].getCents() = i;

	std::random_shuffle(begin(arr), end(arr));

	for (auto &e: arr)
		cout << e << " ";

	cout << endl;

	std::sort(begin(arr), end(arr));

	for (auto &e : arr)
		cout << e << " ";

	cout << endl;

	return 0;
}