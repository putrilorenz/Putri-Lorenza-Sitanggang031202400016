#include <iostream>

using namespace std;

int main() {
    const int baris = 4, kolom = 4; // Menentukan ukuran matriks secara konstan
    int matrix1[baris][kolom] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int matrix2[baris][kolom] = {
        {17, 18, 19, 20},
        {21, 22, 23, 24},
        {25, 26, 27, 28},
        {29, 30, 31, 32}
    };

    int sumOfMatrices[baris][kolom]; // Deklarasi matriks untuk menyimpan hasil penjumlahan

    cout << "Matrix 1:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix 2:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }

    // Menjumlahkan kedua matriks
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            sumOfMatrices[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Menampilkan hasil penjumlahan
    cout << "\nHasil penjumlahan matriks:" << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << sumOfMatrices[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}