CC = g++
CFLAGS = -Wall -ansi -pedantic -std=c++11
LIBS =
MAP = -DMAP=1

SRCS = lexer.cpp main.cpp symbole.cpp automate.cpp state.cpp state0.cpp state1.cpp state2.cpp state3.cpp state4.cpp state5.cpp state6.cpp state7.cpp State8.cpp state9.cpp
OBJS = $(SRCS: .cpp=.o)
EXE = Grammaire
EXEwMAP = TP_POO_TrajetswMAP

.PHONY : clean

andExecute : $(EXE)
	./$(EXE)

withMap : $(EXEwMAP)
	./$(EXEwMAP)

$(EXE) : $(OBJS)
	$(CC) -o $@ $^ $(LIBS)

$(EXEwMAP) : $(OBJS)
