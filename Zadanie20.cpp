


#include <iostream>
using namespace std;


int main()
{
while(true){
	string pesel;
	int sprpesel,lkontrolna;
	int wagi[] = {1,3,7,9,1,3,7,9,1,3};
	
	sprpesel = 0;
	lkontrolna = 0;
	
	while(true){
	cout << "Podaj numer PESEL: ";
	cin >> pesel;
	if(pesel.length() == 11){
		break;
	}
	else{
		cout << "PESEL NIE POPRAWNY";
	} 
	}
 for(int i = 0; i < 10;i++){
	sprpesel += (wagi[i] * (int(pesel[i]) - 48)) % 10;

 }
	
	lkontrolna = sprpesel % 10;
	
	if (lkontrolna > 0){
		lkontrolna = 10 - lkontrolna;
	}
	
	if(lkontrolna == (int(pesel[10]) - 48)){
		cout << "Podany pesel jest podany prawidlowo! " << endl;
		
	}
	else{
		cout << "Podany pesel jest zle podany " << endl; 
	}
	
}
}


	

	
 