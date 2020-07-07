##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##
SRC		=	./src/main.c				\
			./src/me.c				\
			./src/init_struct.c			\
			./src/my_rpg.c				\
			./src/my_menu.c				\
			./src/chara_texture.c			\
			./src/chara_move.c			\
			./src/my_mouse.c			\
			./src/my_game.c				\
			./src/my_scene.c			\
			./src/my_menu_buttons.c			\
			./src/init_struct2.c			\
			./src/pnj.c				\
			./src/fight.c				\
			./src/my_keyboard.c			\
			./src/my_menu_pause_buttons.c			\
			./src/my_menu_settings_buttons.c	\
			./src/collisions.c			\
			./src/inventory.c			\
			./src/fight2.c			\
			./src/my_text_buttons.c			\
			./src/my_text_print.c			\
			./src/house.c				\
			./src/enemy.c				\
			./src/init_struct3.c			\
			./src/fight3.c				\
			./src/pnj2.c

CFLAGS	=		-I ./include/

CFLAGS	+=		-W

OBJ     =		$(SRC:.c=.o)

NAME    =	my_rpg

all:    	$(NAME)	clean

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean
