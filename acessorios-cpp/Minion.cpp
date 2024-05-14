#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Minion.hpp"

Minion::Minion(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Minion::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Minion::getResistencia() 
{
    return this->resistencia;
}