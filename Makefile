
OBJS = build/main.o build/test1.o build/test2.o build/student.o build/test4.o

$(shell mkdir -p build)


all: build/test1.h build/test2.h build/student.h build/test4.h $(OBJS)
	gcc $(OBJS)
	./a.out

build/%.h: %.c
	makeheaders $<:$@

build/%.o: %.c
	gcc -c -o $@ $< -I build


clean:
	rm -rf build a.out