#include <iostream>

using namespace std;

int a,b,c;
void bintang(int x);
void garis();

int main (){
	cout<<"Ini Adalah Setengah Piramida Tinggi 5 Bintang"<<endl;
	bintang(5);
	garis();
	
	cout<<"\nBuatlah Bintang Mu!"<<endl;	
	cout<<"Masukkan Tinggi Bintang : ";
	cin>>c;
	bintang(c);
	garis();	
	
	return 0;
}

void bintang(int x)
{
	for (a=1;a<=x;a++){
		for (b=1;b<=a;b++){
			cout<<"*";
		}
		cout<<endl;
	}	
}

void garis()
{
	cout<<"--------------------------------"<<endl;	
}
