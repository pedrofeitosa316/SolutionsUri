#include <stdio.h>

int buscaBinaria(int vet[],int inicio,int fim,int x){
    int meio;
    while (inicio <= fim){
        meio = (inicio + fim)/2;
        if (x == vet[meio]){
            return meio;
        }
        else if (x < vet[meio]){
            fim = meio - 1;
        }
        else{
            inicio = meio + 1;
        }
    }
    return -1;
}

int main(){

    int n;
    int soma[1000010];
    int arco1, arco2;
    int lado;
    int i;
    int resposta = 0;
    
    while(scanf("%d",&n) != EOF && n!=0){
        
        
        resposta = 0;

        for(i = 0; i < n; i++){
            scanf("%d",&soma[i]);   
        }

        for(i = 1; i < n; i++){
            soma[i] = soma[i] + soma[i-1];
        }

        
        
        if(soma[n-1]%3==0){
            lado = soma[n-1]/3;
            
            for(i = 0; soma[i]+ lado*2<= soma[n-1]; i++){
                
                arco1 = buscaBinaria(soma,i,(n-1),(soma[i]+lado));
                arco2 = buscaBinaria(soma,i,(n-1),(soma[i]+lado*2));
                
                if(arco1!= -1 && arco2!= -1){
                    resposta = resposta + 1;
                }    
            }
        }
        
        printf("%d\n",resposta);
    }
    
    return 0;
}
