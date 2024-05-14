#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Colar.hpp"

Colar::Colar(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Colar::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Colar::getResistencia() 
{
    return this->resistencia;
}