#include <string>
#include <iostream>

#include "Huhn.h"
using namespace std;

Huhn::Huhn(string tname, int iDNr, double startgewicht, double tpreis)
    :Tier(tname, iDNr, tpreis, startgewicht)
{
        tierart="Huhn";
}

void Huhn::artikulieren()
{
    cout << "###" << endl;
    cout << "Hallo farmer" << endl;
    cout << "ich heisse: " << this->name << ", idNr" << getNumber() << " , wiege: " <<endl << this->gewicht << " kg und wurde gekauft : "<< this->geburt << endl;
    cout << "Ich bin eine " << this->tierart << endl;
    cout <<  "###" << endl;
}

void Huhn::fuettern(double menge)
{
    this->gewicht += (menge*0.25);
}

//видалення обʼєкта
void Huhn::tierLoeschen(){
    //if (this != nullptr){
    //    delete this;
    //}
    delete this;
}
