#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <math.h>

int main(){
	int data [3][3][3] = 	
	{{{5,1,5},{6,2,8},{1,2,1}},{{-3,2,5},{-4,3,4},{-5,7,8}},{{3,1,2},{-5,2,1},{-2,5,1}},};	

	float Faa[2], Fbb[2];
	float Daa, Dbb, Daa1, Dbb1, Daa2, Dbb2;
	int i,j,k;
	system ("color B");
	printf("\n=============================================\n");
 	printf("|        PROGRAM MENGHITUNG 3DIMENSI        |\n");
 	printf("|            NADA ISTIGHFARIANA             |\n");
 	printf("|              18081010135                  |\n");
 	printf("|            <30 September 2019>            |\n");
 	printf("=============================================\n\n");
 	Sleep(3000);
 	system("cls");
 	printf("\n \t\tPROGRAM MENGHITUNG ARRAY 3DIMENSI\n");
	for(i=0; i<3; i++){
		
		printf("\nArray 3D %d \n", i+1);
		printf("  a    b    c \n");		
		for(j=0; j<3; j++){
			for(k=0; k<3; k++){
				printf("  %d  ", data[i][j][k]);
			}
		printf("\n");
		}
	printf("\n");
	Faa[i] = sqrt((pow(data[i][0][0] - data[i][1][0],2))+(pow(data[i][0][1] - data[i][1][1],2))+(pow(data[i][0][2] - data[i][1][2],2)));
	Fbb[i] = sqrt((pow(data[i][1][0] - data[i][2][0],2))+(pow(data[i][1][1] - data[i][2][1],2))+(pow(data[i][1][2] - data[i][2][2],2)));			
	printf("\nLintasan AA %d = %f\n \nLintasan BB %d = %f\n \nHasil = %f\n\n",i+1,Faa[i],i+1,Fbb[i],Faa[i]+Fbb[i]);
	}

	system("pause");
	return 0;
	
}
