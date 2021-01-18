hepsi: derle bagla calistir
derle:
	gcc -I "./include/" -c ./src/Main.c -o ./lib/Main.o
	gcc -I "./include/" -c ./src/Test.c -o ./lib/Test.o
	gcc -I "./include/" -c ./src/Random.c -o ./lib/Random.o
	gcc -I "./include/" -c ./src/RastgeleKarakter.c -o ./lib/RastgeleKarakter.o
bagla:
	gcc ./lib/Main.o ./lib/Random.o ./lib/RastgeleKarakter.o ./lib/Test.o -o ./bin/Test
calistir:
	./bin/Test.exe