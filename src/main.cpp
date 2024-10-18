#include <Porcentaje.hpp>
#include <iostream>
#include <list>

int main (){
    std::list<Porcentaje> focos;

    focos.emplace_back(foco1);
    focos.emplace_back(foco2);
    focos.emplace_back(foco3);

for ( auto &&f : focos) //listas e incrementar
{
f.Incrementar(10);
}


    Porcentaje foco1;
    Porcentaje foco2;
    Porcentaje foco3;


    foco1.Incrementar(10);
    foco1.Incrementar(10);
    foco1.Disminuir(4);
    


    std::cout
    <<"Foco 1: " 
    <<foco1.Imprimir()
    <<std::endl;

}