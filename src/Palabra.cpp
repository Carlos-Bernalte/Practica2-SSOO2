#include <iostream>
#include <colours.h>

class Palabra
{
private:
    std::string objetivo;
    int nHilo;
    int inicio;
    int final;
    int linea;
    std::string word_before;
    std::string word;
    std::string word_after;

public:
    Palabra(std::string objetivo, int nHilo, int inicio, int final, int linea, std::string word_before, std::string word, std::string word_after);
    void toString();
};

Palabra::Palabra(std::string objetivo,int nHilo, int inicio, int final, int linea, std::string word_before, std::string word, std::string word_after)
{
    this->objetivo=objetivo;
    this->nHilo=nHilo;
    this->inicio=inicio;
    this->final=final;
    this->linea=linea;
    this->word_before=word_before;
    this->word=word;
    this->word_after=word_after;
}

void Palabra::toString(){
    std::cout<< RESULT("[Hilo ")<< RED <<std::to_string(this->nHilo) << RESULT(" inicio: ")<< RED<< std::to_string(this->inicio)<<  RESULT(" – final: ")<< RED << std::to_string(this->final)<<  RESULT("] :: línea ")<< RED <<std::to_string(this->linea)<<RESULT(" :: ")<< CIAN <<"..."+this->word_before<<" "<< ULINE <<this->word<< RESET<< CIAN<<" "<<this->word_after<<"..."<<std::endl;
}


