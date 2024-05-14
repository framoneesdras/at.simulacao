g++ -c acessorios-cpp/Colher.cpp -o acessorios-cpp/Colher.o
g++ -c acessorios-cpp/Escudo.cpp -o acessorios-cpp/Escudo.o
g++ -c acessorios-cpp/Rosa.cpp -o acessorios-cpp/Rosa.o
g++ -c acessorios-cpp/Espada.cpp -o acessorios-cpp/Espada.o
g++ -c acessorios-cpp/Livro_CalcIII.cpp -o acessorios-cpp/Livro_CalcIII.o
g++ -c acessorios-cpp/Machado.cpp -o acessorios-cpp/Machado.o
g++ -c acessorios-cpp/Pao_Dormido.cpp -o acessorios-cpp/Pao_Dormido.o
g++ -c acessorios-cpp/Adaga.cpp -o acessorios-cpp/Adaga.o
g++ -c acessorios-cpp/Oculos.cpp -o acessorios-cpp/Oculos.o
g++ -c acessorios-cpp/Armadura.cpp -o acessorios-cpp/Armadura.o
g++ -c acessorios-cpp/Minion.cpp -o acessorios-cpp/Minion.o
g++ -c acessorios-cpp/Bracelete.cpp -o acessorios-cpp/Bracelete.o
g++ -c acessorios-cpp/Colar.cpp -o acessorios-cpp/Colar.o
g++ -c core-simulador-cpp/ArmaAtaque.cpp -o core-simulador-cpp/ArmaAtaque.o
g++ -c core-simulador-cpp/ArmaDefesa.cpp -o core-simulador-cpp/ArmaDefesa.o
g++ -c core-simulador-cpp/Personagem.cpp -o core-simulador-cpp/Personagem.o
g++ -c core-simulador-cpp/Simulador.cpp -o core-simulador-cpp/Simulador.o
g++ -c personagens-cpp/Chaves.cpp -o personagens-cpp/Chaves.o
g++ -c personagens-cpp/Spike.cpp -o personagens-cpp/Spike.o
g++ -c personagens-cpp/Jet.cpp -o personagens-cpp/Jet.o
g++ -c personagens-cpp/Faye.cpp -o personagens-cpp/Faye.o
g++ -c personagens-cpp/Edward.cpp -o personagens-cpp/Edward.o
g++ -c personagens-cpp/Ein.cpp -o personagens-cpp/Ein.o

g++ principal/main.cpp acessorios-cpp/*.o core-simulador-cpp/*.o personagens-cpp/*.o -o programa