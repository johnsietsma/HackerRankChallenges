CC=g++
CFLAGS=-c -Wall -g -std=c++11 -stdlib=libc++
LDFLAGS=
OBJECTS=$(SOURCES:.cpp=.o)

LONELY_OBJECTS=LonelyInteger.o
SUM_OBJECTS=SimpleArraySum.o
SUM_OBJECTS=VeryBigArraySum.o

all: LonelyTest SimpleArraySumTest VeryBigArraySumTest

# Lonely Integer
LonelyTest: LonelyInteger
	./LonelyInteger < input/lonely1.txt
	./LonelyInteger < input/lonely2.txt
	./LonelyInteger < input/lonely3.txt

LonelyInteger: $(LONELY_OBJECTS)
	$(CC) $(LDFLAGS) $(LONELY_OBJECTS) -o $@


# Simple Array Sum
SimpleArraySumTest: SimpleArraySum
	./SimpleArraySum < input/sum1.txt

SimpleArraySum: $(SUM_OBJECTS)
	$(CC) $(LDFLAGS) $(SUM_OBJECTS) -o $@


# Very Big Array Sum
VeryBigArraySumTest: VeryBigArraySum
	./VeryBigArraySum < input/bigsum1.txt

VeryBigArraySum: $(SUM_OBJECTS)
	$(CC) $(LDFLAGS) $(SUM_OBJECTS) -o $@


.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
