#include<iostream>

using namespace std;

int main()
{
	menu :
	cout<<"|-- Kalkulator Aritmatika --|"<<endl;
	cout<<"Menu :"<<endl;
	cout<<"1. Penjumlahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	cout<<"5. Sisa Hasil Bagi"<<endl;
	
	int a, b, c, menu;
	float d, e, f;
	
	cout<<"Pilih Menu : ";
	cin>>menu;
	cout<<"--------------------------------"<<endl;
	
	if (menu == 1){
		cout<<"Masukkan angka pertama : ";
		cin>>a;
		cout<<"Masukkan angka kedua : ";
		cin>>b;
		c = a + b;
		cout<<"Hasil penjumlahan dari "<<a<<" + "<<b<<" = "<<c;
	}
	else if (menu == 2){
		cout<<"Masukkan angka pertama : ";
		cin>>a;
		cout<<"Masukkan angka kedua : ";
		cin>>b;
		c = a - b;
		cout<<"Hasil pengurangan dari "<<a<<" - "<<b<<" = "<<c;
	}
	else if (menu == 3){
		cout<<"Masukkan angka pertama : ";
		cin>>a;
		cout<<"Masukkan angka kedua : ";
		cin>>b;
		c = a * b;
		cout<<"Hasil perkalian dari "<<a<<" * "<<b<<" = "<<c;
	}
	else if (menu == 4){
		cout<<"Masukkan angka pertama : ";
		cin>>d;
		cout<<"Masukkan angka kedua : ";
		cin>>e;
		f = d / e;
		cout<<"Hasil pembagian dari "<<d<<" / "<<e<<" = "<<f;
	}
	else if (menu == 5){
		cout<<"Masukkan angka pertama : ";
		cin>>a;
		cout<<"Masukkan angka kedua : ";
		cin>>b;
		f = a % b;
		cout<<"Sisa hasil bagi dari "<<a<<" % "<<b<<" = "<<f;
	}
	else {
		cout<<"Menu tidak ada!"<<endl;
		system("pause");
        system("cls");
        goto menu;
	}
	return false;	
}
