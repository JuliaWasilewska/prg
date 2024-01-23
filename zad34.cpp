#include <iostream>
#include <cstdlib>
using namespace std;
void dec_to_n(int x, int n){
int potega = 0;
int liczba_potega = n;
int aktualna_pozycja = 0;

while(true){
	if(liczba_potega < x){
		potega++;
		liczba_potega *= n;
	}

	else{
		potega--;
		liczba_potega /= n;
		break;
	}
}
while(true){
	aktualna_pozycja = 0;
	while(liczba_potega <= x){
		x -= liczba_potega;
		aktualna_pozycja++;
	}




	cout << aktualna_pozycja;
	liczba_potega /= n;
	potega -= 1;
	if(x == 0 and potega ==0){

	break;
    }

}
}
int main(){
    int x,n;
    cout << "Podaj liczbe: ";
    cin >> x;
    cout << "Podaj system lczbowy (z przedzialu); ";
    cin >> n;

    dec_to_n(x,n);


}
