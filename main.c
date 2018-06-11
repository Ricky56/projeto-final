#include <stdio.h>


struct Piloto {
    int id;
    char nome[30], siglaEquipe[4], dataNasc[11], sexo, paisOrigem[20];
};


struct Equipe {
    char nome[40], sigla[4], paisOrigem[20];
};


struct Circuito {
    int codigo, idPilotoMenorTempo;
    char nome[30], pais[20];
    float tamanho;
    long int menorTempo; //Podemos fazer em milisegundos e na hora de apresentar converter para minutos e segundos.
};


struct MelhorVolta {};    


int main() {
    int resposta;
    
    do {
        showMenu();
        resposta = leValidaInt(1, 5, "Informe uma das opcoes do menu");
        
        switch(resposta) {
            case '1':
                menuDadosPiloto();
                break;
            case '2':
                menuDadosEquipe();
                break;
            case '3':
                menuDadosCircuito();
                break;
            case '4':
                menuDadosVolta();
                break;
            case '5':
        }
    } while(resposta != 5);
    
    return 0;
}


void showMenu() {
    printf("1-Menu dos pilotos\n");
    printf("2-Menu das equipes\n");
    printf("3-Menu dos circuitos\n");
    printf("4-Menu das voltas\n");
}


int leValidaInt() {} //Vai estar em validacoes.h

/*
PODEMOS COLOCAR CADA PARTE (PILOTO, EQUIPE, CIRCUITO E VOLTAS) EM ARQUIVOS SEPARADOS).
*/

void menuDadosPiloto() {
    int resposta;
    
    showMenuPiloto();
    resposta = leValidaInt(1, 3, "Digite uma das opcoes do menu");
    switch(resposta) {
        case 1:
            cadastrarPiloto();
            break;
        case 2:
            alterarPiloto();
            break;
        case 3:
            removerPiloto();
    }
}


void showMenuPiloto() {
    printf("1-Cadastrar piloto\n");
    printf("2-Alterar piloto\n");
    printf("3-Remover piloto\n");
}


void menuDadosEquipe() {
    int resposta;
    
    showMenuEquipe();
    resposta = leValidaInt(1, 2, "Digite uma das opcoes do menu");
    switch(resposta) {
        case 1:
            cadastrarEquipe();
            break;
        case 2:
            excluitEquipe();
    }
}


void showMenuEquipe() {
    printf("1-Cadastrar nova equipe\n");
    printf("2-Excluir equipe\n");
}


void menuDadosCircuito() {
    int resposta;
    
    showMenuCircuito();
    resposta = leValidaInt(1, 2, "Digite uma das opcoes do menu");
    switch(resposta) {
        case 1:
            cadastrarCircuito();
            break;
        case 2:
            alterarCircuito();
    }
}


void showMenuCircuito() {
    printf("1-Cadastrar novo circuito\n");
    printf("2-Alterar circuito\n");
}


void menuDadosVolta() {}
