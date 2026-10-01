//Generar una classe Persona que permeti :
//•	Crear una persona indicant el seu nom i edat
//•	Mostrar totes les dades d’una persona
//•	Comprovar si és major d’edat

#include <iostream>
#include <string>

using namespace std;

class persona {
private:
	std::string nom;
	int edat;
public:
    persona(string n, int e) {
        nom = n;
        edat = e;
    }

    void mostrarDades() {
        cout << "Nom: " << nom << endl;
        cout << "Edat: " << edat << " anys" << endl;
    }

    bool esMajorDedat() {
        return edat >= 18;
    }
};


int main()
{
    string nomInput;
    int edatInput;

    cout << "Introdueix el nom: ";
    cin >> nomInput;

    cout << "Introdueix l'edat: ";
    cin >> edatInput;

    persona p1(nomInput, edatInput);

    cout << "\nRESULTAT" << endl;

    p1.mostrarDades();

    if (p1.esMajorDedat()) {
        cout << "Si es major d'edat." << endl;
    }
    else {
        cout << "No es major d'edat." << endl;
    }

    return 0;
}



