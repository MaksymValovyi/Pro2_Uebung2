#include <string>
#include <iostream>

#include "Rind.h"
using namespace std;

Rind::Rind(string tname, int iDNr, double startgewicht, double tpreis)
    :Tier(tname, iDNr, tpreis, startgewicht)
{
        tierart="Rind";
}

void Rind::artikulieren()
{
    cout << "###" << endl;
    cout << "Hallo farmer" << endl;
    cout << "ich heisse: " << this->name << ", idNr" << getNumber() << " , wiege: " <<endl << this->gewicht << " kg und wurde gekauft : "<< this->geburt << endl;
    cout << "Ich bin eine " << this->tierart << endl;
    cout <<  "###" << endl;
}

void Rind::fuettern(double menge)
{
    this->gewicht += (menge*0.05);
}

//видалення обʼєкта
void Rind::tierLoeschen(){
    //if (this != nullptr){
    //    delete this;
    //}
    delete this;
}
