#include <stdio.h>
#include <stdlib.h>
#define TAM 5
 
main()
{
  int vetor[TAM],
      x = 0,
      y = 0,
      aux = 0;      
  
  for( x = 0; x < TAM; x++ ) 
  {
    printf("\nEntre com um numero para vetor[%d]: ",x);
    scanf("%d",&aux);
    vetor[x] = aux;
  }
   
  for( x = 0; x < TAM; x++ )
  {
    for( y = x + 1; y < TAM; y++ )
    {
      if ( vetor[x] > vetor[y] )
      {
         aux = vetor[x];
         vetor[x] = vetor[y];
         vetor[y] = aux;
      }
    }
  }

  printf("\n Elementos ordenados de forma crescente:");
  
  for( x = 0; x < TAM; x++ )
  {
    printf("\n vetor[%d] = %d",x,vetor[x]); 
  }  

  for( x = 0; x < TAM; x++ )
  {
    for( y = x + 1; y < TAM; y++ )
    {
      if ( vetor[y] > vetor[x] )
      {
         aux = vetor[y];
         vetor[y] = vetor[x];
         vetor[x] = aux;
      }
    }
  } 

  printf("\n\n Elementos ordenados de forma decrescente:");
  
  for( x = 0; x < TAM; x++ )
  {
    printf("\n vetor[%d] = %d",x,vetor[x]);
  }
 system("pause");
 return 0; 
}
