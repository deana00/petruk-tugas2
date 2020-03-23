/*  Program untuk mengurutkan bilangan dari terkecil ke terbesar 
    maupun terbesar ke terkecil menggunakan pointer array dan pointer fungsi.
    Sebagai tugas responsi pengganti pertemuan ke-4.
    Start on Sat, March 21st 2020 at 7.14 am */

#include <iostream>
using namespace std;

void pilihan();

int main (){
  pilihan();
  int size, tmp;
  	char pilih; 

  	cout << "Masukkan pilihan = " ;
  	cin >> pilih ;
  	cout << endl << endl ;


  	cout << "========== Program Mengurutkan Bilangan ==========" << endl << endl ;
  	cout << "Ada berapa banyak bilangan = " ;
  	cin >> size ;
  	
  	int *data = new int[size];

  	if (pilih == '1'){
	  	for (int i=0; i<size; i++){
	  		cout << "Bilangan ke " << (i+1)<< " = " ;
	  		cin >> data[i] ;
		}
		  
		cout << "Bilangan sebelum diurutkan = " ;
		for (int i=0; i<size; i++){
			cout << data[i] << " " ;
		}
		cout << endl << endl ;
		
		for (int i=0; i<size; i++){
			for (int j=i+1; j<=size; j++){
				if (data[i]>data[j]){
					
					tmp = data[i];
					data[i] = data[j];
					data[j] = tmp;							//before :: data[i] = tmp;
				}
			}
	  	}

	  	cout << "Bilangan setelah diurutkan = ";
	  	for (int i=0; i<size; i++){
	  		cout << data[i] << " " ;
	  	}
	}
	cout << endl;
return 0;
}

void pilihan(){
	cout << "Urutkan : 1. Bilangan terkecil ke terbesar" << endl
		 << "          2. Bilangan terbesar ke terkecil" << endl
		 << "          3. Nama A-Z (1 kata)" << endl
		 << "          4. Nama Z-A (1 kata)" << endl
		 << "          (pilih 1,2,3, atau 4 saja)";
}
