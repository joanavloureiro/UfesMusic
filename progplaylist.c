#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "progplaylist.h"
#include "progmidia.h"
#include "progalbum.h"

Playlist* CriaPlaylist(char *nomeplaylist, char *dono1, char *dono2,int temdono2,int PP){
    Playlist *playlist = (Playlist*)malloc(sizeof(Playlist));
    if(playlist==NULL){
        printf("NULL\n");
        return NULL;
    }
    else{
        strcpy(playlist->nome,nomeplaylist);
        playlist->PP = PP;
        playlist->temdono2 = temdono2;
        strcpy(playlist->dono1,dono1);
        if(temdono2==1){
            strcpy(playlist->dono2,dono2);
        }


        return playlist;
    }
}

Playlist* AdicionaMidiaP(Album *a,int posmid, Playlist *p){

    strcpy(((p->lista[p->quantmidiaP]).autor1), ((a->lista[posmid]).autor1));

    //se tiver autor 2
    ((p->lista[p->quantmidiaP]).temautor2)=((a->lista[posmid]).temautor2);
    if(((a->lista[posmid]).temautor2)==1){
        strcpy(((p->lista[p->quantmidiaP]).autor2), ((a->lista[posmid]).autor2));
    }

    //se eh musica
    if(((a->lista[posmid]).tipo)==1){
        strcpy(((p->lista[p->quantmidiaP]).cantor1), ((a->lista[posmid]).cantor1));
        if(((a->lista[posmid]).temcantor2)==1){
            strcpy(((p->lista[p->quantmidiaP]).cantor2), ((a->lista[posmid]).cantor2));
        }
    }

    strcpy(((p->lista[p->quantmidiaP]).nome), ((a->lista[posmid]).nome));
    ((p->lista[p->quantmidiaP]).ano)=((a->lista[posmid]).ano);
    ((p->lista[p->quantmidiaP]).duracao)=((a->lista[posmid]).duracao);

    p->quantmidiaP++;

    return p;
}

Playlist* ExcluiMidia(int excluimidia, Playlist *p){
    int y;
    for(y=excluimidia; y<((p->quantmidiaP)-1); y++){
        ((p->lista[y]).ano) = ((p->lista[(y+1)]).ano);
        ((p->lista[y]).duracao) = ((p->lista[(y+1)]).duracao);
        ((p->lista[y]).tipo) = ((p->lista[(y+1)]).tipo);
        ((p->lista[y]).temautor2) = ((p->lista[(y+1)]).temautor2);
        ((p->lista[y]).temcantor2) = ((p->lista[(y+1)]).temcantor2);
        strcpy(((p->lista[y]).nome), ((p->lista[y+1]).nome));
        strcpy(((p->lista[y]).autor1), ((p->lista[y+1]).autor1));
        strcpy(((p->lista[y]).autor2), ((p->lista[y+1]).autor2));
        strcpy(((p->lista[y]).cantor1), ((p->lista[y+1]).cantor1));
        strcpy(((p->lista[y]).cantor2), ((p->lista[y+1]).cantor2));

        return p;

    }
}

void ApagaPlaylist(Playlist *p[20], int posicaoP, int quantPlaylist){
    int i=0;

    for(i=posicaoP; i<(quantPlaylist-1); i++){
        p[posicaoP]=p[(posicaoP + 1)];
    }

    free(p[quantPlaylist-1]);
}
