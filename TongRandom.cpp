#include <iostream>

using namespace std;

int tong(int a, int b);
int random(int minN, int maxN) {
	return minN + rand() % (maxN + 1 - minN);
}

int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int  a=  random(0, 100);
	int b = random(0, 100);
	cout <<"\nSo a:"<< a;
	cout << "\nSo b:"<<b;
	cout << "\nTong hai so khi randum la:"  << a+b ;
	
		system("pause");
		return 0;
	}