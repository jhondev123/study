#include <iostream>

using namespace std;

int main()
{
    int vetor[100];
int x, n, maior, quantidade;
cout << " quantos numeros quer ler" << endl;
cin >> n; // pede ao usu�rio pra digitar a quantidade de n�meros

for (x=0; x < n; x++) {
  cin >> vetor[x]; // guarda os n�meros no vetor
}

maior = vetor[0];

for (x=0; x < n; x++) {
    if (vetor[x] > maior) maior = vetor[x]; // pega o maior numero do vetor
}

quantidade = 0;

for (x=0; x < n; x++) {
    if (vetor[x] == maior) quantidade++;
}
cout <<" o maior e  " << maior << endl;
cout << "a quantidade de vezes lido e " << quantidade << endl;
    return 0;
}
