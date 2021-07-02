#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char*argv[])
{
    const int MAX=100, MIN=0, Vie=15;
    int nM, nE;
    int c = 0;
    int Start;
    int continuer;
    printf("**********************************************************\n");
    printf("    Bienvenue dans votre jeu prefere le NombreMystere!!!\n");
    printf("**********************************************************\n");
    do
        {
            printf("Voulez vous jouer une partie?\n");
            printf("Si oui tapez 1\n");
            printf("Si non tapez 0\n");
            scanf("%d", &Start);
        }
    while(Start < 0 || Start > 1);
    if(Start == 0)
    {
        printf("\n");
        printf("Dommage!!!\n");
        printf("Au plaisir!!");
    }
    if(Start == 1 || continuer == 1 )
    {
        printf("\n");
        printf("C'est parti alors pour une partie de 15 essais!!\n");
        printf("\n");
        srand(time(NULL));
        nM = (rand() % (MAX - MIN + 1)) + MIN;
        printf("Essayez de trouver le NombreMystere compris entre 0 et 100...\n");
        do
            {
                printf("\n");
                printf("Quel est votre nombre?\n");
                printf("\n");
                scanf("%d", &nE);
                if(nE<nM)
                        {
                            printf("\n");
                            printf("Rate!! Essayez encore...\n");
                            printf("\n");
                            printf("indice : le nombre mystere est plus grand\n");
                            printf("\n");
                            c++ ;
                            printf("Vous avez fait " "%d", c);
                            printf("  essais\n");
                        }
                else if (nE>nM)
                                {
                                    printf("\n");
                                    printf("Rate!! Essayez encore...\n");
                                    printf("\n");
                                    printf("indice : le nombre mystere est plus petit\n");
                                    printf("\n");
                                    c++ ;
                                    printf("Vous avez fait " "%d", c);
                                    printf("  essais\n");
                                }
                else
                    {
                        printf("\n");
                        printf("Bravo vous avez gagne!!!");
                        printf("\n");
                        printf("vous avez trouve le NombreMystere en  " "%d", c);
                        printf("  coups...\n");
                        printf("\n");
                    }
            }
            while(Start == 1 && c < Vie && nE != nM);
        if(nE != nM && c == Vie)
            {
                printf("\n");
                printf("\n");
                printf("Vous n'avez pas trouve le NombreMystere et vous avez epuise vos essais...\n");
                printf("\n");
                printf("Vous avez donc perdu!!\n");
                printf("\n");
            }
         printf("Voulez vous rejouer?\n");
         printf("\n");
         printf("Si oui tapez 1\n");
         printf("\n");
         printf("Si non tapez 0\n");
         scanf("%d", &continuer);
         if(continuer == 0) printf("Merci pour avoir tenter votre chance et au revoir...");
         if(continuer == 1) printf("")
    }

}
