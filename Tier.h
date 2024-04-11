#include <string>
#include <iostream>

using namespace std;

#ifndef __MYHEADER_H__
#define __MYHEADER_H__

class Tier
{
private:
    const int idNR;
    static int currentMaxNumber;

public:
    //Tier();
    Tier(string tname, int iDNr, double tpreis, double startgewicht);

    double preis;
    string geburt;
    double gewicht;
    string name;
    string tierart;

    int getNumber(){
        return idNR;
    }
    //маленькі функціїї, які часто викликаються набагато краще ініціалізовувати в .х файлі !!!!
    static int getCurrentmaxNumber()
    {
        return currentMaxNumber;
    }

    static void intCurrentMaxNumber()
    {
        currentMaxNumber++;
    }


    //загуглити це абстрактне
    //цей мембер матимуть усі кіндери, але кожен кіндер повинен це самостійно ініціалізувати
    virtual void artikulieren() = 0;            //тварина говорить
    virtual void fuettern(double menge) = 0;    //кормити тварину
    virtual void tierLoeschen() = 0;            //видалення обʼєкта
};

#endif // __MYHEADER_H__