CC=g++
CFLAGS=-c -Wall -g
LDFLAGS=
SOURCES=LonelyInteger.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=HackerRank

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
