#include <iostream>

using namespace std;
int tong(int a, int b)
{
	return a+b:
}
int hieu(int a, int b)
{
	return a - b;
}
int tich(int a, int b)
{
	return a*b;
}
float thuong(int a, int b)
{
	return a/b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a = 5;
	int b = 4;
	//VuTruong_Hieu()
	cout << "\nHieu cua 2 so la: " << hieu(a,b) << "\n";

	//DuyKhanh_Tong()
	cout<<"Duy Khanh: ham tong";
	cout<<"Tong 2 so :"<< tong(a,b);
	
	//VanHien_tich()
	cout << "\nTich cua 2 so la: " << tich(a,b) << "\n";
	
	//AnhDuy_thuong()
	cout<<"\nThuong cua 2 so la: "<<thuong(a,b)<<"\n";
	system("pause");
	return 0;
}
