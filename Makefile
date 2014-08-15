CC=/root/rtf/bin/g++
CFLAGS=-c -Wall -std=c++11
LDFLAGS=
SOURCES=main.cpp 
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=hello

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean :
	rm *.o hello
