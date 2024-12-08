// Podstawy_Programowania.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <typeinfo>

#include <fstream> // Dodane aby obsługiwać pliki
#include <string>

using namespace std;

static string policzBMI(double WagaBMI,double WzrostBMI)
{
    string message; // Wiadomosc zwrotna dla uzytkownika

    float BMI = WagaBMI / (WzrostBMI * WzrostBMI); //Równianie do obliczenia BMI

    message = "\nTwoje BMI wynosi: " + to_string(BMI); // tekst "Twoje BMI wynosi:" i potem liczba z obliczenia powyżej

    // Grupy BMI - Jeżeli wartośc z wyliczenia wynosi mniej od 18.5 oznacza to niedowagę itd.
    if (BMI < 18.5) {
        message += " ---> Niedowaga wedlug BMI \n";
    }else if (BMI == 22) {
        message += " ---> Idealne BMI! Wyglada na to, ze jestes w idealnej formie! \n"; // EasterEgg2 - 22 Jeżeli wynik obliczenia BMI wyjdzie równo 22 otrzymujemy specjalnego prompta (np.Waga=88kg Wzrost=2m)
    }else if (BMI >= 18.5 && BMI < 24.9) {
        message += " ---> Waga w normie BMI \n";  
    }else if (BMI >= 25 && BMI < 29.9) {
            message += " ---> Nadwaga wedlug BMI \n";
    }else if (BMI == 42) { // EasterEgg3 - 42 Jeżeli wynik obliczenia BMI wyjdzie równo 42 otrzymujemy specjalnego prompta (np.Waga=168kg Wzrost=2m)
            message += " ---> odpowiedz na wszystko Gratulacje!!! Przy okazji powazna Otylosc wedlug BMI \n";
    }else if (BMI > 29.9) {
            message += " ---> Otylosc wedlug BMI \n";
    }

    
    return message;

}

int main() {

    double Waga = 0.0; // deklaracja-Waga jest wartością liczbową przecinkową 
    double Wzrost = 0.0; // deklaracja-Wzrost jest wartością liczbową przecinkową
    ifstream plikIfStream;
    plikIfStream.open("test.txt");

    if (!plikIfStream) {  // 
        ofstream plikOfStream;
        plikOfStream.open("test.txt");
        plikOfStream.close();
        cout << "Plik nie istnieje" << endl; 
    }
    else {
        string linia;
        cout << "Przy ostatnim uruchomieniu programu dane wynosily: ";
        while (getline(plikIfStream, linia)) {
            cout << linia << endl; // nie zadziała
        }
    }

    cout << "Podaj swoja wage w kg: ";  // Tekst wyświetlany każacy podać wartość 
    while (!(cin >> Waga) || Waga <= 0) { //Zabespieczenie aby nikt nie wpisał liczby mniejszej od 0
        cout << "Niepoprawna waga. Podaj poprawna wage w kg "; // Tekst wyświetlany jeżeli waga jest niepoprawna np. wpiszemy tekst zamiast liczby
        cin.clear(); //Czyścik błędów
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 
    }

    // EasterEgg1 - 69
    if (Waga == 69) {
        cout << "\nNICE\n";  // Specjalny komunikat jeżeli wpiszemy w Wagę liczbę 69
    }

    cout << "Podaj swoj wzrost w metrach: "; // Tekst wyświetlany każacy podać wartość 
    while (!(cin >> Wzrost) || Wzrost <= 0) { //Zabespieczenie aby nikt nie wpisał liczby mniejszej od 0
        cout << "Niepoprawny wzrost. Podaj poprawny wzrost w metrach "; // Tekst wyświetlany jeżeli wzrost jest niepoprawna np. wpiszemy tekst zamiast liczby
        cin.clear(); //Czyścik błędów
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    string return_msg = policzBMI(Waga,Wzrost);

    ofstream file3("test.txt");

    cout << return_msg;
    file3 << return_msg;

    file3.close();
    system("pause");
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
