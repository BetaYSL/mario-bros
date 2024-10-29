#include <Foco.hpp>
#include <iostream>
#include <list>

class SerieNavidad
{
private:
    std::list<Foco> focos;

public:
    SerieNavidad(int noFocos)
    {
        for (size_t i = 0; i < noFocos; i++)
        {
            Foco foco1;
            this->focos.emplace_back(foco1);
        }

        Foco foco1;
        Foco foco2;
        Foco foco3;

        this->focos.emplace_back(foco1);
        this->focos.emplace_back(foco2);
        this->focos.emplace_back(foco3);
    }
    ~SerieNavidad() {}
    void Encender()
    {
        for (auto &&f : focos) // listas e incrementar
        {
            f.Encender();
        }
    }
    void Imprimir()
    {
        system("color 84");
        for (auto &&focoActual : focos)
        {
            std::cout
                << focoActual.Imprimir()
                << "-";
        }
        std::cout << std::endl;
    }
};