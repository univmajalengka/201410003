#include<iostream>

using namespace std;

int main()
{
	cout<<"--------------------------------"<<endl;
	cout<<"PROGRAM BILLING WARNET / TELEPON"<<endl;
	cout<<"--------------------------------"<<endl;
	
	int j1,m1,d1,td1,j2,m2,d2,td2,j3,m3,d3,td3,sm3;
	
	cout<<""<<endl;
	cout<<"---------- Waktu Awal ----------"<<endl;
	cout<<"Masukkan Jam : ";
	cin>>j1;
	cout<<"Masukkan Menit : ";
	cin>>m1;
	cout<<"Masukkan Detik : ";
	cin>>d1;
	
	cout<<""<<endl;
	
	cout<<"---------- Waktu Akhir ----------"<<endl;
	cout<<"Masukkan Jam : ";
	cin>>j2;
	cout<<"Masukkan Menit : ";
	cin>>m2;
	cout<<"Masukkan Detik : ";
	cin>>d2;	
	
	td1 = (j1*3600)+(m1*60)+d1;
	td2 = (j2*3600)+(m2*60)+d2;
	
	td3 = td2 - td1;
	
	j3  = td3 / 3600;
	sm3 = td3 % 3600;
	m3  = sm3 / 60;
	d3  = sm3 % 60;
	
	cout<<""<<endl;	
	cout<<"--------------------------------"<<endl;
	cout<<"Hasil Perbedaan Dari 2 Buah Jam Billing Telepon / Warnet Adalah ";
	cout<<j3<<":"<<m3<<":"<<d3;
	
	return 0;
}
