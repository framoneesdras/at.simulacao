#ifndef PAO_DORMIDO
#define PAO_DORMIDO

#include "../core-simulador-hpp/ArmaAtaque.hpp"
class Pao_Dormido : public ArmaAtaque
{
    public:
        Pao_Dormido(string descricaoArma, int minForca, int maxForca);
        int gerarForcaAtaque() override;
        string gerarRuidoAtaque() override;
};

#endif