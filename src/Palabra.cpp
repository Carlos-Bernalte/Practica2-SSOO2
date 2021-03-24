#include <iostream>


class Palabra
{
private:
    std::string objetivo;
    int nHilo;
    int inicio;
    int final;
    int linea;
    std::string referencia;

public:
    Palabra(std::string objetivo, int nHilo, int inicio, int final, int linea, std::string referencia);
    std::string toString();
};

Palabra::Palabra(std::string objetivo,int nHilo, int inicio, int final, int linea, std::string referencia)
{
    this->objetivo=objetivo;
    this->nHilo=nHilo;
    this->inicio=inicio;
    this->final=final;
    this->referencia=referencia;
}

std::string Palabra::toString(){
    return "[Hilo "+ std::to_string(this->nHilo) +" inicio: "+std::to_string(this->inicio)+" – final: "+std::to_string(this->final)+"] :: línea "+std::to_string(this->linea)+" :: ..."+this->referencia+"..";
}


