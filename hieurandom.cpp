#include <iostream>

using namespace std;

int random(int minN, int maxN) 
{
	return minN + rand() % (maxN + 1 - minN);
}

int main()
{
	
	//VuTruong_Hieu2SoNgaunhien
	int so1 = random(0, 100);
	int so2 = random(0, 100);
	cout << "\n";
	cout << "So ngau nhien thu nhat: " << so1<<"\n";
	cout << "So ngau nhien thu hai: " << so2 << "\n";
	cout << "Hieu cua 2 cua ngau nhien la: " << so1 - so2 << "\n";
	system("pause");
	return 0;
}
