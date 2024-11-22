CXX=clang++
CXXFLAGS=-Wall -Wextra -Werror
CXXVER=-std=c++98
SRCS=$(wildcard *.cpp)
OBJS=$(SRCS:.cpp=.o)
NAME=program

all:$(NAME)

$(NAME):$(OBJS)
	$(CXX) $(OBJS) -o $@

%.o:%.cpp
	$(CXX) $(CXXFLAGS) $(CXXVER) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
