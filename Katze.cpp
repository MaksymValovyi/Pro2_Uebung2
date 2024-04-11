#include <string>
#include <iostream>

#include "Katze.h"
using namespace std;

Katze::Katze(string tname, int iDNr, double startgewicht, double tpreis)
    :Tier(tname, iDNr, tpreis, startgewicht)
{
        tierart="Katze";
}

void Katze::artikulieren()
{
    cout << "###" << endl;
    cout << "Hallo farmer" << endl;
    cout << "ich heisse: " << this->name << ", idNr" << getNumber() << " , wiege: " << this->gewicht << " kg" << endl << "Ich wurde gekauft : "<< this->geburt << endl;
    cout << "Ich bin eine " << this->tierart << endl;
    cout <<  "###" << endl;
}

void Katze::fuettern(double menge)
{
    this->gewicht += (menge*0.15);
}

int Katze::faengtMause()
{
    return 1;
}

//видалення обʼєкта
void Katze::tierLoeschen(){
    //if (this != nullptr){
    //    delete this;
    //}
    delete this;
}
