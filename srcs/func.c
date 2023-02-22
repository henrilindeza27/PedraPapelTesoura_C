#include "fh.h"

int	gerarAi(void)
{
	return ((rand() % 3) + 1);
}

int	verificar(int op1, int op2)
{
	if ((op1 == 1 && op2 == 3) || (op1 == 2 && op2 == 1) || (op1 == 3
			&& op2 == 2))
		return (1);
	else if ((op1 == 3 && op2 == 1) || (op1 == 1 && op2 == 2) || (op1 == 2
				&& op2 == 3))
		return (2);
	else
		return (3);
}
void	cleanInput(void)
{
	while (getchar() != '\n')
		;
}

void	Modo_Jogo(int op, int *n)
{
	if (op == 1)
		*n = 1;
	else if (op == 2)
		*n = 3;
	else
		*n = 5;
}