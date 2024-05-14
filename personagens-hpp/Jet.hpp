#ifndef JET
#define JET
#include "../core-simulador-hpp/Personagem.hpp"
class Jet : public Personagem
{
    public:
        Jet(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif