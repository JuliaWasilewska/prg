//ZADANIE 1

#include <iostream>
#include <string>
#include <sstream>

int sumaCyfr(const std::string& liczba) {
    int suma = 0;

    // Iteracja po każdej cyfrze w liczbie
    for (char cyfra : liczba) {
        // Konwersja znaku na cyfrę i dodanie do sumy
        suma += cyfra - '0';
    }

    return suma;
}

int main() {
    int liczba;
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> liczba;

    // Konwersja liczby na string
    std::ostringstream ss;
    ss << liczba;
    std::string liczbaStr = ss.str();

    // Wywołanie funkcji
    int wynik = sumaCyfr(liczbaStr);

    std::cout << "Suma cyfr podanej liczby wynosi: " << wynik << std::endl;

    return 0;
}
