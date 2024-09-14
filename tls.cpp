#include <iostream>
#include <iomanip>
using namespace std;

int datanilai[999], jumlah, minnilai = 100, maxnilai = 0, rata = 0, sum;
string datanilai2[999];

void ratarata(int jumlah){
    //menghitung nilai rata rata
	for (int i = 1; i <= jumlah; i++){
	    sum = datanilai[i] + sum;
	    rata = sum/i;
	}
}

void minmax(int jumlah){
	//menghitung nilai min dan max nya
	for (int i = 1; i <= jumlah; i++){
	    if(maxnilai < datanilai[i]){
	        maxnilai = datanilai[i];
	    }
	    if(minnilai > datanilai[i]){
	        minnilai = datanilai[i];
	    }
	}   
}


void konversi(int jumlah){
	//konversi nilai
	for(int i = 1; i <= jumlah; i++){
	    if(datanilai[i] >= 85){
	        datanilai2[i] = "A";
	    }
	    else if(datanilai[i] >= 80){
	        datanilai2[i] = "A-";
	    }
	    else if(datanilai[i] >= 75){
	        datanilai2[i] = "B+";
	    }
	    else if(datanilai[i] >= 70){
	        datanilai2[i] = "B";
	    }
	    else if(datanilai[i] >= 65){
	        datanilai2[i] = "C+";
	    }
	    else if(datanilai[i] >= 60){
	        datanilai2[i] = "C";
	    }
	    else if(datanilai[i] >= 55){
	        datanilai2[i] = "D";
	    }
	    else if(datanilai[i] < 55){
	        datanilai2[i] = "E";
	    }
	}
	
}


void tampildata(int jumlah){
	//menampilkan semua data yang sudah dimasukan
	cout << "Data : " << datanilai[1];
	for (int j = 2; j <= jumlah; j++){
		cout << ", " << datanilai[j];
		} cout << endl;
}


int main() {
    
    //menambahkan data sebanyak jumlah
	cout << "Masukan banyaknya jumlah data : ";
	cin >> jumlah;
	
	    for (int i = 1; i <= jumlah; i++) {
        do {
		    cout << "masukan data ke " << i << " : ";
		    cin >> datanilai[i];
            if (datanilai[i] < 0 || datanilai[i] > 100) {
                cout << "Nilai yang anda masukan salah" << endl;
            }
        }
        while (datanilai[i] < 0 || datanilai[i] > 100);
    }
	tampildata(jumlah);
    ratarata(jumlah);
    minmax(jumlah);
    konversi(jumlah);
    
	//menampilkan semua data olahan
	cout << "\n\nnilai rata rata : " << rata << "\n";
	cout << "nilai max \t: " << maxnilai << "\n";
	cout << "nilai min \t: " << minnilai << "\n";
	cout << "\n\n|Nomor\t|Angka\t|Huruf\t|\n";
	for (int j = 1; j <= jumlah; j++){
		cout << "|" << j << "\t|" << datanilai[j] << "\t|" << datanilai2[j] << "\t|\n";
		}
	

	return 0;
}
