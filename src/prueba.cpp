#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int posicionX(int posicion, int tiempo, int velocidad)
{
    return posicion + velocidad * tiempo;
}

int posicionY(int posicion, int tiempo, int velocidad)
{
    return posicion + velocidad * tiempo;
}

int main(int argc, char const *argv[])
{
    int frame = 0;
    int velocidad_x = 2;
    int velocidad_y = 1;
    int posx = 10;
    int posy = 10;

    int ancho_canvas = 100;
    int alto_canvas = 60;

    while (true)
    {

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        auto can = Canvas(ancho_canvas, alto_canvas);


        can.DrawPointEllipseFilled(posx, posy, 18, 8, Color::White);
        can.DrawPointEllipseFilled(posx, posy, 14, 6.5, Color::Aquamarine1);
        can.DrawPointCircle(posx, posy, 2, Color::Black);

        auto lienzo = canvas(&can);
        auto layout = vbox({lienzo});

        Render(pantalla, layout);
        pantalla.Print();

        posx += velocidad_x;
        posy += velocidad_y;

        if (posx + 10 >= ancho_canvas || posx -10 <= 0)
        {
            velocidad_x = -velocidad_x;
        }
        if (posy + 8 >= alto_canvas || posy -8 <= 0)
        {
            velocidad_y = -velocidad_y;
        }
                this_thread::sleep_for(0.08s);

    }

    return 0;
}
