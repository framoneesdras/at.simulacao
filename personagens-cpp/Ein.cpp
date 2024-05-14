#include "../personagens-hpp/Ein.hpp"

Ein::Ein(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Ein::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Ein::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Ein::pegarDescricao() 
{
    return "Au au au!";
}