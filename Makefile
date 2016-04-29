CC=g++
CFLAGS=-c -Wall -g -std=c++11 -stdlib=libc++
LDFLAGS=
OBJECTS=$(SOURCES:.cpp=.o)

LONELY_OBJECTS=LonelyInteger.o

all: LonelyTest

LonelyTest: LonelyInteger
	./LonelyInteger < input/lonely1.txt
	./LonelyInteger < input/lonely2.txt
	./LonelyInteger < input/lonely3.txt

LonelyInteger: $(LONELY_OBJECTS)
	$(CC) $(LDFLAGS) $(LONELY_OBJECTS) -o $@


.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
