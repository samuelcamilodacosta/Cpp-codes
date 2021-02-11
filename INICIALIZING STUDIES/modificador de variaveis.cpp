#include <bits/stdc++.h>
//Modificador de tamanho da variável e verificação de uso na memória

using namespace std;
int main(){
	setlocale(LC_ALL,"");
    int A = 0;
    short int B = 0;
    long int C = 0;
    signed int D = 0;
    unsigned int E = 0;
    short signed int F = 0;
    long signed int G = 0;
    short unsigned int H = 0;
    long unsigned int I = 0;
    double J = 0;
    long double K = 0;
	cout << "Um int ocupa " << sizeof(A) << " Bytes.\n";
    cout << "Um short int ocupa " << sizeof(B) << " Bytes.\n";
   	cout << "Um long int ocupa " << sizeof(C) << " Bytes.\n";
    cout << "Um signed int ocupa " << sizeof(D) << " Bytes.\n";
    cout << "Um unsigned int ocupa " << sizeof(E) << " Bytes.\n";
    cout << "Um short signed int ocupa " << sizeof(F) << " Bytes.\n";
    cout << "Um long signed int ocupa " << sizeof(G) << " Bytes.\n";
    cout << "Um short unsigned int ocupa " << sizeof(H) << " Bytes.\n";
    cout << "Um long unsigned int ocupa " << sizeof(I) << " Bytes.\n";
    cout << "Um double ocupa " << sizeof(J) << " Bytes.\n";
    cout << "Um long double ocupa " << sizeof(K) << " Bytes.\n";
	cout << "\n";
    return 0;
}
