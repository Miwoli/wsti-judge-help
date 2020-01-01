compiler=g++
VPATH=src:o_files

__: main
main : main.o score.o
	$(compiler) o_files/main.o ./o_files/score.o -o score.exe

main.o : main.cpp
	$(compiler) -c ./src/main.cpp -o ./o_files/main.o

score.o : score.cpp
	$(compiler) -c ./src/score.cpp -o ./o_files/score.o