default_target: all

# Detect operating system in Makefile.
# Author: He Tao
# Date: 2015-05-30

OSFLAG 				:=
ifeq ($(OS),Windows_NT)
	OSFLAG += $(OS)
else
	UNAME_S := $(shell uname -s)
	ifeq ($(UNAME_S),Linux)
		OSFLAG += $(UNAME_S)
	endif
endif

all:
	cmake -B build -S . --preset $(OSFLAG)
	make --directory=build

maze:
	ruby maze_generator.rb 10 20 "* o12" > "maze.txt"