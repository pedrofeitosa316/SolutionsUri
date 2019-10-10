#include <stdio.h>

int main() {
	int N; // numero de verificacoes
	
    while (scanf("%d",&N) != EOF){
    	if (!((N >= 2 && N <= 10000) && (N % 2 == 0))){
    	 	continue;
    	}

	    int M; // numero do calcado
	    char L; // pe do calcado
	    int i, j; // variaveis de apoio
	    int pares = 0;
	    int pD = 0; int pE = 0;
        int listaD[10000] = {0}, listaE[10000] = {0}; // Lista do pe esquerdo e direito do par da bota

        for (i = 0 ; i < N ; i++){
            scanf("%d %c", &M, &L);
            if (M >= 30 && M <= 60){
                if (L == 'D'){
                    listaD[pD] = M;
                    pD++;
                } // if direito

                if (L == 'E'){
                    listaE[pE] = M;
                    pE++;
                } // if esquerdo

            }

        } // for

        for (j = 0 ; j < N ; j++){ // 0 < 4
            for (i = 0 ; i < N ; i++){ // 0 < 4
                if ((listaD[j] == listaE[i]) && ((listaD[j] && listaE[i]) != 0)){
                    pares++;
                    listaD[j] = 0;
                    listaE[i] = 0;
                }

            } // for secundario

        } // for primario

        printf("%d\n",pares);
    } // While principal

    return 0;
}