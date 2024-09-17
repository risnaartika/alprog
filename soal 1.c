#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int jumlah; // Deklarasi variabel untuk jumlah elemen
    
    // Membaca jumlah elemen
    scanf("%d", &jumlah);
    
    int data[jumlah]; // Array untuk menyimpan elemen-elemen

    // Memasukkan elemen-elemen ke dalam array
    for (int i = 0; i < jumlah; i++) {
        scanf("%d", &data[i]);
    }
    
    // Proses pengurutan dengan algoritma Bubble Sort
    for (int i = 0; i < jumlah - 1; i++) {
        for (int j = 0; j < jumlah - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                // Tukar elemen jika elemen di kiri lebih besar dari yang di kanan
                int sementara = data[j];
                data[j] = data[j + 1];
                data[j + 1] = sementara;
            }
        }
    }

    // Mencetak elemen-elemen yang sudah diurutkan
    for (int i = 0; i < jumlah; i++) {
        printf("%d\n", data[i]);
    }
    
    return 0;
}