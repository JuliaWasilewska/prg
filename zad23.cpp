#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int a,b,c,d,x,y;
int main(){
	cout << "Podaj szerokosc tablicy numer jeden: ";
	cin >> a;
	
	cout << "Podaj wysokosc tablicy numer jeden: ";
	cin >> b;
	
	cout << "Podaj szerokosc tablicy numer dwa: ";
	cin >> c;
	
	cout << "Podaj wysokosc tablicy numer dwa: ";
	cin >> d;
	
	if(a!=c or b!=d){
		
		cout << "Wykryto błąd , podaj poprawne wymiary tablic" << endl;
		return 0;
	}
	cout << " Podaj minimalna liczbe z losowanego przedzialu: ";
	cin >> x;
	cout << " Podaj maksymalna liczbe z losowanego przedzialu: ";
	cin >> y;
	int tab1[a][b];
	int tab2[a][b];
	
	srand(time(0));
	for(int i=0 ; i < a; i++){
		for(int j =0; j<b; j++){
	
		int los= (rand() % (y - x + 1)) + x;
		tab2 [i] [j] = los;
		  	}      
	}
	cout << endl << "tablica numer jeden: " << endl;
	cout << "[";
	for(int i = 0; i < a; i++){
		
		cout << "(";
		for(int j=0; j < b; j++){
			if(j==(b-1)){
				cout << tab1[i][j] << ",";
			}
		}
		if ( i==(a-1)){
			cout << ")" << endl;	
		}
	}
	cout << "]";
	cout << endl <<  " tablica numer dwa: " << endl;
	cout << " [";
	for (int i = 0; i< a; i++){
		cout << "(";
		for(int j = 0; j < b; j++){
			if(j== (b-1)){
				cout << tab2[i][j];
			}
			else{
				cout << tab2[i][j] << ",";
			}
		}
		if(i==(a-1)){
			cout << ")";
		}
		else{
		cout << ")" << endl;	
	}
}
	
	cout << "]" ;
	int tab3[a][b];
	cout << endl<<endl << " Suma podanych tablic; " << endl;
	cout << "[";
	for(int i=0; i<a; i++){
		cout << "(" ;
		for(int j=0; j<b; j++){
			if(j== (b-1)){
				cout << (tab2[i][j] + tab1[i][j]);
			}
			else{
				cout << (tab2[i][j] + tab1[i][j]) << ",";
			}
		}
		if (i==(a-1)){
			cout<<")";
		}
		else{
			cout<< ")"<< endl;
		}
	} 
	cout << "]";
	
	
	
	
	
	
	
	
	
	
	 }

