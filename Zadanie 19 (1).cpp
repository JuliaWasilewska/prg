#include <iostream>
using namespace std;

int main(){
	
	int x,y,n;
	int art,lpod,wpod,niep,sniep,max,min,inmax,inmin;
	
	cout << "Podaj minimalna liczbe przedzialu z ktorego beda losowane liczby: ";
	cin >> x;
	
	cout << "Podaj maksymalny liczbe przedzialu z ktorego beda losowane liczby: ";
	cin >> y;
	
	cout << "Podaj wielkosc tabilcy: ";
	cin >> n;
	
	int tab[n];
	
	for(int i = 0 ; i < n; i++){
		int los = (rand() % (y - x + 1)) + x;
		
		tab[i] = los;
	}
	
	for(int i = 0 ; i < n; i++){
		art += tab[i];
	}
	
	art = art / n;
	cout << endl << "1. Srednia artmetyczna wynosi: " << art << endl;
	
	cout << "Podaj liczbe ktorej ilosc powtorzeni szukasz z zakresu " << x << " do " << y << " : ";
	cin >> lpod;
	
	for(int i = 0 ; i < n; i++){
		if( tab[i] == lpod){
			wpod++;
		}
	}
	
	cout << "2. Liczba wystapila " << wpod << " razy." << endl;
	
	for(int i = 0 ; i < n; i++){
		if( (tab[i] % 2) == 1){
			niep++;
			sniep += tab[i];
		}
	}
	
	cout << "3. Liczb nieparzystych bylo " << niep << " ich suma wyniosla " << sniep << endl;
	
	for(int i = 0 ; i < n; i++){
		if(tab[i] > max){
			max = tab[i];
			inmax = i;
		}
		if(tab[i] < min){
			min = tab[i];
			inmin = i;
		}
	}
	
	cout << "4. Liczba minimalna to " << min << " znajdujac sie w indexie " << inmin << endl;
	cout << "5. Liczba maksymalna to " << max << " znajdujac sie w indexie " << inmax << endl;
}