#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char l[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int i,j;
    char last;
    setlocale(LC_ALL,"Portuguese_Brazil");

    for(j=0;j<=8;j++)
    {   
        printf("Selecione uma posição de 1 a 9 para fazer a jogada (%c):\n",((last=='x')?'o':'x'));
        scanf("%d",&i);
        i-=1;
        printf("\n");
        if(l[i]!='x' && l[i]!='o')
        {
            
            if(i>=0 && i<=8)
            {

                l[i]=(last=='x')?'o':'x';
                printf("---------------\n");
                printf(" %c|%c|%c\n %c|%c|%c\n %c|%c|%c\n",l[0],l[1],l[2],l[3],l[4],l[5],l[6],l[7],l[8]);
                printf("---------------\n");

                if((l[0]==l[1] && l[0]==l[2] && l[0]=='x')
                    ||(l[0]==l[3] && l[0]==l[6] && l[0]=='x')
                    ||(l[0]==l[4] && l[0]==l[8] && l[0]=='x')
                    ||(l[1]==l[4] && l[1]==l[7] && l[1]=='x')
                    ||(l[2]==l[4] && l[2]==l[6] && l[2]=='x')
                    ||(l[2]==l[5] && l[2]==l[8] && l[2]=='x')
                    ||(l[6]==l[7] && l[6]==l[8] && l[6]=='x'))
                {
                printf("O vencedor é X.\n");
                return 0;
                }

                else if((l[0]==l[1] && l[0]==l[2] && l[0]=='o')
                    ||(l[0]==l[3] && l[0]==l[6] && l[0]=='o')
                    ||(l[0]==l[4] && l[0]==l[8] && l[0]=='o')
                    ||(l[1]==l[4] && l[1]==l[7] && l[1]=='o')
                    ||(l[2]==l[4] && l[2]==l[6] && l[2]=='o')
                    ||(l[2]==l[5] && l[2]==l[8] && l[2]=='o')
                    ||(l[6]==l[7] && l[6]==l[8] && l[6]=='o'))
                {
                printf("O vencedor é o.\n");
                return 0;
                }
                last=l[i];
            }

            else
            {
                printf("Apenas posições de 0 a 8 são aceitas.\n\n");
                j--;
            }
        }
        else
        {
            printf("Essa posição já está ocupada.\n\n");
            j--;
        }
    }   
    printf("Deu velha.\n");

    return 0;
}