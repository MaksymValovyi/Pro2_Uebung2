#include <string>
#include "Tier.h"
#include <ctime>

using namespace std;

Tier::Tier(string tname, int iDNr, double tpreis, double startgewicht)
    : name(tname),idNR(iDNr+1),preis(tpreis), gewicht(startgewicht) // Initialisierungsliste 
    //він вирішує нашу проблему, і технічно краще
{
    //idNR=iDNr; Проблема, тому що зміннa у нас константа
    time_t erg = time(NULL);
    geburt = asctime(localtime(&erg));
    tierart=" ";
}


