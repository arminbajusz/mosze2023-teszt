#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //elírás
    std::cout << '1-100 ertekek duplazasa' //aposztróf idézőjel helyett, pontosvessző hiányzik
    for (int i = 0;)	//hiányos ciklus
    {
        b[i] = i * 2; //Ez a 0-99 értékeket duplázza meg
    }
    for (int i = 0; i; i++) //hiányos ciklus
    {
        std::cout << "Ertek:" //Nem írja ki a kiszámolt értéket, pontosvessző hiányzik
    }    
    std::cout << "Atlag szamitasa: " << std::endl; // vessző pontosvessző helyett
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //pontosvessző hiányzik
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0; //Lefoglalt memóriaterület nincs felszabadítva
}
