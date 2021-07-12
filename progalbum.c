#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "progalbum.h"
#include "progmidia.h"

//INCLUIR MIDIA


Album* AdicionaAlbum(char *nomealbum, int anoalbum, char *dono){
     Album *album = (Album*)malloc(sizeof(Album));  
    if(album==NULL){
        printf("NULL\n");
        return NULL;
    }
    else{
        strcpy(album->nome,nomealbum);
        strcpy(album->donoalbum, dono);
        album->anoalbum = anoalbum;
        return album;
    }
}

Album* AdicionaMidiaA(Midia *novamidia,Album *a ){
    a->lista[a->quantmidiaA].tipo = novamidia->tipo;
    a->lista[a->quantmidiaA].ano = novamidia->ano;
    strcpy( ((a->lista[a->quantmidiaA]).autor1), novamidia->autor1);
    if(novamidia->temautor2==1){
        strcpy((a->lista[a->quantmidiaA]).autor2, novamidia->autor2);
    }
    if(novamidia->tipo==1){
        strcpy( (a->lista[a->quantmidiaA]).cantor1, novamidia->cantor1);
        if(novamidia->temcantor2==1){
            strcpy( (a->lista[a->quantmidiaA]).cantor2, novamidia->cantor2);
        }
    }
    a->lista[a->quantmidiaA].duracao = novamidia->duracao;
    strcpy( (a->lista[a->quantmidiaA]).nome, novamidia->nome);
    a->quantmidiaA++;
    return a;
}

void ExibeAlbum(Album *a){
    int i=0;
    printf("Nome do album: %d\n",a->anoalbum);
    printf("Ano: %s\n", a->nome);
    for(i=0; i<(a->quantmidiaA);i++){
        printf("%s\n", a->lista[i].nome);
    }
}

void ApagaAlbum(Album *a[20], int posicaoA, int quantAlbum){
    int i=0;

    for(i=posicaoA; i<(quantAlbum-1); i++){
        a[posicaoA]=a[(posicaoA + 1)];
    }

    free(a[quantAlbum-1]);
}


