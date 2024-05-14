#include "../personagens-hpp/Edward.hpp"

Edward::Edward(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa)
:Personagem(id, nome, vida, armaAtaque, armaDefesa){

}

int Edward::gerarAtaque()
{
    return armaAtaque->gerarForcaAtaque();
}

int Edward::criarDefesa()
{
    return armaDefesa->getResistencia();
}

string Edward::pegarDescricao() 
{
    return "Vou te Hackear!";
}