#include "assign1.h"


int main(){
    //declare necessary lists
    std::list<City> mainList;

    //declare/init necessary variables
    std::string filename = getFileName();
    std::string search = getSearch();
    std::string name, compare;
    char trash[90];
    unsigned int count, lines = 0, population;
    City city;

    //dec/init necessary streams
    std::fstream in(filename);

    //read loop to fill list
    do{
        in >> std::skipws>> population;
        in >> std::noskipws >> name;
        City c(name, population);
        mainList.push_back(c);
        lines++;
    }while(in.ignore(1000, '\n'));

    // Display # of lines
    std::cout << "Lines Read: " << lines << std::endl; 

    //repeat loop
    do{
        //reset count variable
        count = 1;
        std::list<City>::iterator itr = mainList.begin();
        
        for(int i = 0;i < mainList.size() && count <= 10; i++){
            city = *itr;
            compare = city.getName();        
            compare = compare.substr(0, search.length());
            std::cout << city.getName() << std::endl;
            if(compare == search){
                std::cout << "("<< count << ") ";
                std::cout << city.getName() << "has a population of " << city.getPopulation() << std::endl;
                count ++;
            }
            itr++;
       }

        std::cout << "Another city? (use CTRL-D to exit)\n";
        std::cin >> search;

    }while(!std::cin.eof());

    in.close();



    return 0;
}