#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float fisika[10], kimia[10], biologi[10], mtk[10];
	float jumlah[10], rata_siswa[10], rata_fisika, rata_kimia, rata_biologi, rata_mtk;
	int banyak_data, i;
	char nama[10][10];
	int total = 0, total1 = 0, total2 = 0, total3 = 0;
	
	cout << "Masukkan Banyaknya Data\t: ";
	cin >> banyak_data;
	
	for(i = 0; i < banyak_data; i++){
		cout << "====================" << endl;
		cout << "Data Ke- " << i+1 << endl;
		cout << "====================" << endl;
		cout << "Nama\t\t: " << endl;
		cin >> nama[i];
		cout << "Nilai Fisika\t\t: " << endl;
		cin >> fisika[i];
		cout << "Nilai Kimia\t\t: " << endl;
		cin >> kimia[i];
		cout << "Nilai Biologi\t\t: " << endl;
		cin >> biologi[i];
		cout << "Nilai Matematika\t: " << endl;
		cin >> mtk[i];
		
		jumlah[i] = fisika[i] + kimia[i] + biologi[i] + mtk[i];
		rata_siswa[i] = jumlah[i]/4;
				
	} 
	
	cout << endl;
	cout << endl;
	cout << "==========================================================================================" << endl; 
	cout << setw(4) << "No" <<setw(15) << "Nama" << setw(15) << "Fisika" << setw(15) << "Kimia" << setw(15) << "Biologi" 
		<< setw(20) << "Matematika"  << endl;
		
	cout << "==========================================================================================" << endl;
	
	for(i = 0; i < banyak_data; i++){
		int no = i+1;
		cout << setw(4) << no << setw(15) << nama[i] << setw(13) << fisika[i] << setw(15) << kimia[i] << setw(14) << biologi[i] 
		<<  setw(18) << mtk[i]  << endl;
		
	}
	
	cout << endl;
	cout << "Rata-Rata Tiap Mahasiswa\t:" << endl;
	for(i = 0; i < banyak_data; i++){
		cout << nama[i] << "\t : " << rata_siswa[i] << endl;
		
	}
	
	for(i = 0; i < banyak_data; i++){
		total+=fisika[i];
		rata_fisika = total / banyak_data;
	}
	for(i = 0; i < banyak_data; i++){
	
		total1+=kimia[i];
		rata_kimia = total1 / banyak_data;
	}
	for(i = 0; i < banyak_data;i++){
		total2+=biologi[i];
		rata_biologi = total2 / banyak_data;
	}
	for(i = 0; i < banyak_data; i++){
		total3+= mtk[i];
		rata_mtk = total3 / banyak_data;
	}
	
	cout << endl;
	cout << "Rata-Rata Mata Kuliah\t: " << endl;
	cout << "Fisika" << "\t	: " << rata_fisika<< endl;
	cout << "Kimia" << "\t	: " << rata_kimia << endl;
	cout << "Biologi" << "\t	: " << rata_biologi << endl;
	cout << "Matematika" << "	: " << rata_mtk;
	
	return 0;
}
