//Generar una classe Rectangle perquè permeti :
//•	Crear un rectangle indicant amplada i alçada.
//•	Calcular l'àrea.
//•	Calcular el perímetre.
//•	Mostrar les dimensions del rectangle

#include <iostream>

using namespace std;

class rectangle {
private:
    float amplada;
    float alcada;
public:
    rectangle(float a, float h) {
        amplada = a;
        alcada = h;
    }

    float CalcularArea() {
        return amplada * alcada;
    }

    float CalcularPerimetre() {
        return 2 * amplada + 2 * alcada;
    }

    void MostrarDimensions() {
        cout << "Amplada: " << amplada << " | Alcada: " << alcada << endl;
    }
};

int main() {
    float a, h;

    cout << "Introdueix l'amplada del rectangle: ";
    cin >> a;
    cout << "Introdueix l'alcada del rectangle: ";
    cin >> h;

    rectangle r1(a, h);

    cout << "\nRESULTATS" << endl;
    r1.MostrarDimensions();
    cout << "Area: " << r1.CalcularArea() << endl;
    cout << "Perimetre: " << r1.CalcularPerimetre() << endl;

    return 0;
}
