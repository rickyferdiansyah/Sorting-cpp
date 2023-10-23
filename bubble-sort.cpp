#include <iostream>
using namespace std;



int main(){
    int nilai[] = {70, 80, 90, 65, 75, 95};
    int nilaiSize = sizeof(nilai)/sizeof(nilai[0]);

    //nampilin sebelum urut
    cout << "sebelum urut : ";
    for (int i = 0; i < nilaiSize; i++){
        cout << nilai[i] << " ";
    }
    cout << endl;
    
    //bubbleSort ASC
    for(int i = 0; i < nilaiSize-1; i++){  //ini pakai -1 atau ngga pun sama saja, tapi kalo pakai -1 sedikit lebih cepat, karena ga muter sekali lagi
        for(int j = 0; j < nilaiSize-1; j++){  //sampai nilaiSize-1 karena terakhir yakni perbandingan antara 75 dan 95, kalau ngga -1 nanti error karena membandingkan 95 dengan data kosong
            if (nilai[j] > nilai[j+1]){
                std::swap(nilai[j], nilai[j+1]); //untuk menukar nilai
            }
        }
    }

    cout << "sesudah urut : ";
    // nampilin setelah urut
    for (int i = 0; i < nilaiSize; i++){
        cout << nilai[i] << " ";
    }

    cout << "\n\n\n";
    return 0;
};