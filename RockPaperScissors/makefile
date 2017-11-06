CXX = g++
CXXFLAGS =  -std=c++0x
CXXFLAGS +=   -Wall
CXXFLAGS +=   -pedantic-errors
CXXFLAGS +=   -g
#CXXFLAGS +=   -O3
LDFLAGS =  -lboost_date_time
OBJS = Menu.o Paper.o Player.o Rock.o Scissors.o Tool.o RPSGame.o validateInput.o main.o
SRCS = Menu.cpp Paper.cpp Player.cpp Rock.cpp Scissors.cpp Tool.cpp RPSGame.cpp validateInput.cpp main.cpp
HEADERS = Menu.hpp Paper.hpp Player.hpp Rock.hpp Scissors.hpp Tool.hpp RPSGame.hpp validateInput.hpp

#target: dependencies
#rule to build
#

RockPaperScissors: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o RockPaperScissors

${OBJS}: ${SRCS}
	${CXX} ${CXXFLAGS} -c   $(@:.o=.cpp)

.PHONY: clean
clean:
	rm ${OBJS} RockPaperScissors

zip:
	zip -D RockPaperScissors_Group_15.zip ${HEADERS} ${SRCS} makefile
