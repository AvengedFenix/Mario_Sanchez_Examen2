OnePiece:	Main.o Fruta.o Logia.o Marina.o Paramecia.o Piratas.o Revolucionarios.o Seres.o Zoan.o
		g++ Main.o Fruta.o Logia.o Marina.o Paramecia.o Piratas.o Revolucionarios.o Seres.o Zoan.o -o OnePiece

Main.o:	Main.cpp Fruta.cpp Logia.cpp Marina.cpp Paramecia.cpp Piratas.cpp Revolucionarios.cpp Seres.cpp Zoan.cpp
		g++ -c Main.cpp

Fruta.o: Fruta.cpp Fruta.h Paramecia.h Zoan.h Logia.h
		g++ -c Fruta.cpp

Paramecia.o:	Paramecia.cpp Paramecia.h Fruta.h
		g++ -c Paramecia.cpp

Zoan.o:	Zoan.cpp Zoan.h Fruta.h
		g++ -c Zoan.cpp

Logia.o:	Logia.cpp Logia.h Fruta.h
		g++ -c Logia.cpp

Seres.o:	Seres.cpp Seres.h Marina.h Piratas.h Revolucionarios.h
		g++ -c Seres.cpp

Marina.o:	Marina.cpp Marina.h Seres.h
		g++ -c Marina.cpp

Piratas.o:	Piratas.cpp Piratas.h Seres.h
		g++ -c Piratas.cpp

Revolucionarios.o: Revolucionarios.cpp Revolucionarios.h Seres.h
		g++ -c Revolucionarios.cpp

clean:
		rm *.o OnePiece
