#include "../core-simulador-hpp/ArmaAtaque.hpp"
#include "../acessorios-hpp/Livro_CalcIII.hpp"

Livro_CalcIII::Livro_CalcIII(string descricaoArma, int minForca, int maxForca)
:ArmaAtaque(descricaoArma, minForca, maxForca)
{

}

int Livro_CalcIII::gerarForcaAtaque()
{
    return maxForca - minForca;
}

string Livro_CalcIII::gerarRuidoAtaque()
{
    return "cush cush";
}
