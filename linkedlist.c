#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//========================================================

struct node {
	 int data;
	 struct node *next;
};
typedef struct node node;

node *createNode(void);
void tambahAwal(node **head);
void tambahData(node **head);
void tranverse(node *head);
void insertNode(node **head, node *pPre, node *pNew);
void deleteNode(node **head, node *pPre, node *pCur);
void hapusData(node **head);
void deleteList(node *head);
void hitungnode(node *head);
//========================================================

int main()
{
  node *head;
  char pilih;

  head = NULL;
  do{
    system("cls");
    system("COLOR F5");
   	printf("\n===================================\n");
 	printf("|            LINKED LIST          |\n");
 	printf("|         NADA ISTIGHFARIANA      |\n");
 	printf("|            18081010135          |\n");
 	printf("|         <21 OKTOBER 2019>       |\n");
 	printf("===================================\n\n");	
 	Sleep(3000);
 	system("cls");
    printf("\nmasukkan pilihan\n");
    printf("\n1. tambah data di awal\n");
    printf("\n2. tambah data di tengah list\n");
    printf("\n3. hapus data\n");
    printf("\n4. cetak isi list\n");
	printf("\n5. jumlah node data dan jumlah seluruh isi data\n");
    printf("\nMASUKKAN PILIHAN (tekan x untuk keluar) : ");
    fflush(stdin);
    scanf("%c", &pilih);
    
    	if (pilih == '1')
     		tambahAwal(&head);
    	else if (pilih == '2')
			tambahData(&head);
    	else if (pilih == '3')
     		hapusData(&head);
    	else if (pilih == '4'){
     		tranverse(head);
    	getch();
    }
    	else if (pilih == '5'){
     		hitungnode(head);
        getch();
     }
     
	} while (pilih != 'q');
  		deleteList(head);
}

//========================================================

node *createNode(void){
  node *ptr;

  ptr = (node *)malloc(sizeof(node));
  return(ptr);
}

//========================================================

void tambahAwal(node **head){
  int bil;
  node *pTemp;

  system("cls");
  fflush(stdin);
  printf("masukkan bilangan integer : ");
  fflush(stdin);
  scanf("%d", &bil);
  pTemp = (node *)malloc(sizeof(node));

  if (pTemp != NULL){
  		pTemp->data = bil;
    	pTemp->next = NULL;
    	insertNode(head, NULL, pTemp);
  }
  else{
      printf("Alokasi memori gagal");
      getch();
  }
}

//========================================================

void tambahData(node **head){
  int pos, bil;
  node *pTemp, *pCur;

  system("cls");  
  tranverse(*head);
  printf("\nposisi penyisipan setelah data bernilai : ");
  fflush(stdin);
  scanf("%d", &pos);
  printf("\nData yang disisipkan : ");
  fflush(stdin);
  scanf("%d", &bil);

  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) {
    pCur = pCur -> next;
  }

  pTemp = (node *)malloc(sizeof(node));

  if (pCur == NULL){
     printf("\nnode tidak ditemukan");
     getch();
  }
  else if (pTemp == NULL){
     printf("\nalokasi memeori gagal");
     getch();
  }
  else{
     pTemp->data = bil;
     pTemp->next = NULL;
     insertNode(head, pCur, pTemp);
  }
}

//========================================================

void tranverse(node *head){
	
	node *pWalker;

    system("cls");
		pWalker = head;
			while (pWalker != NULL){
   				printf("%d->", pWalker -> data);
   					pWalker = pWalker -> next;
	}
   printf("NULL");
}

//========================================================

void insertNode(node **head, node *pPre, node *pNew){
    if (pPre == NULL){
      
	    pNew -> next = *head;
       *head = pNew;
    }
    else {
      
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}

//========================================================

void deleteNode(node **head, node *pPre, node *pCur)
{
	if (pPre == NULL)
	   *head = pCur -> next;
	else
    	pPre -> next = pCur -> next;
		free(pCur);
}

//========================================================

void hapusData(node **head)
{
  int pos;
  node *pCur, *pPre;

  system("cls");
  tranverse(*head);
  printf("\nData yang akan dihapus : ");
  fflush(stdin);
  scanf("%d", &pos);

  pPre = NULL;
  pCur = *head;
  
  while (pCur != NULL && pCur -> data != pos) {
    pPre = pCur;
    pCur = pCur -> next;
  }

  if (pCur == NULL){
     printf("\nnode tidak ditemukan");
     getch();
  }
  else
     deleteNode(head, pPre, pCur);
}

//========================================================

void deleteList(node *head){
  node *pTemp;


  while(head != NULL){
     pTemp = head;
     head = head->next;
     free(pTemp);
  }
}

//========================================================

void hitungnode(node *head){
	
	node *pWalker;

    system("cls");
    int i=0;
    int hsl=0;
		pWalker = head;
			while (pWalker != NULL){
				hsl=hsl+pWalker -> data;
					i=i+1;
   						pWalker = pWalker -> next;
	}
	
   printf("\nnjumlah node data adalah = %d",i);
   printf("\nnjumlah seluruh isi data adalah = %d",hsl);
}
