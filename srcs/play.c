#include "fh.h"

/**
 * Function: jogar
 * 
 * Faz uma jogada
 * 
 * 
 * 
 * num_jogadas: Número do jogo atual
 * 
 * p1: Pontuação do jogador1
 * p2: Pontuação do jogador2
 * 
 * nome1: Identifica o jogador1
 * nome2: Identifica o jogador2
 * 
 * typegame: 0 se for contra o PC
 *           1 se for contra uma pessoa
 * 
 * estd: 1 se for vitória
 *         2 se for derrota
 *         (outro) se for empate
 * 
 * Return: Void
 * 
 **/
void	jogar(int num_jogadas, int p1, int p2, int op1, int op2, char *nome1, char *nome2, int estd, int typegame)
{
	system("clear");
	n_jogo(num_jogadas);
	resultado(p1, p2);
	jogada(op1, op2, nome1, nome2);
	estado(estd, typegame);
	printf("Pressione alguma tecla para CONTINUAR");
	getchar();
}