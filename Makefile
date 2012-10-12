CC  = g++ -Wall
SRC = main.cc x11.cc wx11.cc
EXE = demo

all:
	$(CC) -o $(EXE) $(SRC) -lX11 -I includes
