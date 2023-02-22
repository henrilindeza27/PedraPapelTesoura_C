SOURCEFILES	= srcs/main.c srcs/menus.c srcs/func.c srcs/play.c srcs/play_func.c
OBJECTS	= ${SOURCEFILES:.c=.o}
NAME	= ppt_exec
COMPILER		= cc
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror

.PHONY: all, clean, fclean, re, exec

all: exec

exec: ${NAME}
	./${NAME}


${NAME} : ${OBJECTS}
	@echo ${SOURCEFILES}
	${COMPILER} -o $@ $^

%.o : %.c
	${COMPILER} -c $< -o $@

clean:
	${RM} ${OBJECTS}

fclean: clean
	${RM} ${NAME}

re: fclean all
