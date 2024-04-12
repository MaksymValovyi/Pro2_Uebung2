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

void tierVerkaufen(Tier *&gewaelteTier){
    gewaelteTier->tierLoeschen();
    gewaelteTier=nullptr;
}

void tierArtikulierenFromList(Tier* tierArray[], int i = 0){
    while (tierArray[i]!=nullptr || i <= Tier::getCurrentmaxNumber()){
        if(tierArray[i]==nullptr){
            i++;
        }else if (tierArray[i] != nullptr){
            tierArray[i]->artikulieren();
            i++;
        }else{
            cout << "-----------------------------" << endl;
            cout << "Completely wrong id on ARTIKULIEREN CASE ";
            cout << "-----------------------------" << endl;
        }
    }
}

int main(int argc, char const *argv[])
{

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

                        Tier::intCurrentMaxNumber();    //increase id

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

                        Tier::intCurrentMaxNumber();    //increase id

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

                        Tier::intCurrentMaxNumber();    //increase id
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

                        tierArtikulierenFromList(pTier, 0);

                        cout << "Waehlen Sie Ihr Tier" << endl;
                        cin >> option;
                        option=option-1;
                        cout << "Wie viel kg wollen Sie geben ? " << endl;
                        cin >> gewicht; 
                        pTier[option]->fuettern(gewicht);
                        pTier[option]->artikulieren();
                        
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
                        pTier[option]->artikulieren();

                        break;
                    }
                    case 3:         //Wrong page
                    {
                        break;
                    }
                }
                break;
            }
            case 3:     //Tier verkaufen
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

                        tierArtikulierenFromList(pTier, 0);
                        
                        cout << "Waehlen Sie Ihr Tier" << endl;
                        cin >> option;
                        option=option-1;
                        if((option < 0) && (option > Tier::getCurrentmaxNumber())){
                            cout << "Wrong animals index";
                        }else{
                            tierVerkaufen(pTier[option]);
                        }
                        /*
                        How it was before.
                        pTier[option]->tierLoeschen();
                        pTier[option]=nullptr;  // no animal, only nullptr
                        */
                        break;
                    }
                    case 2:         //Direkt loeschen
                    {
                        cout << "Waehlen Sie Ihr Tier" << endl;
                        cin >> option;
                        option=option-1;
                        if((option < 0) && (option > Tier::getCurrentmaxNumber())){
                            cout << "Wrong animals index";
                        }else{
                            tierVerkaufen(pTier[option]);
                        }
                        /*
                        How it was before
                        pTier[option]->tierLoeschen();
                        pTier[option]=nullptr;  // no animal, only nullptr
                        */
                        break;
                    }
                    case 3:         //Wrong page
                    {
                        break;
                    }
                }
                break;
            }
            case 4:     //Tier artikulieren
            {
                tierArtikulierenFromList(pTier, 0);
                /*

                This is how it was, but as I use artikulieren() for whole list, i've decided to create
                a function for this

                int i = 0;
                while (pTier[i]!=nullptr || i <= Tier::getCurrentmaxNumber()){
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
                */
                break;
            }
            case 5:     //Programm beenden
            {
                int i = 0;
                while (pTier[i]!=nullptr || i < Tier::getCurrentmaxNumber()){
                    if(pTier[i] == nullptr){
                        i++;
                    }else if(pTier[i]!=nullptr){
                        tierVerkaufen(pTier[i]);
                        /*
                        pTier[i]->tierLoeschen();
                        pTier[i]=nullptr;
                        */
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