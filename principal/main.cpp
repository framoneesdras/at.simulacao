#include <iostream>
#include <string>
#include "../acessorios-hpp/Rosa.hpp"
#include "../acessorios-hpp/Colher.hpp"
#include "../acessorios-hpp/Escudo.hpp"
#include "../acessorios-hpp/Espada.hpp"
#include "../acessorios-hpp/Livro_CalcIII.hpp"
#include "../acessorios-hpp/Machado.hpp"
#include "../acessorios-hpp/Pao_Dormido.hpp"
#include "../acessorios-hpp/Adaga.hpp"
#include "../acessorios-hpp/Oculos.hpp"
#include "../acessorios-hpp/Armadura.hpp"
#include "../acessorios-hpp/Minion.hpp"
#include "../acessorios-hpp/Bracelete.hpp"
#include "../acessorios-hpp/Colar.hpp"
#include "../personagens-hpp/Chaves.hpp"

#include "../personagens-hpp/Spike.hpp"
#include "../personagens-hpp/Jet.hpp"
#include "../personagens-hpp/Faye.hpp"
#include "../personagens-hpp/Edward.hpp"
#include "../personagens-hpp/Ein.hpp"

#include "../core-simulador-hpp/Simulador.hpp"

using std::cout;
using std::endl;
using std::string;

int main()
{
    ArmaAtaque* arma  = new Rosa("Super Rosa Amarela",0,10);
    ArmaAtaque* arma2 = new Colher("Colher de Pata",0,70);
    ArmaAtaque* arma3 = new Espada("Espada top",0,65);
    ArmaAtaque* arma4 = new Adaga("Adaga topzeira",0,64);
    ArmaAtaque* arma5 = new Livro_CalcIII("Desmaia Aluno",0,43);
    ArmaAtaque* arma6 = new Machado("Derruba tora",0,12);
    ArmaAtaque* arma7 = new Pao_Dormido("Durissimo!",0,30);
    ArmaDefesa* escudo = new Escudo("Latao", 1);
    ArmaDefesa* escudo2 = new Oculos("Reflexo", 3);
    ArmaDefesa* escudo3 = new Armadura("Tankei", 21);
    ArmaDefesa* escudo4 = new Minion("Cuidado Mestre", 3);
    ArmaDefesa* escudo5 = new Bracelete("Espirio Hippie!", 41);
    ArmaDefesa* escudo6 = new Colar("Protecao Garantida", 1);
        
    Personagem* p1 = new Chaves(1, "Chaves Eq1", 100, arma, escudo);
    Personagem* p2 = new Spike(2, "Spike Eq2", 40, arma3, escudo3);
    Personagem* p3 = new Jet(1, "Jet Eq1 - Reserva", 100, arma2, escudo2);
    Personagem* p4 = new Faye(2, "Faye Eq2 - Reserva", 100, arma4, escudo4);
    Personagem* p5 = new Edward(1, "Edward Eq1 - Reserva", 100, arma5, escudo5);
    Personagem* p6 = new Ein(2, "Ein Eq2 - Reserva", 100, arma7, escudo6);


    Simulador* simulador = new Simulador();
    simulador->adicionarPersonagem(p1, 1);
    simulador->adicionarPersonagem(p2, 2);
    simulador->adicionarPersonagem(p3, 1);
    simulador->adicionarPersonagem(p4, 2);
    simulador->adicionarPersonagem(p5, 1);
    simulador->adicionarPersonagem(p6, 2);
    
    simulador->iniciarSimulacao();

    return 0;
}