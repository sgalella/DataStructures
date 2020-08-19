CC = gcc
LD = gcc
CFLAGS = -g -Wall -Iinclude

vpath %.h include

src_dir = src
build_dir = build
bin_dir = bin

src_files = $(wildcard $(src_dir)/*.c)
obj_files = $(patsubst $(src_dir)/%.c, $(build_dir)/%.o, $(src_files))

.PHONY: all

all: main

main: $(obj_files)
	@mkdir -p $(bin_dir)
	$(LD) $(CFLAGS) $^ -o $(bin_dir)/$@

$(build_dir)/%.o: $(src_dir)/%.c data_structures.h
	@mkdir -p $(build_dir)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm bin/*  build/*