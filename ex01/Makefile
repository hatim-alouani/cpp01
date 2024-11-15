SRCS = main.cpp Zombie.cpp zombieHorde.cpp
NAME = MoarBrainz
CC = c++ -Wall -Wextra -Werror -std=c++98
OBJS = ${SRCS:.cpp=.o}
HEADER = Zombie.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

%.o: %.cpp $(HEADER)
	$(CC) -c $< -o $@	

clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean