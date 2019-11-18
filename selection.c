#include<stdio.h>

int angka[10] = {2,7,3,9,4,6,1,10,5,8};

int main(){
	for (int i=0; i<10; i++){
		int min=i;
			for (int j=i; j<10; j++){
	if(angka[j]<angka[min]){
		min=j;
	}
			}
			int temp=angka[i];
			angka[i]=angka[min];
			angka[min]=temp;
	}
	printf("\nHasil selection = \n");
	printf("\n-----------------------------------\n");
	for(int i=0; i<10; i++){
		printf(" %d ", angka[i]);
	}
	getchar();
}

