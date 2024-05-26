#include <iostream>
#include <fstream>
#include <sstream>

#include <list>
#include <string>

class City{
    public:
        City();
        City(std::string n, unsigned int p);
    
    private:
        std::string name;
        unsigned int population;


};

const std::string getFileName();
