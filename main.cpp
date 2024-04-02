#include <string>
#include <iostream>
using namespace std;

#include "Tier.h"

#include "Katze.h"
/*
    #include <Rind.h>
    #include <Huhn.h>
*/

int Tier::currentMaxNumber=0;

int main(int argc, char const *argv[])
{
    Katze *pMyCat=new Katze("Mauz01", Tier::getCurrentmaxNumber(), 120.5, 4.0);
    pMyCat-> artikulieren();

    Tier *pTier = pMyCat; 
    pTier->artikulieren();
    //= new Tier("Mauz01", Tier::getCurrentmaxNumber(), 120.5, 4.0);
    
    //Tiere *pTiier = new Tier()
    /* code */
    return 0;
}
