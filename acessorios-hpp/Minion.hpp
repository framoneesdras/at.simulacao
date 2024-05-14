#ifndef MINION
#define MINION

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Minion : public ArmaDefesa
{
    public:
        Minion(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif