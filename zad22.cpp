#include <iostream>
using namespace std;


int x,y,n,zmiany;
int main(){
	
	
	cout << "Podaj minimalna liczbe przedzialu:  ";
	cin >> x;
	
	cout << "Podaj maksymalna liczbe przedzialu: ";
	cin >> y;
	
	cout << "Podaj wielkosc tablicy: ";
	cin >> n; 
	
	int tab[n];
	
	for(int i=0;i<n;i++){
		int los = (rand()%(y - x + 1)) + x;
		
		tab[i] = los;
		
	}
	
	zmiany=1;
	while(zmiany>0){
		zmiany =0;
		for(int i= 1;i<n;i++){
		
		if(tab[i-1]>tab[i])
		swap(tab[i-1], tab[i]);
	    }
	    for(int i=0;i<n;i++)
          cout<<tab[i]<<", ";

  return 0;
	    
	}
	
	
	
}