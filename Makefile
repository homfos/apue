CC = gcc
CFLAGS += -Wall
LFLAGS +=
EXECUTABLE = apue.out

all : $(EXECUTABLE)

$(EXECUTABLE) : err.o main.o
	$(CC) $(CFLAGS) $^ -o $@

err.o : err_fun.c apue.h
	$(CC) $(CFLAGS) -c $< -o $@ 

err_daemon.o : err_fun_daemon.c apue.h
	$(CC) $(CFLAGS) -c $< -o $@

main.o : main.c apue.h
	$(CC) $(CFLAGS) -c $< -o $@
