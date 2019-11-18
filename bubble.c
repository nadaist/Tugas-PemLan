#include <stdio.h>              

int main()                        
{
	int i[100],a,b,c;
	printf("<<--------------------------------------------->>\n");
	printf("<<--------------------------------------------->>");
	printf("\n		Banyak data : ");
    scanf("%d",&a);
	printf("<<--------------------------------------------->>\n");
	printf("<<--------------------------------------------->>");
    printf("\n	Data sebelum di sorting : \n");
    for(b=0;b<a;b++)
    {
    scanf("%d",&i[b]);
    }
	for (int b=0;b<a-1;b++)                     
	{
		for (int c=a-1;c>b;c--)             
		{
			if (i[c]<i[c-1])                
			{
				int tmp = i[c];         
				   i[c] = i[c-1];            
				   i[c-1] = tmp;             
			}  
		}
	}
	printf("\n---------------------------------------------\n");
	printf("\n\nData dari terkecil : ");                     
	for
		(int b=0;b<a;b++)                     
	{
	printf(" %d ", i[b]);
	}
	for
		(int b=0;b<a;b++)             
	{
	for
		(int c=0;c<a;c++)            
	{
	if (i[c]<i[b])                
	{
		int tmp =i[b];         
		   i[b] = i[c];            
		   i[c] = tmp;             
	}
	}
	}
	printf("\n---------------------------------------------\n");
	printf("\n\nData dari terbesar : ");                    
	for (int b=0;b<a;b++)                     
	{
		printf(" %d ", i[b]);                   
	}

	return 0;                                      
}
