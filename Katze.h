#include <string>
#include <iostream>
using namespace std;
#include "Tier.h"

class Katze : public Tier
{
private:
    int mauseGegessen = 4;
public:
    Katze(string tname, int iDNr, double startgewicht, double tpreis);
    void artikulieren();
    void fuettern(double);
    int faengtMause(); 
    void faengenEffizienz();    // how many mouses can a cat catch
    //видалення обʼєкта
    void tierLoeschen(); 
};