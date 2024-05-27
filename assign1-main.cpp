#include "assign1.h"


int main(){
    //declare necessary lists
    std::list<City> mainList;

    //declare/init necessary variables
    std::string filename = getFileName();
    std::string search = getSearch();
    char compare[50], line [70];
    unsigned int count = 1;
    bool match;

    //dec/init necessary streams
    std::fstream in(filename);
    std::fstream in1(filename);

    //do{
        while(!in.eof() || count <= 10){
            in1.getline(line, 70, '\n');
            in.ignore(20, ' ');
            in.getline(compare, 50, '\n');

            match = true;
            for(int i = 0; i < search.length(); i++){
                if(search[i] != compare[i])
                    match = false;
            }

            if(match){
                std::cout << "("<< count << ") ";
                std::cout << line;
                count ++;
            }

       }

        std::cout << "Another city? (use CTRL-D to exit)\n";
        std::cin >> search;

    //}while(!std::cin.eof());

    in.close();
    in1.close();



    return 0;
}