#include <string>
#include <iostream>
using namespace std;

#include "Tier.cpp"//Я хз чому, але працюють тільки цпп файли
#include "Katze.cpp"
#include "Rind.cpp"
#include "Huhn.cpp"


#define MAX 100

int Tier::currentMaxNumber=0;

int main(int argc, char const *argv[])
{
    Katze *pMyCat=new Katze("Mauz01", Tier::getCurrentmaxNumber(), 120.5, 4.0);
    pMyCat-> artikulieren();
    pMyCat->fuettern(2);
    pMyCat->artikulieren();

    Rind *pMyRind=new Rind("Rinda", Tier::getCurrentmaxNumber(), 12.5, 1.0);
    pMyRind-> artikulieren();

    Huhn *pMyHuhn=new Huhn("Huha", Tier::getCurrentmaxNumber(), 55.25, 3.0);
    pMyHuhn-> artikulieren();

    Tier *pTier = pMyCat; 
    pTier->fuettern(10);
    pTier->artikulieren();

/////////////////////

    //Tier *pTier[MAX];
    //тут робиться список з 100 тваррин. Кожен забитий слот - якийсь підклас.
    //Суть в тому, що в коді ми зможемо до цього списку звератись одними і тими самим функціями, 
    //бо це віртуальні мембери, тіпа кожен клас сам знає, що робити.
    //Це круто крч
    //if(ptier[i]!=nullptr){
    //  pTier[i]->artikulieren();
    //} 
    
    //exit(0) вийти з while(), коли я в кейсі
    return 0;
}
