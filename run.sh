g++ -c assign1-main.cpp
g++ -c assign1-defs.cpp
g++ assign1-main.o assign1-defs.o -o ./run
./run < sampleInput.txt
