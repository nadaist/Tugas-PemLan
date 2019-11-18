#include <stdio.h>
 
int main()
{
int i, awal, akhir, tengah, n, search, array[50];
	printf("\nMasukkan Jumlah Element = \n");
	scanf("%d",&n);
	printf("\nMasukkan %d Angka Integer = \n", n);
 
for (i = 0; i < n; i++)
	scanf("%d",&array[i]);
	printf("Masukkan Angka yang ingin dicari = \n");
	scanf("%d", &search);
   
	awal = 0;
	akhir = n - 1;
	tengah = (awal+akhir)/2;
 
while (awal <= akhir) {
	if (array[tengah] < search)
    awal = tengah + 1;    
    	else if (array[tengah] == search) {
    printf("%d berada di indeks %d", search, tengah+1);
    		break;
      }
    			else
    akhir = tengah - 1;
	tengah = (awal + akhir)/2;
   }
	if (awal > akhir)
    printf("tidak berada di indeks", search);
   
   return 0;  
}
