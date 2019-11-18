#include <conio.h>
#include <stdio.h>

int pangkat(int a, int b)
{
	if(b==0){
		return (1);	
	}
	else{
		return (a*pangkat (a, b-1));		
	}
}

int main(int argc, char *argv[])
{
	int c, x, hasil_pangkat;
	printf("Masukkan Bilangan yang akan Dipangkatkan : ");
	scanf("%d",&c);
	printf("\nMasukkan Jumalah Pangkat : ");
	scanf("%d",&x);
	printf("\n=============================================\n");
 	printf("|        PROGRAM PANGKAT (REKURSIF)         |\n");
 	printf("|            NADA ISTIGHFARIANA             |\n");
 	printf("|              18081010135                  |\n");
 	printf("|           <29 Agustus 2019>               |\n");
 	printf("=============================================\n\n");
 	hasil_pangkat = pangkat(c, x);
 	printf("c   =%d ",c);
 	printf("\nx   =%d ",x);
 	printf("\nc^x =%d ",c,"^",x);
 	printf("\n    = %d",hasil_pangkat);
	return 0;
}
	
