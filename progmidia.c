#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "progmidia.h"

Midia* CriaMidia(int tipomidia, char *nomeM,float duracao,char *cantor1,char *cantor2,char *autor1,char *autor2,int  temcantor2,int temautor2, int anoalbum){
    Midia *midia = (Midia*)malloc(sizeof(Midia));  
    if(midia==NULL){
        printf("NULL\n");
        return NULL;
    }
    else{
        midia->tipo = tipomidia;
        strcpy(midia->nome,nomeM);
        midia->duracao = duracao;
        midia->ano = anoalbum;
        
        //se eh musica adiciona cantor
        if(tipomidia == 1){
            strcpy(midia->cantor1,cantor1);
            if(temcantor2 == 1){
                strcpy(midia->cantor2,cantor2);
            }
        }
        
        strcpy(midia->autor1,autor1);
        if(temautor2 == 1){
            strcpy(midia->autor2,autor2);
        }
        
        return midia;
    }
}
