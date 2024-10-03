#include <iostream>
using namespace std;

int main() 
{
    float costo, risparmi, mancante, i, fgb;

    cout << "Quanto costa la moto?" << endl;

    cin >> costo;

    cout << "Quanti sono i risparmi?" << endl;

    cin >> risparmi;

    i = 0;

    while(costo>risparmi)
    {
        cout << "Quanti soldi inserirai oggi?" << endl;

        cin >> fgb;

        risparmi = risparmi+fgb;

        mancante = costo-risparmi;

        if(risparmi>costo)
        {
            cout << "Mancano " << mancante << "€." << endl;
        }
        else
        {

        }
        i =i+1;
    }
    cout << "Sono stati effettuati " << i << " risparmi." << endl;

    cout << "Sono stati accumulati " << risparmi << "€." << endl;

    cout << "Sono rimasti " << -1*mancante << "€." << endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
