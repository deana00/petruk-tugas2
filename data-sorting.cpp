/*  Program sederhana untuk mengurutkan data 
	menggunakan algoritma bublesort serta
	pointer array dan pointer fungsi.
    Sebagai tugas responsi pengganti pertemuan ke-4.
    Start on Sat, March 21st 2020 at 7.14 am.
	------------------------------------------------*/

#include <iostream>
using namespace std;

void pilihan();
void toMax(int [], int *);
void toMin(int [], int *);
void toZ(string [], int *);
void toA(string [], int *);
void inputNum(int [], int *);
void printNum(int [], int *);
void inputString(string [], int *);
void printString(string [], int *);
void (*Fptri)(int [], int *);
void (*Fptrsi)(string [], int *);
void before();
void after();

int main (){
  	pilihan();
  	int size;
  	char pilih; 

  	cout << "\nMasukkan pilihan = " ;
  	cin >> pilih ;
  	cout << endl << endl ;

  	cout << "========== Program Mengurutkan Data ==========" << endl << endl ;
  	cout << "Ada berapa banyak data = " ;
  	cin >> size ;

  	if (pilih == '1' || pilih == '2'){
		int *data = new int[size];
		
	  	inputNum(data, &size);
  		before();
  		printNum(data, &size);
  		if(pilih == '1'){
  			Fptri = toMax;
  			Fptri(data, &size);
  		}
		else{
			Fptri = toMin;
			Fptri(data, &size);
		}
		after();
		printNum(data, &size);
		delete []data;
  	}
	else if (pilih == '3' || pilih == '4'){
		string *data = new string[size];
		
                inputString(data, &size);
  		before();
  		printString(data, &size);
  		if(pilih == '3'){
  			Fptrsi = toZ;
  			Fptrsi(data, &size);
  		}
		else if(pilih == '4'){
			Fptrsi = toA;
			Fptrsi(data, &size);
		}
		after();
		printString(data, &size);
		delete []data;
	}
	else{
  		cout << "Maaf, pilihan Anda tidak tersedia. Silahkan ulangi.\n";
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
void toMax(int data[], int *n){
	for(int i = 0; i < *n; i++){
        	for(int j = i+1; j < *n; j++){	
            		if(data[i] > data[j]){

                		swap(data[i], data[j]);
            }
        }
    }
}
void toZ(string data[], int *n){
	for(int i = 0; i < *n; i++){
		for(int j = i+1; j < *n; j++){
			if(data[i] > data[j]){
				
				swap(data[i], data[j]);
			}
		}
	}
}
void toA(string data[], int *n){
	for(int i = 0; i < *n; i++){
		for(int j = i+1; j < *n; j++){
			if(data[i] < data[j]){

				swap(data[i], data[j]);
			}
		}
	}
}
void toMin(int data[], int *n){
	for(int i = 0; i < *n; i++){
        	for(int j = i+1; j < *n; j++){	
            		if(data[i] < data[j]){

                		swap(data[i], data[j]);
            }
        }
    }
}
void inputNum(int data[], int *n){
	for (int i = 0; i < *n; i++){
	  	cout << "Bilangan ke " << (i+1)<< " = " ;
	  	cin >> *(data+i);
	}
}
void printNum(int data[], int *n){
	for (int i = 0; i < *n; i++){
		cout << *(data+i) << " " ;
	}
	cout << endl;
}
void inputString(string data[], int *n){
	for (int i = 0; i < *n; i++){
	  	cout << "Data ke-" << (i+1)<< " = " ;
	  	cin >> *(data+i);
	}
}
void printString(string data[], int *n){
	for (int i = 0; i < *n; i++){
		cout << i+1 << "." << *(data+i) << endl;
	}
}
void before(){
	cout << "\nData sebelum diurutkan :\n";
}
void after(){
	cout << "\nData setelah diurutkan :\n";
}
