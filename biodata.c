#include <stdio.h>
#include <conio.h>

int main()
{
	char nama[20],panggilan[10],lahir[20],tanggal[20],alamat[30],sekolah[30],hobi[30],makanan[30],minuman[30],nohp[20],npm[20];
	
		printf("***********************************************************");
		printf("\n*******************PENGISIAN BIODATA***********************");
		printf("\n***********************************************************");
		
		
		printf("\nNama Lengkap		: ");
		gets (nama);
		printf("\nNama Panggilan		: ");
		gets (panggilan);
		printf("\nTempat Lahir		:");
		gets (lahir);
		printf("\nTanggal Lahir		:");
		gets (tanggal);
		printf("\nAlamat			:");
		gets (alamat);
		printf("\nAsal Sekolah		:");
		gets (sekolah);
		printf("\nHobi Saya		:");
		gets (hobi);
		printf("\nMakanan Favorit		:");
		gets (makanan);
		printf("\nMinuman Favorit		:");
		gets (minuman);
		printf("\nNomor HP		:");
		gets (nohp);
		printf("\nNPM			:");
		gets (npm);
		
		printf("\n***********************************************************");
		printf("\n********************TAMPILAN BIODATA***********************");
		printf("\n***********************************************************");
		
		
		printf("\nNama Lengkap		:");
		printf(nama,"");
		printf("\nNama Panggilan		:");
		printf(panggilan,"");
		printf("\nTempat Lahir		:");
		printf(lahir,"");
		printf("\nAlamat			:");	
		printf(alamat,"");
		printf("\nAsal Sekolah		:");
		printf(sekolah,"");
		printf("\nHobi Saya		:");
		printf(hobi,"");
		printf("\nMakanan Favorit		:");
		printf(makanan,"");
		printf("\nMinuman Favorit		:");
		printf(minuman,"");
		printf("\nNomor HP		:");
		printf(nohp,"");
		printf("\nNPM			:");
		printf(npm,"");
		
		getch();

 } 
