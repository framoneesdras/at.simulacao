#include "../core-simulador-hpp/ArmaDefesa.hpp"
#include "../acessorios-hpp/Bracelete.hpp"

Bracelete::Bracelete(string descricaoArma, int resistencia)
:ArmaDefesa(descricaoArma, resistencia){

}

string Bracelete::getDescricaoArma() 
{
    return this->descricaoArma;
}

int Bracelete::getResistencia() 
{
    return this->resistencia;
}