###
### @file -  Rock Paper Scissors Makefile
### @author - Lee Rice <ricele@oregonstate.edu>
### @description - Makefile for a Rock, Paper, Scissors Program
### @Attribution - Portions of this makefile were adapted from a makefile by Harlan James
### and the following video: https://www.youtube.com/watch?time_continue=340&v=_r7i5X0rXJk
###

#
# Output files
#
output:  play_game.o Menu.o Paper.o Player.o Rock.o RPSGame.o Scissors.o Tool.o
	g++ play_game.o Menu.o Paper.o Player.o Rock.o RPSGame.o Scissors.o Tool.o -o RPSGame

play_game.o: play_game.cpp
	g++ -c -std=c++11 play_game.cpp
	
Menu.o: Menu.cpp Menu.hpp
	g++ -c -std=c++11 Menu.cpp
	
Paper.o: Paper.cpp Paper.hpp
	g++ -c -std=c++11 Paper.cpp

Player.o: Player.cpp Player.hpp
	g++ -c -std=c++11 Player.cpp
	
Rock.o: Rock.cpp Rock.hpp
	g++ -c -std=c++11 Rock.cpp
	
RPSGame.o: RPSGame.cpp RPSGame.hpp
	g++ -c -std=c++11 RPSGame.cpp
	
Scissors.o: Scissors.cpp Scissors.hpp
	g++ -c -std=c++11 Scissors.cpp
	
Tool.o: Tool.cpp Tool.hpp
	g++ -c -std=c++11 Tool.cpp
#
# Removes files with the .o file extension and the previously compiled executable
#	
clean:
	rm *.o RPSGame