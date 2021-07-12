#ifndef UFESUSUARIO_H
#define UFESUSUARIO_H

typedef struct {
    char nome[20];
    char senha[9];
}Usuario;

Usuario* NovoUsuario(char *nome, char *senha);

char* AcessaNome(Usuario *u);

char* AcessaSenha(Usuario *u);

void ExibeUsuario(Usuario *u);

void ApagaUsuario(Usuario *u[20], int posicaoU, int quantUsuario);

#endif /* UFESUSUARIO_H */
