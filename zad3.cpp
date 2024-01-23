//ZADANIE 2


#include <iostream>
#include <string>
#include <algorithm>

int main() {
    // Wczytywanie danych , prosimy o podanie 15 cyfr 0 lub 1 
    //i zapisuje je jako ciąg znaków o nazwie wejscie
    std::string wejscie;
    std::cout << "Podaj 15 cyfr (0 lub 1): ";
    std::cin >> wejscie;

    // Użyj algorytmu std::search, wzorca 11111 "it" wskazuje na znalezienie
    //wejscie end jako nieznalezienie
    auto it = std::search(wejscie.begin(), wejscie.end(), "11111");

    // drukowanie wyniku
    std::cout << (it != wejscie.end() ? "TRUE" : "FALSE") << std::endl;

    return 0;
}
//ZAD2
