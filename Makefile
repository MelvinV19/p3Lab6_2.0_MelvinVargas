mu: main.o Tren.o Invisible.o Bomba.o Escenario.o Item.o Jugador.o Espina.o V.o Normal.o	
	g++ main.o Tren.o Invisible.o Bomba.o Escenario.o Item.o Jugador.o Espina.o V.o Normal.o -o mu -lncurses

main.o: main.cpp Bomba.h Espina.h Jugador.h V.h Item.h Escenario.h Tren.h Invisible.h 
	g++ -c main.cpp      

Tren.o:  Escenario.cpp Escenario.h Tren.h  
	g++ -c Tren.cpp

Invisible.o: Invisible.cpp Invisible.h Escenario.h Bomba.h Item.h
	g++ -c Invisible.cpp

Bomba.o: Bomba.cpp Item.h Bomba.h 
	g++ -c Bomba.cpp

Escenario.o:Escenario.cpp Item.h Bomba.h 
	g++ -c Escenario.cpp

Item.o:Item.cpp Item.h
	g++ -c Item.cpp 

Jugador.o:Jugador.cpp Jugador.h Item.h
	g++ -c Jugador.cpp 

Espina.o: Espina.cpp Espina.h Bomba.h
	g++ -c Espina.cpp 

V.o: V.cpp V.h Bomba.h
	g++ -c V.cpp 

Normal.o:Normal.cpp Normal.h Bomba.h
	g++ -c Normal.cpp




