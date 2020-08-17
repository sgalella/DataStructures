CC = gcc
LD = gcc
CFLAGS = -g -Wall -Iinclude

vpath %.c src
vpath %.h include

build_dir = build
bin_dir = bin

.PHONY: all

all: main

main: $(build_dir)/main.o $(build_dir)/linked_list.o
	@mkdir -p $(bin_dir)
	$(LD) $(CFLAGS) $^ -o $(bin_dir)/$@

$(build_dir)/main.o: main.c linked_list.h
	@mkdir -p $(build_dir)
	$(CC) $(CFLAGS) -c $< -o $@

$(build_dir)/linked_list.o: linked_list.c linked_list.h
	@mkdir -p $(build_dir)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm bin/*  build/*