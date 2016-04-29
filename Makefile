CC=g++
CFLAGS=-c -Wall -g -std=c++11 -stdlib=libc++
LDFLAGS=
OBJECTS=$(SOURCES:.cpp=.o)

LONELY_OBJECTS=LonelyInteger.o
SUM_OBJECTS=SimpleArraySum.o

all: LonelyTest SimpleArraySumTest

LonelyTest: LonelyInteger
	./LonelyInteger < input/lonely1.txt
	./LonelyInteger < input/lonely2.txt
	./LonelyInteger < input/lonely3.txt

LonelyInteger: $(LONELY_OBJECTS)
	$(CC) $(LDFLAGS) $(LONELY_OBJECTS) -o $@


SimpleArraySumTest: SimpleArraySum
	./SimpleArraySum < input/sum1.txt

SimpleArraySum: $(SUM_OBJECTS)
	$(CC) $(LDFLAGS) $(SUM_OBJECTS) -o $@


.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
