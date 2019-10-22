#include <stdio.h>
#include <string.h>

int main()
{
    
    int erros[26], corretas[26],tempo[26];
    int n;
    
    char letra, c;
    char julgamento[10];
    
    int t;
    int i, j;    
    int totalTempo, totalAcertos;
    
    while(scanf("%d", &n) != EOF && n != 0)
    {
        
        totalTempo = 0;
        totalAcertos = 0;
        
        for(i = 0; i < 26; i++)
        {
            tempo[i] = 0;
            erros[i] = 0;
            corretas[i] = 0;
        }
        
        
        for(i = 0; i < n; i++)
        {
            scanf(" %c %d %s", &letra, &t, julgamento);// só consegui ler sem erros usando \n

                  
            //printf("%c", julgamento[0]);
            
            if(julgamento[0] == 'i')
            {
                erros[letra-'A'] = erros[letra-'A'] + 1;
            }
            
            else if(julgamento[0] == 'c')
            {
                corretas[letra-'A'] = 1;
                tempo[letra-'A'] = t;
            }
        }
        
        for(i = 0; i < 26; i++)
		{
            if(corretas[i] == 1)
			{
                totalTempo = totalTempo + tempo[i] + (erros[i] * 20);
                totalAcertos = totalAcertos + 1;
            }
        }
                
        printf("%d %d\n", totalAcertos, totalTempo);
    }   

    return 0;
}
