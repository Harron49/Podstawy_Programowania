﻿// Podstawy_Programowania.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <typeinfo>

using namespace std;

static int policzBMI()
{

    float Waga = 0.0f;
    float Wzrost = 0.0f;

    cout << "Podaj swoja wage: ";
    while (!(cin >> Waga)) {
        cout << "Niepoprawna waga. Podaj poprawna wage ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "Podaj swoja wzrost: ";
    while (!(cin >> Wzrost)) {
        cout << "Niepoprawny wzrost. Podaj poprawny wzrost ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    //cin >> Wzrost;
    

    float BMI = Waga / (Wzrost*Wzrost);


  //  while (Waga !=) 

    cout << "\nTwoja liczba to: " << BMI;
    system("pause");
    return Waga;


}

int main()
{
    std::cout << "Hej Mała!\n";

    int pierwszaLiczba = 1;
    int dwadzieściatrzy = 23;

    std::cout << "My Number: " << pierwszaLiczba << ", " << dwadzieściatrzy <<"\n";

    if (pierwszaLiczba <= dwadzieściatrzy) {
        std::cout << "Jest: 1<23" << "\n";
        for (int i = 1; i <= 22; i++) {
            pierwszaLiczba = pierwszaLiczba +1*20;
            std::cout << "Liczba: " << pierwszaLiczba <<"\n";
        }
    } else {
        std::cout << "pierwszaLiczba jest większy od dwudziestutrzech" << std::endl;
    }
    
    if (pierwszaLiczba <= dwadzieściatrzy) {
        std::cout << "Jest: 1<23" << "\n";
       
        std::cout << "Liczba: " << pierwszaLiczba << "\n";
        
    } else {
        std::cout << "pierwszaLiczba jest większy od dwudziestutrzech" << std::endl;
        std::cout << "Liczba: " << pierwszaLiczba << "\n";
    }

    policzBMI();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
