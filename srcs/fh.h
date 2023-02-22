#ifndef FH_H
# define FH_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <termios.h>
# include <time.h>

int		Menu(void);
int		Menu_Jogo(unsigned int typegame);
int		Menu_Sec(void);
int		MenuFinal(int pont, int n_vitorias, int typegame);
void	header(int n_jogador);
void	sair(void);

void	n_jogo(int x);
void	resultado(int p1, int p2);
void	jogada(int option1, int option2, char *nome1, char *nome2);
void	estado(int estado, int typegame);

void	jogar(int num_jogadas, int p1, int p2, int op1, int op2, char *nome1,
			char *nome2, int estd, int typegame);

void	Modo_Jogo(int op, int *n);
int		verificar(int op1, int op2);
int		gerarAi(void);
void	cleanInput(void);

#endif