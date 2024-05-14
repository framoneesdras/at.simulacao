#ifndef EIN
#define EIN
#include "../core-simulador-hpp/Personagem.hpp"
class Ein : public Personagem
{
    public:
        Ein(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif