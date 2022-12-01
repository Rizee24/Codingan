#include <iostream>
using namespace std;
int main() {
	int angka[5] = {10, 5, 15, 0, 12};
	int temp = 0;
	
	cout<< "Array sebelum disorting : ";
	for(int i = 0; i < 5; i++){
		cout<< angka[i]<<" ";
	}
	
	for(int i = 0; i < 5; i++){
		for(int j = i+1; j < 5; j++){
			if(angka[i] > angka[j]){
				temp = angka[i];
				angka[i] = angka[j];
				angka[j] = temp;
			}
		}
	}
	cout<<endl;
	
	cout<<"Array sudah disorting : ";
	for(int i = 0; i < 5; i++){
		cout<<angka[i]<<" ";
	}
}
