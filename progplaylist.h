#ifndef UFESPLAYLIST_H
#define UFESPLAYLIST_H
#include "progmidia.h"
#include "progalbum.h"
//Tipo matriz (tipo opaco)
//Estrutura interna do tipo deve ser definida na implementa��o do TAD



typedef struct {
    char nome[20];
    Midia lista[50];
    int quantmidiaP;
    int PP; //publica(1) ou privada(0)
    char dono1[20];
    char dono2[20];
    int temdono2;
}Playlist;

Playlist* CriaPlaylist(char *nomeplaylist, char *dono1, char *dono2,int temdono2,int PP);

Playlist* AdicionaMidiaP(Album *a,int posmid, Playlist *p);

Playlist* ExcluiMidia(int excluimidia, Playlist *p);

void ApagaPlaylist(Playlist *p[20], int posicaoP, int quantPlaylist);

#endif /* UFESPLAYLIST_H */
