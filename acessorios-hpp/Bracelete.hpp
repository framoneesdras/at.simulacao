#ifndef BRACELETE
#define BRACELETE

#include "../core-simulador-hpp/ArmaDefesa.hpp"
class Bracelete : public ArmaDefesa
{
    public:
        Bracelete(string descricaoArma, int resistencia);
        string getDescricaoArma() override;
        int getResistencia() override;
};

#endif