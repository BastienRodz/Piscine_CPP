YELLOW			= \033[1;33m
GREEN			= \033[1;32m

SRCS			= main.cpp\
					Bureaucrat.cpp\
					AForm.cpp\
					RobotomyRequestForm.cpp\
					ShruberryCreationForm.cpp\
					PresidentialPardonForm.cpp
					

OBJS			= $(SRCS:.cpp=.o)

CC				= c++
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98
NAME			= prefecture

all:			$(NAME)

%.o: %.cpp
				@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				@echo "\n${GREEN} |   Compiling CPP05/ex02"
				@${CC} ${CFLAGS}  -o ${NAME} ${OBJS}
				@echo "${YELLOW}          [OK]\n"

clean:
				@echo "\n${GREEN} |   Cleaning Files"
				@$(RM) $(OBJS)
				@$(RM) *_shruberry
				@echo "${YELLOW}          [OK]\n"

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
