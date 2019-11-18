#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>


void view(int i, int data[]){
    for(i=0; i<15; i++){
    printf("%d, ", data[i]);
    }
}
int BinarySearch
	(int data[], int x, int y, int z){
    int t = (x+y)/2;
    if(x>y){
    	return -1;
    } 
    if(data[t] == z){
    	return t;
    }
    if(data[t] < z){
    	return BinarySearch(data, t+1, y, z);
    } 
	else {
    	return BinarySearch(data, x, t-1, z);
    }
}
void urutkan(int i, int j, int data[]){
    for (i = 0; i < 15 - 1; i++) {
    for (j = 15 - 1; j > i; j--) {
    if (data[i] > data[j]) {
	int temp = data[j];
        data[j] = data[i];
        data[i] = temp;
        }
      }
    }
}

int main(){
    int bil[15] = {10,5,8,9,15,2,14,7,12,1,6,3,13,11,4};
    int i, j, posisi, cari;
    int n = sizeof(bil)/sizeof(bil[0]);
    
    printf("______________________________");
    printf("\n|                            |");
    printf("\n|________Jumlah data_________| = %d", n);
    printf("\n|                            |");
    printf("\n|____________________________|\n");
    printf("\nAngka sebelum urut = \n");
    view(i, bil);
    printf("\n**************************************************\n");
    urutkan(i,j,bil);
    printf("\nAngka setelah urut = \n");
    view(i, bil);
    printf("\n**************************************************\n");
    printf("\n\nCari Angka = \n"); 
	scanf("%d", &cari);
    posisi = BinarySearch(bil, 0, n-1, cari);
    
    if(posisi < 0){
    	printf("Elemen %d pada array tidak ditemukan", cari);
    } 
	else {
    	printf("Elemen %d ditemukan pada indeks %d setelah diurutkan", cari, posisi+1);
    }
    getch();
    return 0;
}
