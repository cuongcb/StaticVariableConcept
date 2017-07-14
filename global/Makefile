GCC := gcc -g -Wall -o
LIBS := -lpthread
SRC := var.c
singlethread:
	@$(GCC) $@ $@_main.c $(SRC)
multithread:
	@$(GCC) $@ $@_main.c $(SRC) $(LIBS)
multiprocess:
	@$(GCC) $@ $@_main.c $(SRC)
all: singlethread multithread multiprocess
clean:
	@rm singlethread multithread multiprocess

.PHONY: all singlethread multithread multiprocess clean
