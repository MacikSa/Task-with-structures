#include <iostream>
#include < string>

using namespace std;

struct Samochod
{
    string Marka;
    string Model;
    int Rok_produkcji;
    int Moc_silnika;
};

Samochod Max_Moc(Samochod car[], int ilosc)
{
    Samochod  najmocniejszy = car[0];
    for (int i = 1; i < ilosc; i++)
    {
        if (car[i].Moc_silnika > najmocniejszy.Moc_silnika)
            najmocniejszy = car[i];
    }
    return najmocniejszy;
}

float Srednia(Samochod car[], int ilosc)
{
    int suma = 0;
    //Samochod srednia = suma;
    for (int i = 0; i < ilosc; i++)
    {
        suma += car[i].Rok_produkcji;
    }
    return (suma / ilosc);
}

int main()
{
    const int ilosc_samochodow = 3;
    Samochod car[ilosc_samochodow];


    for (int i = 0; i < ilosc_samochodow; i++)
    {
        cout << "Dane dla samochodu nr:" << i + 1 << endl;
        cout << "--------------------------" << endl;
        cout << "Wprowadz Marke:";
        cin >> car[i].Marka;
        cout << "Wprowadz Model:";
        cin >> car[i].Model;
        cout << "Wprowadz rok produkcji:";
        cin >> car[i].Rok_produkcji;
        cout << "Wprowadz moc silnika:";
        cin >> car[i].Moc_silnika;
    }
    Samochod najmocniejszy = Max_Moc(car, ilosc_samochodow);

    cout << "Najmocniejszy samochod to: " << najmocniejszy.Marka << "\n" << najmocniejszy.Model << "\n" << najmocniejszy.Rok_produkcji << "\n" << najmocniejszy.Moc_silnika << endl;
    float srednia = 0;
    srednia = Srednia(car, ilosc_samochodow);
    cout << "Srednia = " << srednia;
}