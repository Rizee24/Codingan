#include <iostream>
using namespace std;

	int main(){
	int n, cari;
	bool ketemu = false;

	cout<< "Input jumlah data: ";
	cin>>n;
	cout<<endl;

	int list_data[n];

	for (int i=1; i<=n; i++){ 
		cout<< "Input data ke- "<< i <<" : "; 
		cin>>list_data[i];
	}

	cout<<endl;
	cout<<"Input bilangan yang dicari: ";
	cin>>cari; 
	cout<<endl;
	for (int i=0; i<=n; i++){
		if (list_data[i]==cari){
		ketemu=true;
		cout<<"Data ditemukan pada Index ke- "<<i<<endl;
		}
	}
	
	if (ketemu==false) {
		cout<<"Data tidak ditemukan";
	}
	return 0;
}
