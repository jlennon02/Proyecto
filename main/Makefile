all: compile link

compile:
	g++ -c main.cpp mainMenu.cpp -I"C:\Stuff\libraries\SFML-2.5.1\include" -DSFML_STATIC
link:
	g++ main.o -o main -L"C:\Stuff\libraries\SFML-2.5.1\lib" -lsfml-graphics-s -lsfml-window-s -lsfml-system-s -lopengl32 -lfreetype -lwinmm -lgdi32 -mwindows -lsfml-main
clean:
	del main.o
	del mainMenu.o
	del main.exe
	
	