#include <string>
#include <iostream>
using namespace std;
#include "Tier.h"

class Huhn : public Tier
{
private:
    int amountEggs;
public:
    Huhn(string tname, int iDNr, double startgewicht, double tpreis);
    void artikulieren();
    void fuettern(double);
    void eggsEffizienz();
    //видалення обʼєкта
    void tierLoeschen();
};