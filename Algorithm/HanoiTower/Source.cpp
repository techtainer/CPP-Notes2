#include<iostream>
#include<string>
using namespace std;

int moveCount;

void HanoiTowerAlg(int number, string from, string to, string middle)
{
	cout << "-- " << number << "  from :" << from << " to : " << to << " middle " <<middle<< endl;
	if (number == 0)
		return;

	HanoiTowerAlg(number - 1, from, middle, to);

	cout << "Move! " << number << "��° �� [" << from << " -> " << to << "]" << endl;
	moveCount++;

	HanoiTowerAlg(number - 1, middle, to, from);

}

int main(void)
{
	moveCount = 0;

	HanoiTowerAlg(3, "����","��","�߰�");
	cout << "�� ������ Ƚ�� : " << moveCount << endl;
}