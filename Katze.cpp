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
    cout << "ich heisse: " << this->name << ", idNr" << getNumber() << " , wiege: " <<endl << this->gewicht << " kg und wurde gekauft : "<< this->geburt << endl;
    cout << "Ich bin eine " << this->tierart << endl;
    cout <<  "###" << endl;
}
