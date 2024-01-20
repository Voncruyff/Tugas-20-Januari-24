#include <stdio.h>

int nilaiTerkecil(int angka[], int n){
  
  int terkecil = angka[0];

  for(int i=1; i<n; i++){
    if(angka[i] < terkecil){
      terkecil = angka[i];
    }
  }

  return terkecil;
}

int elemenTerbesarKedua(int angka[], int n){
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
      if(angka[i] < angka[j]){
        int temp = angka[i];
        angka[i] = angka[j];
        angka[j] = temp;
      }
    }
  }
  return angka[1];
}

int main() {
  int angka[] = {5, 2, 8, 10, 6};
  int n = sizeof(angka) / sizeof(angka[0]);
  int min = nilaiTerkecil(angka, n);
  printf("Nilai terkecil: %d\n", min);
  int max2 = elemenTerbesarKedua(angka, n);
  printf("Elemen terbesar kedua: %d", max2);
  return 0;
} 