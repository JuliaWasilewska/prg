
//ZADANIE 3
#include <iostream>

int sumaCyfr(int liczba) {
    //  zakończenie rekurencji
    if (liczba == 0) {
        return 0;
    } else {
        // Wywołanie  dodaje ostatnia cyfre i przejazuje reszte ,
        return liczba % 10 + sumaCyfr(liczba / 10);
    }
}

int main() {
    int liczba;
    std::cout << "Podaj liczbe calkowita: ";
    std::cin >> liczba;

    // Wywołanie funkcji 
    int wynik = sumaCyfr(liczba);

    std::cout << "Suma cyfr podanej liczby wynosi: " << wynik << std::endl;

    return 0;
}
