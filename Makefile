PROJECT=tk7_datatool

# ifdef Linux
ifeq ($(shell uname), Linux)
all:
	@# Build Injector
	cd ./injector && \
	powershell.exe -c "cmake.exe -B build" && \
	powershell.exe -c "cmake.exe --build build --config Release"
	
	@# Build Data Tool
	cd ./data-tool && \
	powershell.exe -c "cmake.exe -B build" && \
	powershell.exe -c "cmake.exe --build build --config Release"
	
	@# Copy compiled files to ./bin
	if ! [ -d bin ]; then mkdir -p bin; fi
	cp ./data-tool/build/Release/tk7_datatool.dll ./bin/
	cp ./injector/build/Release/TK7-DataTool.exe ./bin

clean:
	rm -fr ./bin/**
	rm -fr ./build/**

update:
	if [ -f resources/memory_address.ini ]; then rm resources/memory_address.ini; fi
	wget -P resources/ https://raw.githubusercontent.com/WAZAAAAA0/TekkenBot/master/TekkenData/memory_address.ini
	python3 generate_offsets.py

else
# elsif Windows
all:
	cmake.exe -A Win64 -B build
	cmake.exe --build build --config Release
	
	# TODO
	# if ./bin/ does not exist make ./bin/
	mkdir bin
	cp ./build/Release/tk7_datatool.dll ./bin/

#TODO
clean:
	rm ./bin/** -A
	rm ./build/** -A

#TODO
update:
	# Some PowerShell C# Nonsense
endif
