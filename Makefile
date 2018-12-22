## Russell James Makefile, Project 4 - Combat tournament
## variables referenced from example provided by Harlan James

## variables for filenames
projName = DeckTest
srcFile1 = main.cpp
srcFile2 = Card.cpp
srcFile3 = Deck.cpp
##srcFile4 = Character.cpp

## variables for object names
obj1 = $(srcFile1:.cpp=.o)
obj2 = $(srcFile2:.cpp=.o)
obj3 = $(srcFile3:.cpp=.o)

## variables for header file names
header2 = $(srcFile2:.cpp=.hpp)
header3 = $(srcFile3:.cpp=.hpp)


## variables for compiler and flags
CXX = g++
CXFlags = -c -std=c++0x -g -Wall

## valgrind flags
VFlags = --leak-check=full -v

all: $(projName)

$(projName): $(obj1) $(obj2) $(obj3)
	$(CXX) -std=c++0x -g $(obj1) $(obj2) $(obj3) -o $(projName)

$(obj1): $(srcFile1)
	$(CXX) $(CXFlags) $(srcFile1)

$(obj2): $(srcFile2) $(header2)
	$(CXX) $(CXFlags) $(srcFile2)

$(obj3): $(srcFile3) $(header3)
	$(CXX) $(CXFlags) $(srcFile3)

clean:
	rm *.o $(projName)

valgrind:
	valgrind $(VFlags) ./$(projName)
