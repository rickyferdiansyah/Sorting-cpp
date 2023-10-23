#include <iostream>
using namespace std;

int main(){
    int nilai[] = {70, 80, 90, 65, 75, 95, 85};
    int nilaiSize = sizeof(nilai)/sizeof(nilai[0]);
    

    //nampilin sebelum diurutkan
    cout << "sebelum urut : ";
    for(int i = 0; i < nilaiSize; i++){
        cout << nilai[i] << " ";
    }
    cout << endl;

    //selection sort
    for(int a = 0; a < nilaiSize; a++){
        int minIndex = a; //kita buat variable buat nampung index yang punya value terkecil, value sementaranya mengikuti a

        // Mencari indeks elemen minimum dalam sisa array
        for(int b = a; b < nilaiSize; b++){  //dia bakal loop sampai selesai, meskipun di tengah jalan sudah menemukan index dengan value lebih kecil yang dimasukkan ke minIndex angka indexnya
            if (nilai[b] < nilai[minIndex]){
                minIndex = b;   
            }
        }
        // Menukar elemen terkecil dengan elemen pertama dalam sisa array
        int temp = nilai[a];
        nilai[a] = nilai[minIndex];
        nilai[minIndex] = temp;
    }

    // nampilin sesudah diurutkan
    cout << "sesudah urut : ";
    for (int i = 0; i < nilaiSize; i++){
        cout << nilai[i] << " ";
    }


    cout << "\n\n\n";
    return 0;
}