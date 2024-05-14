#ifndef FAYE
#define FAYE
#include "../core-simulador-hpp/Personagem.hpp"
class Faye : public Personagem
{
    public:
        Faye(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif