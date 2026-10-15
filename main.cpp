#include <iostream>
#include <string>


using namespace std;


int main (){

    string contraseña;
    

    cout <<"Bienvenido al validador de contraseña"<< endl;

    cout <<"Este programa evaluara la seguridad de su contraseña: "<< endl;

    cout <<"Ingrese su contraseña"; getline(cin, contraseña);

    cout << "Contraseña ingresada correctamente" << endl;

    cout << "La contraseña tiene: " << contraseña.length() << " Caracteres"<< endl;

    bool longitud= (contraseña.length() >= 8);

    bool mayuscula= false;

    bool numeros= false;

    bool caracteresesp = false;

    for ( int i = 0; i <contraseña.length()  ; i++){

        if  (contraseña[i] >= 'A' && contraseña[i] <= 'Z') {

            mayuscula  = true;
        }

        if ( contraseña[i] >= '0' && contraseña[i] <= '9'   ){

            numeros = true;
        }

        if ( contraseña[i] == '!' || contraseña[i] == '@' ||contraseña[i] == '#' || contraseña[i] == '$' ||contraseña[i] == '%' || contraseña[i] == '&' ||contraseña[i] == '*'){

            caracteresesp = true;
        }

    }

    int puntaje = longitud + mayuscula + numeros + caracteresesp;

    if (puntaje <= 2) { cout <<"La contraseña es DÉBIL"<< endl; } else if ( puntaje == 3) {

        cout <<"La contraseña es Media" << endl; } else { cout << "La contraseña es FUERTE"<< endl;}

}
