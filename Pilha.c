#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int dia , mes , ano
   
}Dado;

typedef struct{
    char nome[50];
    Dado data;
}Pessoa;

typedef struct no{
    Pessoa p;
    struct no *proximo;
}No;

//função para criar uma pessoa;
Pessoa ler_pessoa(){
    Pessoa p;
    printf("\nDigite nome e data de nascimento dd mm aaaa:\n");
    scanf("%49[^\n] %d%d%d" , p.nome ,&p.data.dia , &p.data.mes , &p.data.mes , &p.data.ano);
    return p;
}

void impri_pessoaa(Pessoa p){
    printf("\nNome: %s \nData: %2d/%2d/%4d\n" , p.nome , p.data.dia , p.data.mes , p.data.ano);

No* empilhar(No *topo){
    No *novo = malloc(sizeof(No));
    if (novo)
    {
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
    }
    else
    printf("\nErro ao aolocar memoria...\n");
}

} 

int main(int argc, char const *argv[])
{
    No *topo = NULL;
    int opcao;

    do
    {
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d" , &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            topo = empilhar(top);
            break;
        
        default:
            break;
        }



    } while (/* condition */);
    

    return 0;
}



