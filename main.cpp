#include <string>
#include <iostream>
#include <ctime>
using namespace std;

#include "Tier.cpp"//Я хз чому, але працюють тільки цпп файли
#include "Katze.cpp"
#include "Rind.cpp"
#include "Huhn.cpp"


#define MAX 100

int Tier::currentMaxNumber=0;

int main(int argc, char const *argv[])
{

    /*
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

    cout << "-----------------" << endl;
    pTier->tierLoeschen();
    //pTier->artikulieren();
    pMyCat->artikulieren();
    */

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
   
   //Inizialisierung der Liste der Tiere
    Tier *pTier[MAX];
    for(int i = 0 ; i <= MAX; i++){
        pTier[i]=nullptr;
    }

    //noetige Variablen um zu waehlen
    int option = 0, tierArt = 0;
    int preis = 0; // price for an animal
    double gewicht = 0;
    string name;

    while (1==1){
        cout << "Was moechten Sie tun ?" << endl;
        cout << "1. Tier einkaufen" << endl;
        cout << "2. Tier fuettern" << endl;
        cout << "3. Tier verkaufen" << endl;
        cout << "4. Tier artikulieren" << endl;
        cout << "5. Programm beenden" << endl;
        cin >> option;
        switch (option)
        {
            case 1:
            {
                //Tier einkaufen
                cout << "Welches Tier moechten Sie ? " << endl;
                cout << "1. Katze" << endl;
                cout << "2. Rind" << endl;
                cout << "3. Huhn" << endl;
                cin >> tierArt;
                switch (tierArt){
                    case 1:
                    {
                        cout << "Waehlen Sie Name fuer Ihre Katze " << endl;
                        cin >> name;
                        cout << "Wie viel zahlen Sie ? " << endl;
                        cin >> preis;
                        cout << "Gewicht der Katze " << endl;
                        cin >> gewicht; 

                        //create Katze
                        pTier[Tier::getCurrentmaxNumber()] = new Katze(name , Tier::getCurrentmaxNumber(), gewicht, preis);
                        pTier[Tier::getCurrentmaxNumber()]->artikulieren(); //show yourself
                        Tier::intCurrentMaxNumber();    //increase id

                        break;
                    }
                    case 2:
                    {
                        break;
                    }
                    case 3:
                    {
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                break;
            }
            case 3:
            {
                break;
            }
            case 4:
            {
                int i = 0;
                while (pTier[i]!=nullptr){
                    pTier[i]->artikulieren();
                    i++;
                }
                break;
            }
            case 5:
            {
                int i = 0;
                while (pTier[i]!=nullptr){
                    pTier[i]->tierLoeschen();
                    i++;
                }
                exit(0);
                break;
            }
        }
    }
    return 0;
}
