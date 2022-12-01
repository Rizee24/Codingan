#include <iostream>
#include <string>

using namespace std;
int kembalian (int x, int y){
	return x - y;
}
int main(){
	//deklarasi variabel
	string nama;
	int pilih[100];
	int jumlah[100];
	int harga[100];
	int sub_total[100];
	string menu[100];
	int total_bayar;
	int i = 0;
	bool selesai = false;
	
	cout <<"---------------------------------(((( SELAMAT DATANG ))))---------------------------------------" << endl;
	cout <<"**********************DAFTAR MENU MAKANAN DAN MINUMAN WARUNG NGAWI************************* "<< endl;
	cout << "[ 1. Soto Lamongan \t\t\t\t\tRp. 12000"<< " ]" << endl;
	cout << "[ 2. Bakso Beranak \t\t\t\t\tRp. 15000"<< " ]" <<  endl;
	cout << "[ 3. Ayam Geprek \t\t\t\t\tRp. 15000"<< " ]" << endl;
	cout << "[ 4. Mie Goreng \t\t\t\t\tRp. 10000"<< " ]" << endl;
	cout << "[ 5. Nasi Goreng \t\t\t\t\tRp. 15000"<< " ]" << endl;
	cout << "[ 6. Es Teh \t\t\t\t\t\tRp. 3000"<< "  ]" << endl;
	cout << "[ 7. Kopi \t\t\t\t\t\tRp. 5000"<< "  ]" << endl;
	cout << "[ 8. Aneka Jus Buah\t\t\t\t\tRp. 5000"<< "  ]" << endl;
	cout << "-------------------------------------------------------------------------------------------" << endl;
	cout << "-----------------------------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "((( Tekan 0 jika selesai melakukan pemesanan ))) "<< endl;
	cout << endl;
	cout << "Masukkan Nama : "; 
	cin >> nama;
	
	cout << endl;
	while (selesai == false){
		cout << "Pilih Menu : ";
		cin >> pilih[i];
		
		if (pilih[i] <= 8){
			
			if (pilih[i] == 0){
				selesai = true;
			}else {
				
				switch (pilih[i]){
					case 1 : menu[i] = "Soto Lamongan"; harga[i] = 12000;
					break;
					case 2 : menu[i] = "Bakso Beranak"; harga[i] = 15000;
					break;
					case 3 : menu[i] = "Ayam Geprek"; harga[i] = 15000;
					break;
					case 4 : menu[i] = "Mie Goreng"; harga[i] = 10000;
					break;
					case 5 : menu[i] = "Nasi Goreng"; harga[i] = 15000;
					break;
					case 6 : menu[i] = "Es Teh"; harga[i] = 3000;
					break;
					case 7 : menu[i] = "Kopi"; harga[i] = 5000;
					break;
					case 8 : menu[i] = "Aneka Jus Buah"; harga[i] = 5000;
					break;
					default : menu[i] = " "; harga[i] = 0;
					break;
				}
				
				cout << "Jumlah Porsi " << menu[i] << "  : ";
				cin >> jumlah[i];
				cout << endl;
				
				sub_total[i] = jumlah[i]*harga[i];
				total_bayar += sub_total[i];
				i++;
			}
			
		}else {
			cout << " Menu yang dipilih tidak sesuai"<< endl;
			cout << endl;
		}
	}
	
	cout << endl;
	cout << "------------------------------------------------------------------------";
	int uang;
	cout << " Masukkan Jumlah Uang : Rp. ";
	cin >> uang;
	
	if (uang < total_bayar){
		cout << "(((( Uang Anda Kurang )))) " << endl;
	}
	
	cout << endl;
	cout << "*************************(((( STRUK PEMBELIAN ))))*****************************" << endl;
	cout << "---------------------------------------------------------------------" << endl;
	
	cout << "Nama Pemesan \t: " << nama << endl;
	for (int a = 0; a < i; a++){
	cout << "No \t\t: " << a + 1 << "  "<< endl;
	cout << "Nama Menu \t: " << menu[a] << "  " << endl;
	cout << "Harga \t\t: " << harga[a] << "  " << endl;		
	cout << "Jumlah \t\t: " << jumlah[a] << "  " << endl;		      
	cout << "Sub Total \t: " << sub_total[a] << endl;
	cout << "--------------------------------------------" << endl;
	}
	

	
		cout << "------------------------------------------------------------------------------" << endl;
		cout << "Total Bayar \t\t = Rp. " << total_bayar << endl;
		cout << "Kembalian / kekurangan	 = Rp. " << kembalian(uang, total_bayar) << endl;
		cout << endl;
		cout << "********************TERIMA KASIH TELAH BERBELANJA**************************" << endl;
		cout << "-------------------------SELAMAT MENIKMATI--------------------------------" << endl;
		return 0;
}
