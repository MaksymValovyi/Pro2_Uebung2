#include <string>
#include <iostream>
using namespace std;
#include "Tier.h"

class Rind : public Tier
{
private:
    int literProTag = 1;
public:
    Rind(string tname, int iDNr, double startgewicht, double tpreis);
    void artikulieren();
    void fuettern(double);
    void milchGebenEffizienz();
    //видалення обʼєкта
    void tierLoeschen();
};