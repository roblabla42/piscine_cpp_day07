# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlambert <rlambert@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/03 11:25:08 by rlambert          #+#    #+#              #
#    Updated: 2015/06/25 13:22:04 by roblabla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test

CFLAGS += -Wall -Wextra -Werror

SRCS = whatever.cpp \

OBJS = $(patsubst %.cpp,obj/%.o,$(SRCS))

CP = cp

RM = rm -f

all: $(NAME)

MKDIR ?= mkdir

obj/%.o: %.cpp
	$(MKDIR) -p $(dir $@)
	$(CXX) -c $(CFLAGS) $(CPPFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CXX) -o $@ $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re
