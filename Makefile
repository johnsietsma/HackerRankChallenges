CC=g++
CFLAGS=-c -Wall -g -std=c++11 -stdlib=libc++
LDFLAGS=
OBJECTS=$(SOURCES:.cpp=.o)


OBJECTS=helpers.o
LONELY_OBJECTS=LonelyInteger.o
SUM_OBJECTS=SimpleArraySum.o
SUM_OBJECTS=VeryBigArraySum.o
DIAGONAL_DIFFERENCE_OBJECTS=DiagonalDifference.o

BINARIES=LonelyTest SimpleArraySumTest VeryBigArraySumTest DiagonalDifferenceTest

all: $(BINARIES)

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


# Diagonal Difference
DiagonalDifferenceTest: DiagonalDifference
	./DiagonalDifference < input/diagonal_difference1.txt

DiagonalDifference: $(DIAGONAL_DIFFERENCE_OBJECTS)
	$(CC) $(LDFLAGS) $(DIAGONAL_DIFFERENCE_OBJECTS) -o $@


.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(BINARIES) *.o