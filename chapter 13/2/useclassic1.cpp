#include <iostream>
#include "classic1.h"

using namespace std;

void Bravo(const Cd & disk);

int main()
{
	{
		Cd c1("Beatles", "Capitol", 14, 35.5);
		Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
		Cd *pcd = &c1;

		cout << "객체를 직접 사용:\n";
		c1.Report();
		c2.Report();

		cout << "객체를 지시하는 Cd * 포인터 사용:\n";
		pcd->Report();
		pcd = &c2;
		pcd->Report();

		cout << "Cd 참조 매개변수를 사용하여 함수를 호출:\n";
		Bravo(c1);
		Bravo(c2);

		cout << "대입 테스트:\n";
		Classic copy;
		copy = c2;
		copy.Report();
	}
	cin.get();
	return 0;
}

void Bravo(const Cd & disk)
{
	disk.Report();
}