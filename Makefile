all: createstaticlib labcompile clean

createstaticlib:
	@gcc -c lib/funclib.c
	@gcc -c lib/misclib.c
	@ar cr libstatic.a funclib.o misclib.o
	@rm *.o

createdynamiclib:
	@gcc -c lib/funclib.c
	@gcc -c lib/misclib.c
	@export LD_LIBRARY_PATH="$$LD_LIBRARY_PATH:$$PWD"
	@gcc -shared -o libdynamic.so funclib.o misclib.o
	@rm *.o

labcompile:
	@if ([ $(number) != 3 ] && [ $(number) != 4 ] && [ $(number) != 7 ]); then \
		gcc -c $(number)/main.c; \
		gcc -o temp main.o -L ./ -lstatic -lm; \
		./temp; \
	else \
		echo -n "a or b: "; \
		read letter; \
		gcc -c $(number)/$$letter.c; \
		gcc -o temp $$letter.o -L ./ -lstatic -lm; \
		./temp; \
	fi; \

	@rm -rf *.o
	@rm -rf temp

clean:
	@rm -rf *.o
	@rm -rf *.a
	@rm -rf *.so
	@rm -rf temp