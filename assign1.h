#include <iostream>
#include <fstream>
#include <sstream>

#include <list>
#include <string>

class City{
    public:
        City();
        City(std::string n, unsigned int p);
        std::string getName() const;
        unsigned int getPopulation() const;

    
    private:
        std::string name;
        unsigned int population;


};

const std::string getFileName();
const std::string getSearch();
