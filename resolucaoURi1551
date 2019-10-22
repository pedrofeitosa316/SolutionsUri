#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char frase[1000];
    int letras[26];
    int i, t;
    int teste;
    
    while(scanf("%d", &n)!=EOF && n!=0)
    {
        for(t = 0; t < n; t++)
        {
            
            scanf(" %[^\n]s",frase);
         
            teste = 0;
            for(i = 0; i < 26; i++)
            {
                letras[i] = 0;
            }
            
            for(i = 0; i < strlen(frase); i++)
            {
                // a == 97 em ASCii 
                letras[frase[i]-97] = 1;
            }
            
            for(i = 0; i < 26; i++)
            {
                if(letras[i] == 1)
                {
                    teste = teste + 1;                   
                }
            }
            
            if(teste == 26)
            {
                printf("frase completa\n");
            }
            else if (teste >= 13 && teste <26)
            {
                printf("frase quase completa\n");
            }
            else
            {
                printf("frase mal elaborada\n");
            }
        
        }
    }
    return 0;
}
