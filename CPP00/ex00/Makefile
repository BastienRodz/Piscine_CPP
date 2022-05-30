YELLOW			= \033[1;33m
GREEN			= \033[1;32m

SRCS			= megaphone.cpp
OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98
NAME			= megaphone

all:			$(NAME)

.c.o:
				@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				@echo "\n${GREEN} |   Compiling CPP00/ex00"
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
