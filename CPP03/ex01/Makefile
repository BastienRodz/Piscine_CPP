YELLOW			= \033[1;33m
GREEN			= \033[1;32m

SRCS			= main.cpp\
<<<<<<< HEAD
					ClapTrap.cpp
=======
					ClapTrap.cpp\
					ScavTrap.cpp
>>>>>>> 8d7423ca64024776acdb381d6368740a7c9e7e40
					

OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98
<<<<<<< HEAD
NAME			= BallTrap
=======
NAME			= Serena
>>>>>>> 8d7423ca64024776acdb381d6368740a7c9e7e40

all:			$(NAME)

%.o: %.cpp
				@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				@echo "\n${GREEN} |   Compiling CPP03/ex01"
				@${CC} ${CFLAGS}  -o ${NAME} ${OBJS}
				@echo "${YELLOW}          [OK]\n"

clean:
				@echo "\n${GREEN} |   Cleaning Files"
				@$(RM) $(OBJS)
				@echo "${YELLOW}          [OK]\n"

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
