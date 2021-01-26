#include<iostream>
#include<string>

using namespace std;
void garis();
const float persentunjangan = 0.2, persenpajak = 0.15;

int main()
{
	string namakaryawan;
	float gajibersih, gajipokok, pajak, tunjangan;
	
	cout<<"Program Take Home Pay"<<endl;
	garis();
	
	cout<<"Masukkan Nama Karyawan : ";
	getline(cin, namakaryawan);
		
	cout<<"Masukkan Gaji Pokok    : Rp. ";
	cin>>gajipokok;
	
	tunjangan = persentunjangan * gajipokok;
	pajak = persenpajak * gajipokok;
	gajibersih = gajipokok + tunjangan - pajak;
	
	cout<<endl<<endl;
	cout<<"Gaji Bersih"<<endl;
	garis();
	cout<<"Nama Karyawan : "<<namakaryawan<<endl;
	cout<<"Gaji Bersih   : Rp. "<<gajibersih;
	
	return 0;	
}

void garis()
{
	cout<<"--------------------------------"<<endl;
}
