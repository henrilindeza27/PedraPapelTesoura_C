#include "fh.h"

/**
 * Function: n_jogo
 * 
 * Mostra o número de jogo atual
 * 
 * x: Número do jogo
 * 
 * Return: Void
 * 
 **/
void	n_jogo(int x)
{
	printf("╔════════════════════════╗\n");
	printf("║       JOGO Nº %d        ║\n", x);
}

/**
 * Function: resultado
 * 
 * Mostra o resultado do jogo
 * 
 * p1: Pontuação do jogador1
 * p2: Pontuação do jogador2
 * 
 * Return: Void
 * 
 **/
void	resultado(int p1, int p2)
{
	printf("╠════════════════════════╣\n");
	printf("║        RESULTADO       ║\n");
	printf("║         %d - %d          ║\n", p1, p2);
}

/**
 * Function: jogada
 * 
 * Mostra a jogada feita
 * 
 * option1: Jogada do jogador1
 * option2: Jogada do jogador2
 * nome1: Identifica o jogador1
 * nome2: Identifica o jogador2
 * 
 * Return: Void
 * 
 **/
void	jogada(int option1, int option2, char *nome1, char *nome2)
{
	int	tamanho;

	tamanho = strlen(nome2);
	if (option1 == 1 && option2 == 3)
	{
		if (tamanho == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Pedra         ║\n", nome1);
			printf("║ %s: Tesoura            ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Pedra       ║\n", nome1);
			printf("║ %s: Tesoura     ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
	}
	else if (option1 == 3 && option2 == 1)
	{
		if (tamanho == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Tesoura       ║\n", nome1);
			printf("║ %s: Pedra              ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Tesoura     ║\n", nome1);
			printf("║ %s: Pedra       ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
	}
	else if (option1 == 2 && option2 == 1)
	{
		if (tamanho == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Papel         ║\n", nome1);
			printf("║ %s: Pedra              ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Papel       ║\n", nome1);
			printf("║ %s: Pedra       ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
	}
	else if (option1 == 1 && option2 == 2)
	{
		if (tamanho == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Pedra         ║\n", nome1);
			printf("║ %s: Papel              ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Pedra       ║\n", nome1);
			printf("║ %s: Papel       ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
	}
	else if (option1 == 3 && option2 == 2)
	{
		if (tamanho == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Tesoura       ║\n", nome1);
			printf("║ %s: Papel              ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Tesoura     ║\n", nome1);
			printf("║ %s: Papel       ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
	}
	else if (option1 == 2 && option2 == 3)
	{
		if (tamanho == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Papel         ║\n", nome1);
			printf("║ %s: Tesoura            ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Papel       ║\n", nome1);
			printf("║ %s: Tesoura     ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
	}
	else if (option1 == 1 && option2 == 1)
	{
		if (tamanho == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Pedra         ║\n", nome1);
			printf("║ %s: Pedra              ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Pedra       ║\n", nome1);
			printf("║ %s: Pedra       ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
	}
	else if (option1 == 2 && option2 == 2)
	{
		if (tamanho == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Papel         ║\n", nome1);
			printf("║ %s: Papel              ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Papel       ║\n", nome1);
			printf("║ %s: Papel       ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
	}
	else if (option1 == 3 && option2 == 3)
	{
		if (tamanho == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Tesoura       ║\n", nome1);
			printf("║ %s: Tesoura            ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║ %s: Tesoura     ║\n", nome1);
			printf("║ %s: Tesoura     ║\n", nome2);
			printf("╠════════════════════════╣\n");
		}
	}
}

/**
 * Function: estado
 * 
 * Mostra o resultado da jogada feita
 * 
 * typegame: 0 se for contra o PC
 *           1 se for contra uma pessoa
 * 
 * estado: 1 se for vitória
 *         2 se for derrota
 *         (outro) se for empate
 * 
 * Return: Void
 * 
 **/
void	estado(int estado, int typegame)
{
	if (typegame == 1)
	{
		if (estado == 1)
		{
			printf("╠════════════════════════╣\n");
			printf("║    VITÓRIA JOGADOR 1   ║\n");
			printf("╚════════════════════════╝\n");
		}
		else if (estado == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║    VITÓRIA JOGADOR 2   ║\n");
			printf("╚════════════════════════╝\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║         EMPATE         ║\n");
			printf("╚════════════════════════╝\n");
		}
	}
	else if (typegame == 0)
	{
		if (estado == 1)
		{
			printf("╠════════════════════════╣\n");
			printf("║         VITÓRIA        ║\n");
			printf("╚════════════════════════╝\n");
		}
		else if (estado == 2)
		{
			printf("╠════════════════════════╣\n");
			printf("║         DERROTA        ║\n");
			printf("╚════════════════════════╝\n");
		}
		else
		{
			printf("╠════════════════════════╣\n");
			printf("║         EMPATE         ║\n");
			printf("╚════════════════════════╝\n");
		}
	}
}


