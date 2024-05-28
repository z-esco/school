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

std::string City::getName() const{
    return name;
}

unsigned int City::getPopulation() const{
    return population;
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

    const std::string getSearch(){
        std::string search;
        char c;
        bool valid = true;

        do{
            std::cout << "Enter the initial letters of a city to find its similarly "
                <<"named cities, ranked by population (this is case-sensitive).\n\n";
            std::cin >> search;

            for(int i = 0; i< search.length(); i++){
                c = search[i];
                if(c< 65 || c>122)
                    valid = false;
            }
            if(!valid)
                std::cout << "Invalid search. Try again.\n\n";

        }while(!valid);

        return search;
    }

