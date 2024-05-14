#ifndef EDWARD
#define EDWARD
#include "../core-simulador-hpp/Personagem.hpp"
class Edward : public Personagem
{
    public:
        Edward(int id, string nome, int vida, ArmaAtaque* armaAtaque, ArmaDefesa* armaDefesa);
        int gerarAtaque() override;
        int criarDefesa() override;
        string pegarDescricao() override;

};
#endif