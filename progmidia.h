#ifndef UFESMIDIA_H
#define UFESMIDIA_H

typedef struct {
    int tipo;
    char nome[20];
    float duracao;
    int ano;
    char cantor1[31];
    char cantor2[31];  
    char autor1[31];
    char autor2[31];
    int temcantor2;
    int temautor2;
}Midia;

Midia* CriaMidia(int tipomidia, char *nomeM,float duracao,char *cantor1,char *cantor2,char *autor1,char *autor2,int  temcantor2,int temautor2, int anoalbum);




#endif /* UFESMIDIA_H */
