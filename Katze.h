#include <string>
#include <iostream>
using namespace std;
#include "Tier.h"

class Katze : public Tier
{
private:
    /* data */
public:
    Katze(string tname, int iDNr, double startgewicht, double tpreis);
    void artikulieren();
    void fuettern(double);
    int faengtMause();
    //видалення обʼєкта
    void tierLoeschen(); 
    //~Katze();
};