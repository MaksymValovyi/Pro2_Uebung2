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
    for(int i = 0 ; i < MAX; i++){
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
            case 1:     //Tier einkaufen
            {
                
                cout << "Welches Tier moechten Sie ? " << endl;
                cout << "1. Katze" << endl;
                cout << "2. Rind" << endl;
                cout << "3. Huhn" << endl;
                cin >> tierArt;
                switch (tierArt){
                    case 1:     // Katze
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

                        break;
                    }
                    case 2:     // Rind
                    {
                        cout << "Waehlen Sie Name fuer Ihr Rind " << endl;
                        cin >> name;
                        cout << "Wie viel zahlen Sie ? " << endl;
                        cin >> preis;
                        cout << "Gewicht von Rind " << endl;
                        cin >> gewicht; 

                        //create Rind
                        pTier[Tier::getCurrentmaxNumber()] = new Rind(name , Tier::getCurrentmaxNumber(), gewicht, preis);
                        pTier[Tier::getCurrentmaxNumber()]->artikulieren(); //show yourself                    

                        break;
                    }
                    case 3:     //Huhn
                    {
                        cout << "Waehlen Sie Name fuer Ihr Huhn " << endl;
                        cin >> name;
                        cout << "Wie viel zahlen Sie ? " << endl;
                        cin >> preis;
                        cout << "Gewicht von Huhn " << endl;
                        cin >> gewicht; 

                        //create Huhn
                        pTier[Tier::getCurrentmaxNumber()] = new Huhn(name , Tier::getCurrentmaxNumber(), gewicht, preis);
                        pTier[Tier::getCurrentmaxNumber()]->artikulieren(); //show yourself

                        break;
                    }
                    Tier::intCurrentMaxNumber();    //increase id
                }
                break;
            }
            case 2:     //Tier fuettern
            {
                cout << "Was wollen Sie machen ? " << endl;
                cout << "1. Liste von Tieren bekommen und eine von den fuettern" << endl;
                cout << "2. ID schreiben und fuettern" << endl;
                cout << "3. Page zurueck" << endl;
                cin >> option;
                switch (option)     //Choice for Fuettern
                {
                    case 1:         //Liste + fuettern
                    {
                        //while for Liste
                        int i = 0;
                        while (pTier[i]!=nullptr){
                            pTier[i]->artikulieren();
                            i++;
                        }

                        cout << "Waehlen Sie Ihr Tier" << endl;
                        cin >> option;
                        option=option-1;
                        cout << "Wie viel kg wollen Sie geben ? " << endl;
                        cin >> gewicht; 
                        pTier[option]->fuettern(gewicht);
                        
                        break;
                    }
                    case 2:         //Direkt fuettern
                    {
                        cout << "Waehlen Sie Ihr Tier" << endl;
                        cin >> option;
                        option=option-1;
                        cout << "Wie viel kg wollen Sie geben ? " << endl;
                        cin >> gewicht; 
                        pTier[option]->fuettern(gewicht);

                        break;
                    }
                    case 3:         //Wrong page
                    {
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                cout << "Was wollen Sie machen ? " << endl;
                cout << "1. Liste von Tieren bekommen und eine von den loeschen" << endl;
                cout << "2. ID schreiben und loeschen" << endl;
                cout << "3. Page zurueck" << endl;
                cin >> option;
                switch (option)     //Choice for Loeschen
                {
                    case 1:         //Liste + Loeschen
                    {
                        //while for Liste
                        int i = 0;
                        while (pTier[i]!=nullptr){
                            pTier[i]->artikulieren();
                            i++;
                        }

                        cout << "Waehlen Sie Ihr Tier" << endl;
                        cin >> option;
                        option=option-1;
                        pTier[option]->tierLoeschen();
                        pTier[option]=nullptr;  // no animal, only nullptr

                        break;
                    }
                    case 2:         //Direkt loeschen
                    {
                        cout << "Waehlen Sie Ihr Tier" << endl;
                        cin >> option;
                        option=option-1;
                        pTier[option]->tierLoeschen();
                        pTier[option]=nullptr;  // no animal, only nullptr

                        break;
                    }
                    case 3:         //Wrong page
                    {
                        break;
                    }
                }
                break;
            }
            case 4:
            {
                int i = 0;
                while (pTier[i]!=nullptr && i < Tier::getCurrentmaxNumber()){
                    if(pTier[i]==nullptr){
                        i++;
                    }else if (pTier[i] != nullptr){
                        pTier[i]->artikulieren();
                        i++;
                    }else{
                        cout << "-----------------------------" << endl;
                        cout << "Completely wrong id on ARTIKULIEREN CASE ";
                        cout << "-----------------------------" << endl;
                    }
                }
                cout  << " I CASE 4 = " << i << endl; 
                break;
            }
            case 5:
            {
                int i = 0;
                while (pTier[i]!=nullptr && i < Tier::getCurrentmaxNumber()){
                    if(pTier[i] == nullptr){
                        i++;
                    }else if(pTier[i]!=nullptr){
                        pTier[i]->tierLoeschen();
                        pTier[i]=nullptr;
                        i++;
                    }else{
                        cout << "-----------------------------" << endl;
                        cout << "Completely wrong id on DELETE CASE";
                        cout << "-----------------------------" << endl;
                    }
                    
                }
                exit(0);
                break;
            }
        }
    }
    return 0;
}
