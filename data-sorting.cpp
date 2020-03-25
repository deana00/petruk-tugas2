/*  Program sederhana untuk mengurutkan data 
	menggunakan algoritma bublesort serta
	pointer array dan pointer fungsi.
    Sebagai tugas responsi pengganti pertemuan ke-4.
    Start on Sat, March 21st 2020 at 7.14 am.
	------------------------------------------------*/

#include <iostream>
using namespace std;

void pilihan();
void toMax(int [], int);
void inputNum(int [], int);
void printNum(int [], int);

int main (){
  	pilihan();
  	int size;
  	char pilih; 

  	cout << "\nMasukkan pilihan = " ;
  	cin >> pilih ;
  	cout << endl << endl ;

  	cout << "========== Program Mengurutkan Bilangan ==========" << endl << endl ;
  	cout << "Ada berapa banyak data = " ;
  	cin >> size ;

  	if (pilih == '1'){
		int *data = new int[size];
		
	  	for (int i=0; i<size; i++){
	  		cout << "Bilangan ke " << (i+1)<< " = " ;
	  		cin >> data[i] ;
		}
		  
		cout << "Bilangan sebelum diurutkan = " ;
		for (int i=0; i<size; i++){
			cout << data[i] << " " ;
		}
		cout << endl << endl ;
		
		toMax(data, size);

	  	cout << "Bilangan setelah diurutkan = ";
	  	for (int i=0; i<size; i++){
	  		cout << data[i] << " " ;
	  	}
		delete []data;
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
void toMax(int data[], int n){
	for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){	
            if(data[i] > data[j]){

                swap(data[i], data[j]);
            }
        }
    }
}
void printNum(int data[], int n){
	for (int i = 0; i < n; i++){
		cout << *(data+i) << " " ;
	}
	cout << endl;
}
void inputString(string data[], int n){
	for (int i = 0; i < n; i++){
	  	cout << "Data ke-" << (i+1)<< " = " ;
	  	cin >> *(data+i);
	}
}
