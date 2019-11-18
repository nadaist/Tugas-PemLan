#include<stdio.h>
#include <conio.h>
int main()
{
	int i[10], a,b,c,tkr,low,high,pos,tm;
	printf("\n------>> Masukkan data berikut <<------\n");
	//proses penginputan data
    for(a=0;a<10;a++)
    {
    printf("\ndata ke-%d : ",a+1);
    scanf("%d",&i[a]);
    }
    printf("\n---------------------------------------");
	printf("\nMasukkan data yang akan anda cari : ");
	scanf("%d",&c);
	//proses pengurutan data
        for(a=0;a<10;a++){
        for(b=a+1;b<10;b++){
        if (i[a]>i[b]){
        tkr=i[a]; i[a]=i[b]; i[b]=tkr;
                     }
                }
            }
    //proses pencarian data
    tm=0;
    high=9; low=0; do
    {
    	pos = ((c - i[low]) / (i[high] - i[low]))*(high-low) +  low;
        if (i[pos] == c){
        tm++;
            break;
        }
        if (i[pos] > c)
        high = pos-1;
        else if (i[pos] < c)
        low = pos + 1;
    }
    
    while(c >= i[low] && c <= i[high]);
	if (tm>0)
		{
    	printf("\ndata %d yang dicari ada dalam array\n",c);
    	printf("\n--------------------------------------");
    	}else
	{
        printf("\ndata tidak ditemukan dalam array\n");}
    return(0);
}
