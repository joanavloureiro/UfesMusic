#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "progusuario.h"



//inicio do programa, ver se eh novo usuario e criar novo;

//aonde alocar novo usuario????
Usuario* NovoUsuario(char *nome, char *senha){
    
    Usuario *usuario = (Usuario*)malloc(sizeof(Usuario));  
    if(usuario==NULL){
        printf("NULL\n");
        return NULL;
    }
    else{
        strcpy(usuario->nome,nome);
        strcpy(usuario->senha,senha);
        return usuario;
    }
}

char* AcessaNome(Usuario *u){ 
    return u->nome;
}

char* AcessaSenha(Usuario *u){
    return u->senha;
}

void ExibeUsuario(Usuario *u){ 
    printf("NOME: %s\n", u->nome);
    printf("SENHA: %s\n",u->senha);
    
}

void Entrar();

void ApagaUsuario(Usuario *u[20], int posicaoU, int quantUsuario){
    int i=0;

    for(i=posicaoU; i<(quantUsuario-1); i++){
        u[posicaoU]=u[(posicaoU + 1)];
    }

    free(u[quantUsuario-1]);
}
