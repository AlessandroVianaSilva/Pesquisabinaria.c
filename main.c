//Pesquisa binária 

#include <stdio.h>
#include <stdlib.h>
//protótipo da função bublesort
int *bublesort(int *numeros);


int main (void)
    {
    //Declarando variaveis do programa
    int meio,comeco,final,pesq;
    
    //inserindo os numeros do vetor
    int A[12]={91,81,77,62,36,22,21,14,10,8,7,4};
    int *numeros;
    //O vetor numeros recebe o vetor A ordenado pela função bublesort
    numeros=bublesort(A);
    comeco=0;
    final=11;
    //imprime o vetor ordenado
    for(int i=0; i<12;i++){
        printf("%d,",numeros[i]);
    }
    meio= (int)(comeco+final)/2;
    
    //Entrando com o numero a ser pesquisado
    printf("Digite o numero para busca:\n");
    scanf("%d",&pesq);
    
    //realizando a pesquisa binaria 
    while(comeco<=final)
    {
        if (numeros[meio]<pesq)
            comeco=meio+1;
        else if(numeros[meio]==pesq)
        {
            printf("%d foi encontrado na posicao:%d\n",pesq,meio);
            break;
        }
        else
            final=meio-1;
        meio =(int)(comeco+final)/2;
    }
    if (comeco>final)
        printf("o numero: %d não foi localizado no vetor",pesq);
    
    
    return (0);
}
//funcao que ordena usando o buble sort
int *bublesort(int *numeros)
{
    int aux;
    for (int j=0;j<12;j++){
	for (int i=j+1;i<12;i++)
	{
		if (numeros[j]>numeros[i])
		{
		aux=numeros[j];
		numeros[j]=numeros[i];
		numeros[i]=aux;  
                } 
    }
	
        }
    return (numeros);
}
