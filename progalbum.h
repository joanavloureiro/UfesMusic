#ifndef UFESALBUM_H
#define UFESALBUM_H
#include "progmidia.h"

typedef struct {
    char nome[20];
    int anoalbum;
    Midia lista[20];
    int quantmidiaA;
    char donoalbum[20];
}Album;

Album* AdicionaAlbum(char *nomealbum, int anoalbum, char *dono);

void ExibeAlbum(Album *a);

Album* AdicionaMidiaA(Midia *novamidia,Album *a );

void ApagaAlbum(Album *a[20], int posicaoA, int quantAlbum);

#endif /* UFESALBUM_H */
