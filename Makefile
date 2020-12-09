all : shell

shell: shell.o cd.o echo.o ls.o pwd.o rm.o touch.o cat.o
	gcc -o shell shell.o cd.o echo.o ls.o pwd.o rm.o touch.o cat.o

shell.o: shell.c header.h
	gcc -o shell.o -c shell.c -W -Wall

cd.o: cd.c header.h
	gcc -o cd.o -c cd.c -W -Wall

echo.o: echo.c header.h
	gcc -o echo.o -c echo.c -W -Wall

ls.o: ls.c header.h
	gcc -o ls.o -c ls.c -W -Wall

pwd.o: pwd.c header.h
	gcc -o pwd.o -c pwd.c -W -Wall

rm.o: rm.c header.h
	gcc -o rm.o -c rm.c -W -Wall

touch.o: touch.c header.h
	gcc -o touch.o -c touch.c -W -Wall

cat.o: cat.c header.h
	gcc -o cat.o -c cat.c -W -Wall

clean:
	rm -rf *.o

mrproper: clean
	rm -rh shell
