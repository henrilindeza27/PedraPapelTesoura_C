#include "fh.h"

/**
 * Function: Menu
 * 
 * Mostra o menu principal e recolhe a opção inserida
 * 
 * Void
 * 
 * Return: Opção selecionada no menu
 * 
 **/
int	Menu(void)
{
	int	op;

	printf("╔════════════════════════════════╗\n");
	printf("╠════════════  MENU  ════════════╣\n");
	printf("║- [1] Jogar contra amigo        ║\n");
	printf("║- [2] Jogar contra PC           ║\n");
	printf("║- [3] Sair                      ║\n");
	printf("╚════════════════════════════════╝\n");
	printf(" Selecione a opção que deseja --> ");
	while (scanf("%d", &op) != 1 || !(op >= 1 && op <= 3))
	{
		printf("Opção inválida, por favor digite uma opção válida -> ");
		//Seguintes scanf servem para limpar o buffer e descartar entradas inválidas
		scanf("%*[^\n]");
		scanf("%*c");
	}
	return (op);
}

/**
 * Function: Menu_Jogo
 * 
 * Mostra o menu de jogadas 
 * 
 * typegame: 0 se for contra o PC
 *           1 se for contra uma pessoa
 * 
 * Return: Jogada selecionada pelo jogador
 * 
 **/
int	Menu_Jogo(unsigned int typegame)
{
	int	op;

	printf("╔════════════════════════════════╗\n");
	printf("╠═════  PEDRA PAPEL TESOURA  ════╣\n");
	printf("║- [1] PEDRA                     ║\n");
	printf("║- [2] PAPEL                     ║\n");
	printf("║- [3] TESOURA                   ║\n");
	printf("╚════════════════════════════════╝\n");
	printf(" Selecione a opção que deseja --> ");
	if (typegame == 0)
	{
		while (scanf("%d", &op) != 1 || !(op >= 1 && op <= 3))
		{
			printf("Opção inválida, por favor digite uma opção válida -> ");
			//Seguintes scanf servem para limpar o buffer e descartar entradas inválidas
			scanf("%*[^\n]");
			scanf("%*c");
		}
	}
	else
	{
		struct termios old, new;
		// Alterar o modo do terminal para não mostrar os caracteres digitados
		tcgetattr(fileno(stdin), &old);
		new = old;
		new.c_lflag &= ~(ECHO | ECHOE | ECHOK | ECHONL);
		tcsetattr(fileno(stdin), TCSAFLUSH, &new);
		while (scanf("%d", &op) != 1 || !(op >= 1 && op <= 3))
		{
			printf("\nOpção inválida, por favor digite uma opção válida -> ");
			//Seguintes scanf servem para limpar o buffer e descartar entradas inválidas
			scanf("%*[^\n]");
			scanf("%*c");
		}
		// Restaurar o modo do terminal
		tcsetattr(fileno(stdin), TCSAFLUSH, &old);
	}
	return (op);
}

/**
 * Function: Menu_Sec
 * 
 * Mostra o menu de modos de jogo 
 * 
 * Void
 * 
 * Return: Modo de jogo
 * 
 **/
int	Menu_Sec(void)
{
	int	op;

	printf("╔════════════════════════════════╗\n");
	printf("╠═════════  TIPO DE JOGO  ═══════╣\n");
	printf("║- [1] 1º A GANHAR               ║\n");
	printf("║- [2] 1º A CHEGAR AS 3 VITÓRIAS ║\n");
	printf("║- [3] 1º A CHEGAR AS 5 VITÓRIAS ║\n");
	printf("╚════════════════════════════════╝\n");
	printf(" Selecione a opção que deseja --> ");
	while (scanf("%d", &op) != 1 || !(op >= 1 && op <= 3))
	{
		printf("Opção inválida, por favor digite uma opção válida -> ");
		//Seguintes scanf servem para limpar o buffer e descartar entradas inválidas
		scanf("%*[^\n]");
		scanf("%*c");
	}
	return (op);
}

/**
 * Function: MenuFinal
 * 
 * Mostra o resultado da partida e pergunta se quer voltar a jogar 
 * 
 * pont: Pontuação do jogador
 * n_vitorias: Número de vitórias máximas até acabar o jogo
 * typegame: 0 se for contra o PC
 *           1 se for contra uma pessoa 
 * 
 * Return: 
 *  1 se quiser continuar
 *  2 se quiser parar
 * 
 **/
int	MenuFinal(int pont, int n_vitorias, int typegame)
{
	int	op;

	if (typegame == 1)
	{
		if (pont == n_vitorias)
		{
			system("clear");
			printf("╔═════════════════════════╗\n");
			printf("║    JOGADOR 1 GANHASTE   ║\n");
			printf("╠═════════════════════════╣\n");
			printf("║  QUER JOGAR NOVAMENTE?  ║\n");
			printf("╠═════════════════════════╣\n");
			printf("║- [1] SIM                ║\n");
			printf("║- [2] NÃO                ║\n");
			printf("╚═════════════════════════╝\n");
			printf(" Selecione a opção que deseja --> ");
		}
		else
		{
			system("clear");
			printf("╔═════════════════════════╗\n");
			printf("║    JOGADOR 2 GANHASTE   ║\n");
			printf("╠═════════════════════════╣\n");
			printf("║  QUER JOGAR NOVAMENTE?  ║\n");
			printf("╠═════════════════════════╣\n");
			printf("║- [1] SIM                ║\n");
			printf("║- [2] NÃO                ║\n");
			printf("╚═════════════════════════╝\n");
			printf(" Selecione a opção que deseja --> ");
		}
	}
	else
	{
		if (pont == n_vitorias)
		{
			system("clear");
			printf("╔═════════════════════════╗\n");
			printf("║    PARABÉNS GANHASTE    ║\n");
			printf("╠═════════════════════════╣\n");
			printf("║  QUER JOGAR NOVAMENTE?  ║\n");
			printf("╠═════════════════════════╣\n");
			printf("║- [1] SIM                ║\n");
			printf("║- [2] NÃO                ║\n");
			printf("╚═════════════════════════╝\n");
			printf(" Selecione a opção que deseja --> ");
		}
		else
		{
			system("clear");
			printf("╔═════════════════════════════╗\n");
			printf("║    INFELIZMENTE PERDESTE    ║\n");
			printf("╠═════════════════════════════╣\n");
			printf("║    QUER JOGAR NOVAMENTE?    ║\n");
			printf("╠═════════════════════════════╣\n");
			printf("║- [1] SIM                    ║\n");
			printf("║- [2] NÃO                    ║\n");
			printf("╚═════════════════════════════╝\n");
			printf(" Selecione a opção que deseja --> ");
		}
	}
	while (scanf("%d", &op) != 1 || !(op >= 1 && op <= 2))
	{
		printf("Opção inválida, por favor digite uma opção válida -> ");
		//Seguintes scanf servem para limpar o buffer e descartar entradas inválidas
		scanf("%*[^\n]");
		scanf("%*c");
	}
	return (op);
}

/**
 * Function: header
 * 
 * Mostra o jogador que vai fazer a jogada
 * 
 * n_jogador: 1 se for o Jogador1
 * 			  2 se for o Jogador2
 * 
 * Return: Void
 * 
 **/
void	header(int n_jogador)
{
	system("clear");
	printf("╔════════════════════════════════╗\n");
	printf("║            JOGADOR %d           ║\n", n_jogador);
}


void sair(void)
{
	system("clear");
	printf("╔════════════════════════════════╗\n");
	printf("╠════════════  SAIR  ════════════╣\n");
	printf("╚════════════════════════════════╝\n");
}