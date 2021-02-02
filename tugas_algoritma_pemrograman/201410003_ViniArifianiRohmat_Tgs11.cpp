#include<iostream>

using namespace std;

int dis(int a, int b);
int hasil(int c, int d);
int out(int t_belanja, int dc, int t_bayar);
void garis();

int main()
{
	char kembali;
	int x, diskon, tb;
	
	do {
		garis();
		cout<<"Total Belanja : Rp. ";
		cin>>x;
		garis();
		cout<<endl;
		
		switch (x)
		{
			case 0 ... 25000 :
				diskon = dis(x, 0);
				tb = hasil(x, diskon);
				
				cout<<"Diskon 0%"<<endl;
				out(x, diskon, tb);
				break;
			
			case 25001 ... 50000 :
				diskon = dis(x, 10);
				tb = hasil(x, diskon);
				
				cout<<"Diskon 10%"<<endl;
				out(x, diskon, tb);
				break;
				
			case 50001 ... 100000 :
				diskon = dis(x, 12.5);
				tb = hasil(x, diskon);
				
				cout<<"Diskon 12,5%"<<endl;
				out(x, diskon, tb);
				break;
				
			default :
				diskon = dis(x, 15);
				tb = hasil(x, diskon);
				
				cout<<"Diskon 15%"<<endl;
				out(x, diskon, tb);
				break;
		}
		cout<<endl;
		garis();
		cout<<"Hitung Lagi? (y/n) ";
		cin>>kembali;
	}
	while (kembali == 'y' || kembali == 'Y');
	garis();
	cout<<"\nTerimakasih! \n";
	
	return 0;	
}

int dis(int a, int b)
{
	int t;
	t = a * b / 100;
	return t;
}

int hasil(int c, int d)
{
	int h;
	h = c - d;
	return h;	
}

int out(int t_belanja, int dc, int t_bayar)
{
	cout<<"Total Belanja : Rp. "<<t_belanja<<endl;
	cout<<"Total Diskon  : Rp. "<<dc<<endl;
	cout<<"Nominal Bayar : Rp. "<<t_bayar<<endl;
}

void garis()
{
	cout<<"--------------------------------"<<endl;	
}

