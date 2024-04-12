#include <string>
#include <iostream>

#include "Rind.h"
using namespace std;

Rind::Rind(string tname, int iDNr, double startgewicht, double tpreis)
    :Tier(tname, iDNr, tpreis, startgewicht)
{
        tierart="Rind";
        milchGebenEffizienz();
}

void Rind::artikulieren()
{
    cout << "###" << endl;
    cout << "Hallo farmer" << endl;
    cout << "Ich heisse: " << this->name << ", idNr = " << getNumber() << " , wiege: "<< this->gewicht << " kg" << endl << "Ich wurde gekauft : "<< this->geburt << endl;
    cout << "Als " << this->tierart << " kann ich " << literProTag << " Liter Milch geben" << endl;
    cout <<  "###" << endl;
}

void Rind::fuettern(double menge)
{
    this->gewicht += (menge*0.05);
    milchGebenEffizienz();
}

//видалення обʼєкта
void Rind::tierLoeschen(){
    //if (this != nullptr){
    //    delete this;
    //}
    delete this;
}

void Rind::milchGebenEffizienz(){
    if(this->gewicht <= 10 && this->gewicht >0){
        literProTag = 1;
    }else if (this->gewicht > 10){
        literProTag = this->gewicht / 10;
    }else{
        literProTag = 0;
    }

}