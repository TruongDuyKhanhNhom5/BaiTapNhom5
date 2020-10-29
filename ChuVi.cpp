

#include <iostream>
using namespace std;
float tinhChuViHinhVuong(float canh) {
	return 1.0*(canh*4);
}
float tinhChuViHinhChuNhat(float dai, float rong) {
	return 1.0*((dai + rong) * 2);
}
float tinhChuViHinhTron(float bankinh) {
	return 3.14*(bankinh*2);
}
int main()
{
	float dai = 5.2f, rong = 7.1f,bankinh=3.3f,canh=2.7f;
	cout << "Chu vi hinh tron";
	cout << tinhChuViHinhTron(bankinh)<<endl;
	cout << "Chu vi hinh vuong";
	cout << tinhChuViHinhVuong(canh)<<endl;
	cout<<"Chu vi hinh chu nhat";
	cout << tinhChuViHinhChuNhat(dai, rong);
}
