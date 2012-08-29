CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic

lab1: lab1.cpp
	$(CC) lab1.cpp $(CFLAGS) -o Lab1
