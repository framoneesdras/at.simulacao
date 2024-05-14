#ifndef SPIKE
#define SPIKE
#include "../core-simulador-hpp/Personagem.hpp"
class Spike : public Personagem
{
    public:
        Spike(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif