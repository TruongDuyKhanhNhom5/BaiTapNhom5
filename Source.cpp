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
int dientichVuong (int canh)
{
	return canh * canh;
}
float dientichTron (int bankinh)
{
	return bankinh * bankinh * 3,14;
}
int dientichChuNhat (int cd, int cr)
{
	return cd * cr;
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
	//Dien tich hinh tron
	cout<<"\nDien tich hinh tron la : "<<dientichTron(a)<<"\n";
	//Dien tich hinh vuong
	cout<<"\nDien tich hinh vuong la : "<<dientichVuong(a,b)<<"\n";
	//Dien tich hinh chu nhat
	cout<<"\nDien tich hinh chu nhat la : "<<dientichChuNhat(a,b)<<"\n";
	system("pause");
	return 0;
}
