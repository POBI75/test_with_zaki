#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[])
{
    const int MAX=100, MIN=1;
    int nM, nE;
    int c =1, O;
    int continuer;
    while(continuer=1)
    {
        srand(time(NULL));
        nM = (rand() % (MAX - MIN + 1)) + MIN;
        do
        {
            printf("Quel est le nombre mystere?\n");
            scanf("%d", &nE);
            if(nE<nM)
            {
                printf("C'est plus\n");
                c++ ;
            }
            else if (nE>nM)
            {
                printf("C'est moins\n");
                c++ ;
            }
            else
            {
                printf("Bravo vous avez trouve en  " "%d", c);
                printf("  coups !!!\n");
            }
        }
        while (nE!=nM);
        printf("Voulez vous rejouer?\n");
        printf("Tapez 1 si oui.\n");
        printf("Si non tapez 0.\n");
        scanf("%d", &O);
        if(O=1)
        {
            continuer=1;
        }
        if(O=0)
        {
            continuer=0;
            printf("Au plaisir!!!");
        }
    }
        return ;
    }
