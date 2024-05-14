#ifndef LIVRO_CALCIII
#define LIVRO_CALCIII

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Livro_CalcIII : public ArmaAtaque
{
    public:
        Livro_CalcIII(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif