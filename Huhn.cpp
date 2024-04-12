#include <string>
#include <iostream>

#include "Huhn.h"
using namespace std;

Huhn::Huhn(string tname, int iDNr, double startgewicht, double tpreis)
    :Tier(tname, iDNr, tpreis, startgewicht)
{
        tierart="Huhn";
        eggsEffizienz();
}

void Huhn::artikulieren()
{
    cout << endl << "###" << endl;
    cout << "Hallo farmer" << endl;
    cout << "Ich heisse: " << this->name << ", idNr = " << getNumber() << " , wiege: " << this->gewicht << " kg";
    cout << "Ich wurde gekauft : "<< this->geburt << endl;
    cout << "Als " << this->tierart << " kann ich "<< amountEggs << " Eier legen "<<endl;
    cout <<  "###" << endl << endl;
}

void Huhn::fuettern(double menge)
{
    this->gewicht += (menge*0.25);
    eggsEffizienz();
}

//видалення обʼєкта
void Huhn::tierLoeschen(){
    //if (this != nullptr){
    //    delete this;
    //}
    delete this;
}

void Huhn::eggsEffizienz(){
    if(this->gewicht < 3 && this->gewicht >0){
        amountEggs = 0;
    }else if(this->gewicht >= 3){
        amountEggs = this->gewicht / 3;
    }else{
        amountEggs = 0;
    }
}
