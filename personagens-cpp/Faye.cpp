#include "../personagens-hpp/Faye.hpp"

Faye::Faye(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Faye::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Faye::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Faye::pegarDescricao() 
{
    return "Sem grana, sem tempo";
}