#include <stdio.h>
#include "utilidades.h"
#include "validacoes.h"
#include "piloto.h"
#include "equipe.h"
#include "circuito.h"


int main() {
	int qtdPilotos = 3, qtdEquipes = 3, qtdCircuitos = 1, i;
	srand(time(NULL));

	struct Piloto pilotos[MAX_PILOTOS];
	struct Equipe equipes[MAX_PILOTOS];
	struct Circuito circuitos[MAX_PILOTOS];


	strcpy(equipes[0].nome, "Ferrari");
	strcpy(equipes[0].sigla, "FRR");
	strcpy(equipes[0].paisOrigem, "Italia");

	strcpy(equipes[1].nome, "Mitsubishi");
	strcpy(equipes[1].sigla, "MTB");
	strcpy(equipes[1].paisOrigem, "Franca");

	strcpy(equipes[2].nome, "Merceds");
	strcpy(equipes[2].sigla, "MCD");
	strcpy(equipes[2].paisOrigem, "Inglaterra");

	pilotos[0].codigo = 1;
	pilotos[0].dataNascimento[0] = 17;
	pilotos[0].dataNascimento[1] = 6;
	pilotos[0].dataNascimento[2] = 1997;
	strcpy(pilotos[0].nome, "Paulo Ricardo");
	strcpy(pilotos[0].siglaEquipe, "MTB");
	pilotos[0].sexo = 'm';
	strcpy(pilotos[0].paisOrigem, "Inglaterra");

	pilotos[1].codigo = 2;
	pilotos[1].dataNascimento[0] = 1;
	pilotos[1].dataNascimento[1] = 12;
	pilotos[1].dataNascimento[2] = 1990;
	strcpy(pilotos[1].nome, "João");
	strcpy(pilotos[1].siglaEquipe, "FRR");
	pilotos[1].sexo = 'm';
	strcpy(pilotos[1].paisOrigem, "Italia");

	pilotos[2].codigo = 3;
	pilotos[2].dataNascimento[0] = 17;
	pilotos[2].dataNascimento[1] = 7;
	pilotos[2].dataNascimento[2] = 1997;
	strcpy(pilotos[2].nome, "Ana");
	strcpy(pilotos[2].siglaEquipe, "MCD");
	pilotos[2].sexo = 'f';
	strcpy(pilotos[2].paisOrigem, "Inglaterra");

	circuitos[0].codigo = 1;
	circuitos[0].idPilotoMenorTempo = 1;
	strcpy(circuitos[0].nome, "senna");
	strcpy(circuitos[0].pais, "Brazil");
	circuitos[0].tamanho = 12.78;
	circuitos[0].menorTempoMinSegMilli[0] = 12;
	circuitos[0].menorTempoMinSegMilli[1] = 12;
	circuitos[0].menorTempoMinSegMilli[2] = 12;


	// while(1) {
	// 	menuDadosPiloto(pilotos, equipes, &qtdPilotos, &qtdEquipes);
	// 	for(i = 0; i<qtdPilotos; i++) {
	// 		printarDados(pilotos[i].codigo, pilotos[i].nome, pilotos[i].siglaEquipe, pilotos[i].dataNascimento[0], pilotos[i].dataNascimento[1],
 //                         pilotos[i].dataNascimento[2], pilotos[i].sexo, pilotos[i].paisOrigem);
	// 	}
	// }
	while(1) {
		cadastrarCircuito(circuitos, pilotos, equipes, &qtdCircuitos, &qtdPilotos, &qtdEquipes);
		// for(i = 0; i<qtdEquipes; i++) {
		// 	printarDadosEquipe(equipes[i].nome, equipes[i].sigla, equipes[i].paisOrigem, 
		// 					   procurarSiglaPiloto(pilotos, qtdPilotos, equipes[i].sigla));
		// }
		for(i = 0; i<qtdCircuitos; i++) {
			printarDadosCircuito(circuitos[i].codigo, circuitos[i].nome, circuitos[i].pais, circuitos[i].tamanho,
								 circuitos[i].menorTempoMinSegMilli, circuitos[i].idPilotoMenorTempo);
		}
	}
}