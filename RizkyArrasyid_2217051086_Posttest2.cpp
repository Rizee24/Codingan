#include <iostream>

using namespace std;

int main() {
	
	int harga_awal, total_diskon, harga_akhir;
	
	cout<<"harga_awal\t: Rp. ";
	cin>>harga_awal;
	cout<<"harga_akhir\t: Rp. "<<harga_awal-harga_awal*10/100<<endl;
	cout<<"total_diskon\t: Rp. "<<harga_awal*10/100-harga_akhir<<endl;
	
	
	
	return 24;
	
}
