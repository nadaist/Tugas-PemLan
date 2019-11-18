#include <stdio.h>
#include <stdlib.h>


int main() 
{
	printf("\n=============================================\n");
 	printf("|         PROGRAM PANGKAT (ITERASI)         |\n");
 	printf("|            NADA ISTIGHFARIANA             |\n");
 	printf("|              18081010135                  |\n");
 	printf("|           <29 Agustus 2019>               |\n");
 	printf("=============================================\n\n");
 	
	int a, b, i, hasil;
	
	printf("\nMasukkan bilangan yang akan dipangkatkan : ");
	scanf("%d", &a);
	printf("\nMasukkan jumlah pangkat : ");
	scanf("%d", &b);
	
	i=1;
	hasil=1;
	
	for(i=1;i<=b;i++)
	{
		hasil=hasil*a;	
	}
	printf("\nHasil bilangan %d pangkat %d adalah %d ",a,b, hasil);
	
	printf("\n\n=================================================\n");
	printf("|						|\n");
	printf("|		TERIMAKASIH			|\n");
	printf("|						|\n");
	printf("|================================================\n");
	
	return 0;
}


