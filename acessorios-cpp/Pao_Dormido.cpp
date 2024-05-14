#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Pao_Dormido.hpp"

Pao_Dormido::Pao_Dormido(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Pao_Dormido::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Pao_Dormido::gerarRuidoAtaque()
{
    return "cush cush";
}
