// Podstawy_Programowania.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <typeinfo>

using namespace std;

static int policzBMI()
{

    float Waga = 0.0f; // Waga
    float Wzrost = 0.0f; // Wzrost

    cout << "Podaj swoja wage w kg: ";  // Tekst wyświetlany każacy podać wartość 
    while (!(cin >> Waga) || Waga <=0) { //Zabespieczenie aby nikt nie wpisał liczby mniejszej od 0
        cout << "Niepoprawna waga. Podaj poprawna wage w kg "; // Tekst wyświetlany jeżeli waga jest niepoprawna np. wpiszemy tekst zamiast liczby
        cin.clear(); //Czyścik błędów
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    }

    // EasterEgg1 - 69
    if (Waga == 69) {
        cout << "\nNICE\n";  // Specjalny komunikat jeżeli wpiszemy w Wagę liczbę 69
    }

    cout << "Podaj swoj wzrost w metrach: "; // Tekst wyświetlany każacy podać wartość 
    while (!(cin >> Wzrost) || Wzrost <=0) { //Zabespieczenie aby nikt nie wpisał liczby mniejszej od 0
        cout << "Niepoprawny wzrost. Podaj poprawny wzrost w metrach "; // Tekst wyświetlany jeżeli wzrost jest niepoprawna np. wpiszemy tekst zamiast liczby
        cin.clear(); //Czyścik błędów
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }



    float BMI = Waga / (Wzrost * Wzrost); //Równianie do obliczenia BMI

 

    cout << "\nTwoja liczba to: " << BMI; // tekst "Twoja liczba to:" i potem liczba z obliczenia

    // Grupy BMI - Jeżeli wartośc z wyliczenia wynosi mniej od 18.5 oznacza to niedowagę itd.
    if (BMI < 18.5) {
        cout << "-Niedowaga BMI" << endl;
    }
    else if (BMI >= 18.5 && BMI < 24.9) {
        cout << "-Waga w normie BMI" << endl;
    }
    else if (BMI >= 25 && BMI < 29.9) {
        cout << "-Nadwaga BMI" << endl;
    }
    else {
        cout << "-Otyłość BMI" << endl;
    }

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
