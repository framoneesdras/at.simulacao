#include "../personagens-hpp/Jet.hpp"

Jet::Jet(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Jet::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Jet::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Jet::pegarDescricao() 
{
    return "Isso eh perca de tempo...";
}