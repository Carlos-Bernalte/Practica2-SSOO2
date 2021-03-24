#include <iostream>
#include <cctype>
#include <fstream>
#include <regex>
#include <filesystem>
#include <vector>
#include <thread>
#include <mutex>
#include <stdlib.h>
#include <string.h>
#include <definitions.h>

void arguments_control(char *argv[],std::string &file, std::string &objective, int &nThreads);
int number_of_lines(std::string file);
void find_word();

std::vector<std::thread> vThreads;

int main(int argc, char *argv[]){
    std::string file;
    std::string objective;
    int nThreads;
    int nLines;
 
    if(argc!=4){
        std::cerr << "Number of arguments is incorrect" <<std::endl;
        exit(EXIT_FAILURE);
    } 
    arguments_control(argv,file,objective,nThreads);

    nLines=number_of_lines(file);

    if(nLines<nThreads){
        std::cerr << "More threads than lines" <<std::endl;
        exit(EXIT_FAILURE);
    }

    return EXIT_SUCCESS;
}

void arguments_control(char *argv[],std::string &file, std::string &objective, int &nThreads){
    std::string archivo =LIBROS + std::string(argv[1]);
    std::ifstream File(archivo);
    if(File.good()){
        file=archivo;
    }else{
        std::cerr << "File does not exits" <<std::endl;
        exit(EXIT_FAILURE);
    }
    
    objective=argv[2];
    //REVISAR ESTO
    if(isdigit(atoi(argv[3]))==0){
        nThreads=atoi(argv[3]);
    }else{
        std::cerr << "Is not a number." <<std::endl;
        exit(EXIT_FAILURE);
    }
    
}

int number_of_lines(std::string file){
    int numLines = 0; 
    std::ifstream File(file); 

    while (File.good()) 
    { 
        std::string line; 
        std::getline(File, line); 
        ++numLines; 
    } 
    return numLines;
}