#include <string>
#include <iostream>

#include "Katze.h"
using namespace std;

Katze::Katze(string tname, int iDNr, double startgewicht, double tpreis)
    :Tier(tname, iDNr, tpreis, startgewicht)
{
        tierart="Katze";
        this->faengenEffizienz();
}

void Katze::artikulieren()
{
    cout << "###" << endl;
    cout << "Hallo farmer" << endl;
    cout << "ich heisse: " << this->name << ", idNr = " << getNumber() << " , wiege: " << this->gewicht << " kg" << endl << "Ich wurde gekauft : "<< this->geburt << endl;
    cout << "Als " << this->tierart << " kann ich pro Tag - " << mauseGegessen << " Mause fangen" << endl;
    cout <<  "###" << endl;
}

void Katze::fuettern(double menge)
{
    this->gewicht += (menge*0.15);

    this->faengenEffizienz();
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

void Katze::faengenEffizienz(){
    if(this->gewicht >= 3 && this->gewicht <= 4.5){
        //mauseGegessen = 4;
        mauseGegessen = 4;
    }else if(this->gewicht > 4.5){
        double diff = 0;
        double howLess = 0;

        diff = this->gewicht - 4;
        howLess = diff * 0.25;
        mauseGegessen =  4 - (mauseGegessen * howLess);
    }else{
        mauseGegessen = 0;
    }
}
