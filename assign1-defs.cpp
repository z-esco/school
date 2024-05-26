#include "assign1.h"

///////////////Defintions for assign1 functions

//City class defintions
City::City(){
    name = "null";
    population = 0;
}

City::City(std::string n, unsigned int p){
    name = n;
    population = p;
}

//Misc function defs
    const std::string getFileName(){
        std::string file;
        std::ifstream check;
        bool isGood;

        while(!isGood){
            std::cout << "input name of input file: ";
            std::cin >> file;

            check.open(file);

            if(check.good()) isGood = true;
            else std::cout << "\nInput file invalid. Try again\n\n";                
            
            check.close();
        }

        return file;
    }

