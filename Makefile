PROJECT=tk7_datatool

# ifdef linux
ifeq ($(shell uname), Linux)
all:
	powershell.exe -c "cmake.exe -A Win32 -B build" && \
	powershell.exe -c "cmake.exe --build build --config Release"

	# if ./bin/ does not exist make ./bin/
	mkdir -p bin
	cp ./build/Release/tk7_datatool.dll ./bin/

clean:
	rm -fr ./bin/**
	rm -fr ./build/**
else
all:
	cmake.exe -A Win64 -B build
	cmake.exe --build build --config Release
	
	# TODO
	# if ./bin/ does not exist make ./bin/
	mkdir bin
	cp ./build/Release/tk7_datatool.dll ./bin/

clean:
	rm -fr ./bin/**
	rm -fr ./build/**
endif
