#include <stdexcept>
class Porcentaje
{
private:
    int numero;

public:
    Porcentaje()
    {
        this->numero = 0;
    }
    Porcentaje(int numero)
    {
        if (numero > 100 || numero < 0)
        {
            throw new std::runtime_error("Numero fuera de rango.");
        }
        else
        {

            this->numero = numero;
        }
    }
    ~Porcentaje() {}
    void Incrementar(int numero)
    {
    }
    void Disminuir(int numero)
    {
    }
};