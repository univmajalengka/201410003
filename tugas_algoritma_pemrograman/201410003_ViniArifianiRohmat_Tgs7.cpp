#include<iostream>
using namespace std;

int total_detik(int j, int m, int d);
void jmd(int td);
void batas();
void jarak();
void garis();

int main()
{
	char menu, kembali;
	int j1,m1,d1,td1,j2,m2,d2,td2,td3;
	
	do{
		garis();
		cout<<" MENU ";
		garis();
		jarak();
		cout<<"1. Konversi jam, menit dan detik ke total detik"<<endl;
		cout<<"2. Konversi total detik ke jam, menit dan detik"<<endl;
		cout<<"3. Program Billing Warnet/Telepon"<<endl;
		batas();
		jarak();
		
		cout<<"Pilih Menu : ";
		cin>>menu;
		
		switch (menu)
		{
			case '1' :
				jarak();
				cout<<"Konversi jam, menit dan detik ke total detik"<<endl;
				batas();
				cout<<"Masukan Jam : ";
				cin>>j1;
				cout<<"Masukan Menit : ";
				cin>>m1;
				cout<<"Masukan Detik : ";
				cin>>d1;
				td1 = total_detik(j1, m1, d1);
				
				cout<<"Total Detik : "<<td1;
													
				break;
			
			case '2' :
				jarak();
				cout<<"Konversi total detik ke jam, menit dan detik"<<endl;
				batas();
				cout<<"Masukan Total Detik : ";
				cin>>td1;
				
				cout<<"Hasil Konversi : ";
				jmd(td1);
				
				break;
			
			case '3' :
				jarak();
				cout<<"PROGRAM BILLING WARNET/TELEPON"<<endl;
				batas();
				
				jarak();
				garis();
				cout<<" Waktu Awal ";
				garis();
				jarak();
				cout<<"Masukkan Jam   : ";
				cin>>j1;
				cout<<"Masukkan Menit : ";
				cin>>m1;
				cout<<"Masukkan Detik : ";
				cin>>d1;
				td1 = total_detik(j1, m1, d1);
				
				jarak();
				garis();
				cout<<" Waktu Akhir ";
				garis();
				jarak();
				cout<<"Masukkan Jam   : ";
				cin>>j2;
				cout<<"Masukkan Menit : ";
				cin>>m2;
				cout<<"Masukkan Detik : ";
				cin>>d2;
				td2 = total_detik(j2, m2, d2);
				
				td3 = td2 - td1;
				
				jarak();
				batas();
				cout<<"Total waktu yang telah digunakan adalah ";
				jmd(td3);
				
				break;
			
			default :
				cout<<"Pilihan Tidak Tersedia"<<endl;
		}
		jarak();
		jarak();
		cout<<"Kembali ke menu? (y/n)";
		cin>>kembali;
		jarak();
	}
	while(kembali=='y' || kembali=='Y');		
	cout<<"\nTerimakasih! \n";		
}

int total_detik(int j, int m, int d)
{
	int a;
	a = (j*3600)+(m*60)+d;
	return a;
}

void jmd(int td)
{
	int j3, sm3, m3, d3;
	j3  = td / 3600;
	sm3 = td % 3600;
	m3  = sm3 / 60;
	d3  = sm3 % 60;	
	
	cout<<j3<<":"<<m3<<":"<<d3;
}

void batas()
{
	cout<<"--------------------------------"<<endl;	
}

void jarak()
{
	cout<<endl;
}

void garis()
{
	cout<<"----------";
}

