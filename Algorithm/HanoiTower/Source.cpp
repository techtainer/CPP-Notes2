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

	cout << "Move! " << number << "번째 판 [" << from << " -> " << to << "]" << endl;
	moveCount++;

	HanoiTowerAlg(number - 1, middle, to, from);

}

int main(void)
{
	moveCount = 0;

	HanoiTowerAlg(3, "시작","끝","중간");
	cout << "총 움직임 횟수 : " << moveCount << endl;
}