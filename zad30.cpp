#include <iostream>
#include <cstdlib>
#include <time.h>
#include <conio.h>
using namespace std;
void czy_dane(int A[], int&n,int &a,int &b){
    srand(time(nullptr));
    for(int i=0;i<n;i++){A[i] = rand() % (b-a) + a;}}
void pisz_tab(int A[], int&n){
    for(int i=0;i<n;i++){ cout<<A[i]<<endl;}}
int min (int A[], int&n){int minimalny = A[0]; int indeks_min = 0;
    for(int i = 0; i < n; i++)
    {
        if(A[i] < minimalny) {
            minimalny = A[i];
            indeks_min = i;}}
    cout << "Liczba minimalna: " << minimalny << ", a jej indeks to: " << indeks_min << endl;}
int max (int A[], int&n){   int maksymalny = A[0]; int indeks_maks = 0;
    for(int i = 0; i < n; i++)
    {
        if(A[i] > maksymalny) {
            maksymalny = A[i];
            indeks_maks = i;}}
    cout << "Liczba maksymalna: " << maksymalny << ", a jej indeks to: " << indeks_maks << endl;}
int ile (int A[], int&n){cout << "Prosze podac element do wyszukiwania : ";
    int interes_elem; cin >> interes_elem;
    int ilosc = 0;
    for(int i = 0; i < n; i++)
    {
        if(A[i] == interes_elem) {
            ilosc++;
        }
    }
    cout << "Liczba wystapien interesujacej liczby: " << ilosc << endl;}
float srednia(int A[], int&n){int suma = 0;
    for(int i = 0; i < n; i++)
    {
        suma += A[i];
    }
    float odpowiedz1 = suma / n;
    cout << "srednia arytmetyczna elementow tablicy: " << odpowiedz1 << endl;}
int nieparzyste(int A[], int&n){int ilosc_nieparz = 0; int suma_nieparz = 0;
    for(int i = 0; i < n; i++)
    {
        if(A[i] % 2==1) {
            suma_nieparz += A[i];
            ilosc_nieparz++;}}
    cout << "Ilosc znalezionych nieparzystych: " << ilosc_nieparz
         << ", a ich suma: " << suma_nieparz << endl;}
int najczestsze(int A[], int&n){
    int sprawdzany;int maksymalny;int ilosc;int czest=0;
    for(int i =0;i<n;i++){
        sprawdzany=A[i];
        czest=0;
        for(int j=0;j<n;j++){
            if(A[j]==sprawdzany){czest++;}
        }
        if(czest>maksymalny){
            ilosc=czest;
            maksymalny=sprawdzany;
        }
    }
    return maksymalny;
}
void kopiowanie(int A[],int B[], int&n){
    for(int i = 0; i < n; i++){
        B[i]=A[i];
    }
}
void przestawienie(int A[], int&n){
    for(int i=n;i>n;i--){ cout<<A[i]<<endl;}}
void sasiednie(int A[], int&n){
    int max_para= A[0]+A[1];
    int ind1=1;
    int ind2=2;
    for (int i=0;i<n-1;i++){
        if(A[i]+A[i+1]>max_para){
            int max_para= A[i]+A[i+1];
            ind1=i+1;
            ind2=i+2;
        }
    }
    cout<<"wartosc maksymalna dwoch sasienidch elementów jest rowna"<<max_para<<endl;
    cout<<"Ich indeksy to"<<ind1<<"i"<<ind2<<endl;

}
int main() {
    int a;int b; int A[100];int n; int * C = A; int B[100];int * D = B;
    while (true) {
        cout << "Podaj rozmiar tablicy:";
        cin >> n;
        if (n> 0 && n <= 100)
            break;
        else
            cout << "WprowadŸ liczbe z zakresu 0 do 100!" << endl;
    }
    cout << "Podaj dolny limit liczb losowych:";
    cin >> a;
    cout << "Podaj gorny zakres liczb losowych:";
    cin >> b;
    czy_dane(C,n,a,b);
    pisz_tab(C,n);
    min(C,n);
    max(C,n);
    ile(C,n);
    srednia(C,n);
    nieparzyste(C,n);
    najczestsze(C,n);
    kopiowanie(C,D,n);
    przestawienie(C,n);
    sasiednie(C,n);
}
