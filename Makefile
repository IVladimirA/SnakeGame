.PHONY: all run clean

all: main.exe

run: main.exe
	main.exe

main.exe: src/main.cpp
	g++ -Iinclude -Iinclude/sdl2 -Iinclude/headers -Llib -o main src/*.cpp -lmingw32 -lSDL2main -lSDL2 -lSDL2_image

clean:
	rm -rf "main.exe"