//Generar una classe Termòmetre perquè permeti :
//•	Crear un termòmetre amb una temperatura inicial.
//•	Consultar la temperatura.
//•	Modificar la temperatura(No permetre temperatures inferiors a - 50 °C ni superiors a 60 °C)

#include <iostream>

using namespace std;

class Termometre {
private:
    float temperatura; 

public:
    Termometre(float tempInicial) {
        if (tempInicial >= -50.0f && tempInicial <= 60.0f) {
            temperatura = tempInicial;
        }
        else {
            cout << "Avís: La temperatura inicial (" << tempInicial
                << " °C) està fora de rang (-50 °C a 60 °C). S'assigna 0 °C per defecte." << endl;
            temperatura = 0.0f;
        }
    }

    float consultarTemperatura() const {
        return temperatura;
    }

    bool modificarTemperatura(float novaTemp) {
        if (novaTemp >= -50.0f && novaTemp <= 60.0f) {
            temperatura = novaTemp;
            return true;
        }
        else {
            cout << "Error: No es pot canviar a " << novaTemp
                << " °C. La temperatura ha d'estar entre -50 °C i 60 °C." << endl;
            return false;
        }
    }
};

int main() {
    Termometre t1(20.5);

    cout << "Temperatura inicial: " << t1.consultarTemperatura() << " °C" << endl;

    cout << "\nModificant la temperatura a 25.0 °C..." << endl;
    t1.modificarTemperatura(25.0);
    cout << "Nova temperatura: " << t1.consultarTemperatura() << " °C" << endl;

    cout << "\nIntentant assignar -55.0 °C..." << endl;
    t1.modificarTemperatura(-55.0);
    cout << "Temperatura actual: " << t1.consultarTemperatura() << " °C" << endl;

    cout << "\nIntentant assignar 75.0 °C..." << endl;
    t1.modificarTemperatura(75.0);
    cout << "Temperatura actual: " << t1.consultarTemperatura() << " °C" << endl;

    return 0;
}
