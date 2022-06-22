# the compiler: gcc for C program, define as g++ for C++
CC = g++

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g --std=c++11

# The build target 
BUILD = build
TARGET = $(BUILD)/main

MAIN_O = $(BUILD)/main.o
CARD_O = $(BUILD)/card.o
DECK_O = $(BUILD)/deck.o

run: 
	./$(TARGET)

main: main.o deck.o card.o
	$(CC) $(CFLAGS) -o ./$(BUILD)/main ./$(MAIN_O) ./$(DECK_O) ./$(CARD_O)

main.o: main.cpp deck.h card.h
	$(CC) $(CFLAGS) -c main.cpp -o ./$(MAIN_O)

card.o: card.cpp card.h
	$(CC) $(CFLAGS) -c card.cpp -o ./$(CARD_O)

deck.o: deck.cpp deck.h card.o
	$(CC) $(CFLAGS) -c deck.cpp ./$(CARD_O) -o ./$(DECK_O)

clean:
	$(RM) ./$(MAIN_O) ./$(CARD_O) ./$(DECK_O) ./$(TARGET)
