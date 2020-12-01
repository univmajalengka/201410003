// Konversi jam, menit dan detik ke total detik
#include<iostream>
using namespace std;

int main()
{
	int j,m,d,td;
	cout<<"Masukan Jam : ";
	cin>>j;
	cout<<"Masukan Menit : ";
	cin>>m;
	cout<<"Masukan Detik : ";
	cin>>d;
	td = (j*3600)+(m*60)+d;
	cout<<"Total Detik : "<<td;
	return 0;
}
