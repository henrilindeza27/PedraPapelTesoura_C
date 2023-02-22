#include "fh.h"

int	main(void)
{
	int op1, op2;
	int var;
	int p1 = 0;
	int p2 = 0;
	int jogadas = 0;
	int n;
	int op_menufinal = 1;

	while (op_menufinal == 1)
	{
		system("clear");
		switch (Menu())
		{
		case 1:
			system("clear");

			char nome1[] = "JOGADOR 1";
			char nome2[] = "JOGADOR 2";
			Modo_Jogo(Menu_Sec(), &n);

			do
			{
				header(1);
				op1 = Menu_Jogo(1);
				cleanInput();

				header(2);
				op2 = Menu_Jogo(1);
				cleanInput();

				if (op1 <= 3)
				{
					jogadas++;
					var = verificar(op1, op2);
					if (var == 1)
					{
						p1++;
						jogar(jogadas, p1, p2, op1, op2, nome1, nome2, var, 1);
					}
					else if (var == 2)
					{
						p2++;
						jogar(jogadas, p1, p2, op1, op2, nome1, nome2, var, 1);
					}
					else
						jogar(jogadas, p1, p2, op1, op2, nome1, nome2, var, 1);
				}
			} while (p1 < n && p2 < n);

			op_menufinal = MenuFinal(p1, n, 1);
			p1 = 0;
			p2 = 0;
			jogadas = 0;
			break ;
		case 2:

			srand(time(NULL));

			char nome3[] = "JOGADOR";
			char nome4[] = "AI";

			system("clear");
			Modo_Jogo(Menu_Sec(), &n);

			do
			{
				system("clear");
				op1 = Menu_Jogo(0);
				cleanInput();

				if (op1 <= 3)
				{
					jogadas++;

					op2 = gerarAi();
					var = verificar(op1, op2);

					if (var == 1)
					{
						p1++;
						jogar(jogadas, p1, p2, op1, op2, nome3, nome4, var, 0);
					}
					else if (var == 2)
					{
						p2++;
						jogar(jogadas, p1, p2, op1, op2, nome3, nome4, var, 0);
					}
					else
						jogar(jogadas, p1, p2, op1, op2, nome3, nome4, var, 0);
				}

			} while (p1 < n && p2 < n);
			op_menufinal = MenuFinal(p1, n, 2);
			p1 = 0;
			p2 = 0;
			jogadas = 0;

			break ;
		case 3:
			sair();
			return (0);
		}
	}
	sair();
	return (0);
}