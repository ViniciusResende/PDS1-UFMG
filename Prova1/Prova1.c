#include <stdio.h>


int cadastraUsuario(int *chave, int *senha) {
    do
    {
        scanf("%d", chave);
        scanf("%d", senha);
    } while ((*chave <= 999 || *chave > 999999) || (*senha <= 999 || *senha > 999999));
    ;
    return *chave > 2000 ? 3 : 5;
}

int verificaSenha(int tentativa, int senha) {
    return tentativa == senha ? 1 : 0;
}

int acessoConta(int senha, int n) {
    int i = n;
    for(i; i > 0; i--) {
        scanf("%d", &senha);
        // printf("teste");
        if(verificaSenha(senha, 1012) || verificaSenha(senha, 100) || verificaSenha(senha, 1000) || verificaSenha(senha, 1234)) {
            return 1;
        }
    }
    
    return 0;
}

char cartaoCredito(int score) {
    if(score < 400) {
        printf("Cartao negado\n");
        return 'N';
    } else if(score > 400 && score <= 600) {
        printf("Necessita de mais detalhes\n");
        return 'X';
    } else if(score > 600 && score <= 800) {
        printf("Cartao basico\n");
        return 'B';
    } else if(score > 800 && score <= 1000) {
        printf("Cartao gold\n");
        return 'A';
    } else {
        printf("Score invalido\n");
        return 'X';
    }
    
    return 'c';
}

void banco() {
    int key, password;
    int *chave, *senha;
    chave = &key;
    senha = &password;
    int attempts = cadastraUsuario(chave, senha);
    if(acessoConta(password, attempts)) {
        printf("Acesso realizado com sucesso\n");
    }
    printf("%c", cartaoCredito(key % 1000));
    
}

int codigoVerificador(int chave) {
    
}