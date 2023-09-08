#include<stdio.h>
#include<time.h>
main()
{
    int essai, nbmax, diff, x, player, i=0;

    while(diff!=5){
    printf("---------Le jeu du juste prix---------\n");
    printf("Difficulte :\n 1 - Easy\n 2 - Medium\n 3 - Hard\n 4 - Impossible\n 5 - Exit\n");
    scanf("%d",&diff);

    switch(diff)
        {
            case 1:essai= 8, nbmax = 100 ;
            break;
            case 2:essai = 6, nbmax = 100;
            break;
            case 3:essai = 6, nbmax = 1000;
            break;
            case 4:essai = 6, nbmax = 10000;
            break;
            case 5:;
            break;
            default:printf("Erreur de saisie\n\n.");

            }

        srand(time(NULL));
        x = rand()%nbmax+1;
        system("cls");
        i = 0;


        while(essai>i){
        printf("Trouvez le nombre mystere(entre 1 et %d) : ",nbmax);
        scanf("%d",&player);

        if(player>x){
                printf("Le chiffre mystere est plus petit. (%d essai restant)\n\n",essai-i-1);
                i++;

        }
        else if(player<x){
            printf("Le chiffre mystere est plus grand. (%d essai restant)\n",essai-i-1);
            i++;

        }
        else if(player==x){
                printf("Bravo vous avez trouve le chiffre mystere avec %d essai.\n",i+1);
                i++;
                break;
        }
        if(i>=essai){
            system("cls");
            printf("Vous avez perdu.\n\n");
            printf("le chiffre mystere etait %d\n",x);
        }

        }
        if(i>=essai){
            system("cls");
            printf("Vous avez perdu.\n\n");
            printf("le chiffre mystere etait %d\n",x);
        }
    }


}
