##
## EPITECH PROJECT, 2021
## BSQ
## File description:
## Main kakefile
##

NO_CRITERION	=	src/main.c

SRC	=	src/detect_square.c	\
		src/error_handle.c	\
		src/fill_square.c	\
		src/gen_2d_map.c	\
		src/get_file.c	\
		src/free_zone.c	\
		src/get_map.c

SRC_C	=	tests/tests_open_file.c

OBJ	=	$(SRC:.c=.o) $(NO_CRITERION:.c=.o)

NAME	=	bsq

##CFLAGS - CPPFLAGS - LDFLAGS

CFLAGS	=	-Wall -Wextra -Werror -Wshadow -Wimplicit -pedantic

CPPFLAGS += -I./include/
CPPFLAGS += -L./lib -lmy

all:	$(NAME)

lib:
	make -s -C ./lib/my

$(NAME):	lib $(OBJ)
	gcc $(OBJ) -o $(NAME) -ggdb3 $(CPPFLAGS)
	rm -f $(OBJ)

tests_run:	lib
	gcc -o uni_t $(SRC) tests/*.c $(CPPFLAGS) --coverage -lcriterion
	-./uni_t
	rm uni_t

cover:
	mkdir -p criterions_r
	gcovr --exclude tests/ --html --html-details -o criterions_r/cover.html
	gcovr --branches --exclude tests/
	make -C ./ clean

clean:
	rm -f $(OBJ)
	rm -f *.o
	rm -f *~
	rm -f vgcore*
	rm -f #*
	rm -f *.gcda
	rm -f *.gcno

fclean:	clean
	rm -f $(NAME)
	rm -f criterions_r/*.html
	rm -f criterions_r/*.css
	rm -rf criterions_r/

re:	fclean all

my_tests: re tests_run cover

.PHONY: all clean fclean re tests_run cover my_tests lib
