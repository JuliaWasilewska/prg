#include<iostream>
using namespace std;

int fib[1000] = {0,1};
int liczba,x;
int main(){
   while(true){
	cout << "Podaj liczbe ktora ma byc liczona do ciagu: ";
	cin >> liczba;        x = 1;
	
	
	fib[0]=1;
    fib[1]=1;
     cout << endl << fib [0] << "," << fib[x];
     
     
	while(true){
     	fib[x+1] = fib[x] + fib[x-1];
     	if(fib[x+1] > liczba){
     	
     	break;
	 }
 
	cout << ", " << fib[x+1];
	x++;
    }
  
  
  cout << endl << endl;

}
}