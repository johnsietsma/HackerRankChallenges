CC=g++
CFLAGS=-c -Wall -g -std=c++11 -stdlib=libc++
LDFLAGS=
OBJECTS=$(SOURCES:.cpp=.o)


OBJECTS=helpers.o
LONELY_OBJECTS=LonelyInteger.o
SUM_OBJECTS=SimpleArraySum.o
BIG_ARRAY_OBJECTS=VeryBigArraySum.o
DIAGONAL_DIFFERENCE_OBJECTS=DiagonalDifference.o
SUM_OBJECTS=VeryBigArraySum.o
PLUS_MINUS_OBJECTS=PlusMinus.o
STAIRCASE_OBJECTS=Staircase.o
TIME_CONVERSION_OBJECTS=TimeConversion.o

BINARIES=LonelyInteger SimpleArraySum VeryBigArraySum DiagonalDifference PlusMinus Staircase TimeConversion

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
	$(CC) $(LDFLAGS) $(BIG_ARRAY_OBJECTS) -o $@


# Diagonal Difference
DiagonalDifferenceTest: DiagonalDifference
	./DiagonalDifference < input/diagonal_difference1.txt

DiagonalDifference: $(DIAGONAL_DIFFERENCE_OBJECTS)
	$(CC) $(LDFLAGS) $(DIAGONAL_DIFFERENCE_OBJECTS) -o $@


# Plus Minus
PlusMinusTest: PlusMinus
	./PlusMinus < input/plus_minus1.txt

PlusMinus: $(PLUS_MINUS_OBJECTS)
	$(CC) $(LDFLAGS) $(PLUS_MINUS_OBJECTS) -o $@


# Staircase
StaircaseTest: Staircase
	./Staircase < input/staircase1.txt

PlusMinus: $(STAIRCASE_OBJECTS)
	$(CC) $(LDFLAGS) $(STAIRCASE_OBJECTS) -o $@


# Time conversion
TimeConversionTest: TimeConversion
	./TimeConversion < input/time1.txt
	./TimeConversion < input/time2.txt
	./TimeConversion < input/time3.txt

PlusMinus: $(TIME_CONVERSION_OBJECTS)
	$(CC) $(LDFLAGS) $(TIME_CONVERSION_OBJECTS) -o $@


.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm $(BINARIES) *.o