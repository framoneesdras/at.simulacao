#include "../personagens-hpp/Spike.hpp"

Spike::Spike(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Spike::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Spike::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Spike::pegarDescricao() 
{
    return "O que acontecer, aconteceu";
}