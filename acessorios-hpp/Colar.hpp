#ifndef COLAR
#define COLAR

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Colar : public ArmaDefesa
{
    public:
        Colar(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif