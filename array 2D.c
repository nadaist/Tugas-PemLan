#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mtkl{
	double ipk;
	float nilai[15];
	int sks[15];
	char nama_matkul[15][15];
};
struct mhs{
	struct mtkl mtkl[15];
	char nama[15];
	char npm [15];
	
};
int main() {
	struct mhs mhs[25];
	int i,y;
	int total_sks=0;
	float total_ip=0;
	float total_ipk=0;
	
	
	strcpy (mhs[2].nama,"Nadaist");
	strcpy (mhs[2].npm,"18081010135");
	strcpy (mhs[2].mtkl[0].nama_matkul[0],"Pemograman Dasar");
	mhs[2].mtkl[0].nilai[0]= 3.40;
	mhs[2].mtkl[0].sks[0]=4;
	strcpy (mhs[2].mtkl[1].nama_matkul[1],"Pancasila");
	mhs[2].mtkl[1].nilai[1]= 3.35;
	mhs[2].mtkl[1].sks[1]=4;
	strcpy (mhs[2].mtkl[2].nama_matkul[2],"Aljabar Linear");
	mhs[2].mtkl[2].nilai[2]= 3.75;
	mhs[2].mtkl[2].sks[2]=3;
	strcpy (mhs[2].mtkl[3].nama_matkul[3],"Sistem Operasi");
	mhs[2].mtkl[3].nilai[3]= 3.60;
	mhs[2].mtkl[3].sks[3]=3;
	
	strcpy (mhs[1].nama,"Dinda");
	strcpy (mhs[1].npm,"18081010136");
	strcpy (mhs[1].mtkl[0].nama_matkul[0],"Pemograman Dasar");
	mhs[1].mtkl[0].nilai[0]= 3.5;
	mhs[1].mtkl[0].sks[0]=4;
	strcpy (mhs[1].mtkl[1].nama_matkul[1],"Pancasila");
	mhs[1].mtkl[1].nilai[1]= 3.10;
	mhs[1].mtkl[1].sks[1]=4;
	strcpy (mhs[1].mtkl[2].nama_matkul[2],"Aljabar Linear");
	mhs[1].mtkl[2].nilai[2]= 3.15;
	mhs[1].mtkl[2].sks[2]=3;
	strcpy (mhs[0].mtkl[3].nama_matkul[3],"Sistem Operasi");
	mhs[1].mtkl[3].nilai[3]= 3.00;
	mhs[1].mtkl[3].sks[3]=3;
	
		strcpy (mhs[4].nama,"Nafa");
	strcpy (mhs[4].npm,"18081010120");
	strcpy (mhs[4].mtkl[0].nama_matkul[0],"Pemograman Dasar");
	mhs[4].mtkl[0].nilai[0]= 3.57;
	mhs[4].mtkl[0].sks[0]=4;
	strcpy (mhs[4].mtkl[1].nama_matkul[1],"Pancasila");
	mhs[4].mtkl[1].nilai[1]= 3.30;
	mhs[4].mtkl[1].sks[1]=4;
	strcpy (mhs[4].mtkl[2].nama_matkul[2],"Aljabar Linear");
	mhs[4].mtkl[2].nilai[2]= 3.85;
	mhs[4].mtkl[2].sks[2]=3;
	strcpy (mhs[4].mtkl[3].nama_matkul[3],"Sistem Operasi");
	mhs[4].mtkl[3].nilai[3]= 3.25;
	mhs[4].mtkl[3].sks[3]=3;
	
	strcpy (mhs[0].nama,"Della");
	strcpy (mhs[0].npm,"18081010134");
	strcpy (mhs[0].mtkl[0].nama_matkul[0],"Pemograman Dasar");
	mhs[0].mtkl[0].nilai[0]= 3.40;
	mhs[0].mtkl[0].sks[0]=4;
	strcpy (mhs[0].mtkl[1].nama_matkul[1],"Pancasila");
	mhs[0].mtkl[1].nilai[1]= 3.25;
	mhs[0].mtkl[1].sks[1]=4;
	strcpy (mhs[0].mtkl[2].nama_matkul[2],"Aljabar Linear");
	mhs[0].mtkl[2].nilai[2]= 3.00;
	mhs[0].mtkl[2].sks[2]=4;
	strcpy (mhs[0].mtkl[3].nama_matkul[3],"Sistem Operasi");
	mhs[0].mtkl[3].nilai[3]= 3.00;
	mhs[0].mtkl[3].sks[3]=4;
	
	
	printf ("\n==============HASIL IPK MAHASISWA======================\n\n");
	char masuk[10];
	printf ("\nNama mahasiswa yang ingin dicari: ");
	scanf ("%s",&masuk);
	for(i=0; i<5; i++){
		if (!strcmp(mhs[i].nama,masuk)){
			printf("\nNama Lengkap		\t\t: %s\n",mhs[i].nama);
			printf("\nNPM			  \t\t: %s\n",mhs[i].npm);
			for(y=0; y<4; y++){
				printf("\nNama Mata Kuliah	\t\t: %s\n",mhs[i].mtkl[y].nama_matkul[y]);
				printf("\nNilai			\t\t: %.2f\n",mhs[i].mtkl[y].nilai[y]);
				printf("\nSks			\t\t: %d\n",mhs[i].mtkl[y].sks[y]);
 				total_ip = total_ip + ((mhs[i].mtkl[y].nilai[y])*(mhs[i].mtkl[y].sks[y]));
				total_sks = total_sks+mhs[i].mtkl[y].sks[y];
	 	}
	}
	}
	total_ipk =total_ip/total_sks;
	printf("\n\nTotal Sks : %d\n",total_sks);
	printf("\nIPK : %.2f\n\n",total_ipk);
	return 0;
}
