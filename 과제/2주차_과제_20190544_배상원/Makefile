objects = main.o Output.o Count.o

cc = gcc

target = test

$(target) : $(objects)
	$(cc) -g -o $(target) $(objects)

main.o : main.c
	$(cc) -c -g -o main.o main.c

Output.o : Output.c
	$(cc) -c -g -o Output.o Output.c

Count.o : Count.c
	$(cc) -c -g -o Count.o Count.c

.PHONY : clean

clean:
	rm $(objects) $(target)
