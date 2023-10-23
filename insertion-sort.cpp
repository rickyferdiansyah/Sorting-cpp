#include <iostream>
using namespace std;

int main()
{
    int nilai[] = {70, 80, 90, 65, 75, 95, 85};
    int nilaiSize = sizeof(nilai) / sizeof(nilai[0]);

    // nampilin sebelum diurutkan
    cout << "sebelum urut : ";
    for (int i = 0; i < nilaiSize; i++)
    {
        cout << nilai[i] << " ";
    }
    cout << endl;

    // selection sort
    for (int a = 1; a < nilaiSize; a++)
    {
        int key = nilai[a];
        int b = a - 1;

        // Memindahkan elemen yang lebih besar dari key ke posisi lebih kanan
        while (b >= 0 && nilai[b] > key)
        {
            nilai[b + 1] = nilai[b];
            b = b - 1;
        }
        nilai[b + 1] = key;
    }

    // nampilin sesudah diurutkan
    cout << "sesudah urut : ";
    for (int i = 0; i < nilaiSize; i++)
    {
        cout << nilai[i] << " ";
    }

    cout << "\n\n\n";
    return 0;
}