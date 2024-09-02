#include <stdio.h>
int MaiorIdade = 0, Masculino = 0, Feminino = 0;
void salvarEmArquivo(){
    FILE *arq =fopen("TesteAnterior.txt","w");
    if(arq){
        fprintf(arq,"%d\n",MaiorIdade);
        fprintf(arq,"%d\n",Feminino);
        fprintf(arq,"%d\n",Masculino);
        fclose(arq);
    }
    else printf("Erro: não foi possivel abrir o arquivo");
}

void leitorDoArquivo(){
    FILE *arq =fopen("TesteAnterior.txt","r");
    if(arq){
        fscanf(arq,"%d\n",&MaiorIdade);
        fscanf(arq,"%d\n",&Feminino);
        fscanf(arq,"%d\n",&Masculino);
        fclose(arq);
    }
    else {printf("Erro: nao foi possivel abrir o arquivo\n\n");
    }
    }

int main(void) {
    leitorDoArquivo();
    int Componentes;
    printf("Elementos analisados: ");
    scanf("%d", &Componentes);

    char sexo[Componentes], nome[Componentes][100];
    int idade[Componentes];

    for (int x = 0; x < Componentes; x++) {
        printf("%d componente(modelo sexo, nome e idade)\n", x + 1);
        scanf(" %c %s %d", &sexo[x], nome[x], &idade[x]);
    }

    for (int x = 0; x < Componentes; x++) {
        if (idade[x] >= MaiorIdade) {
            MaiorIdade = idade[x];
        }
    }

    for (int x = 0; x < Componentes; x++) {
        if (sexo[x] == 'M' || sexo[x] == 'm') {
            Masculino++;
        } else if (sexo[x] == 'F' || sexo[x] == 'f') {
            Feminino++;
        }
    }

    printf("Maior idade: %d\n", MaiorIdade);
    printf("Quantidade de Homens: %d\n", Masculino);
    printf("Quantidade de Mulheres: %d\n", Feminino);
    salvarEmArquivo();
    return 0;
}
