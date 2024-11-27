NAME     := ClapTrap
SRCS     := main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp ScavTrap.hpp
OBJS     := $(SRCS:.cpp=.o)
CXX      := g++
CXXFLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@$(CXX) $(OBJS) -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@echo "Project cleaned"

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re
