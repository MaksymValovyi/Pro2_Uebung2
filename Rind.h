#include <string>
#include <iostream>
using namespace std;
#include "Tier.h"

class Rind : public Tier
{
private:
    /* data */
public:
    Rind(string tname, int iDNr, double startgewicht, double tpreis);
    void artikulieren();
    void fuettern(double);
    //видалення обʼєкта
    void tierLoeschen();
};