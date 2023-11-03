#include <iostream>
#include <iomanip>
using namespace std;

// écrire la fonction somme_modulo_mille_milliards
// qui retourne la somme de ses deux paramètres modulo
// 1'000'000'000'000
//
long double(somme_modulo_mille_milliards)(long long a, long long b) {
   cout << fixed << setprecision(0);
   return (a + b) % 1'000'000'000'000;
}

int main() {
   cout << somme_modulo_mille_milliards(2,-3) << endl;
   // affiche -1

   cout << somme_modulo_mille_milliards(12'523'432'987'012, 987'654'321'999) << endl;
   // affiche 511087309011
}