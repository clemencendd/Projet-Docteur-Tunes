test: main.o ZoneDeDessin.o sudoku.o ../../Documents/GfxLib/libisentlib.a
	gcc main.o ZoneDeDessin.o sudoku.o -o  test ../../Documents/GfxLib/libisentlib.a -lm -lglut -lGL -lX11

main.o: main.c ../../Documents/GfxLib/BmpLib.h ../../Documents/GfxLib/GfxLib.h ZoneDeDessin.h Coordonnees.h sudoku.h
	gcc -g -Wall -Werror -c main.c
	
ZoneDeDessin.o: ZoneDeDessin.c ../../Documents/GfxLib/BmpLib.h ../../Documents/GfxLib/GfxLib.h ZoneDeDessin.h Coordonnees.h sudoku.h
	gcc -g -Wall -Werror -c ZoneDeDessin.c

sudoku.o: sudoku.c ../../Documents/GfxLib/BmpLib.h ../../Documents/GfxLib/GfxLib.h ZoneDeDessin.h Coordonnees.h sudoku.h
	gcc -g -Wall -Werror -c sudoku.c	
	
clean:
	rm main.o test ZoneDeDessin.o sudoku.o
