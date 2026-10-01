//Generar una classe Llum perquè permeti :
//•	Crear una llum apagada.
//•.Encendre - la.
//•	Apagar - la.
//•	Consultar si està encesa.

#include <iostream>

using namespace std;

class Llum {
private:
    bool encesa; 

public:
    Llum() {
        encesa = false;
    }

    void encendre() {
        encesa = true;
    }

    void apagar() {
        encesa = false;
    }

    bool estaEncesa() {
        return encesa;
    }
};

int main() {
    Llum laMevaLlum;

    if (laMevaLlum.estaEncesa()) {
        cout << "La llum està encesa." << endl;
    }
    else {
        cout << "La llum està apagada." << endl;
    }

    laMevaLlum.encendre();
    cout << "Encenent la llum..." << endl;
    cout << "Està encesa ara? " << (laMevaLlum.estaEncesa() ? "Sí" : "No") << endl;

    laMevaLlum.apagar();
    cout << "Apagant la llum..." << endl;
    cout << "Està encesa ara? " << (laMevaLlum.estaEncesa() ? "Sí" : "No") << endl;

    return 0;
}