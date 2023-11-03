#include <iostream>

using namespace std;

// ecrire la fonction en_base(n,b) qui retourne sous forme
// de std::string la représentation en base b de l'entier n.
// Cette fonction doit fonctionner pour n positif ou nul et
// pour b entre 2 et 36. Les chiffres de 10 à 35 utilisent
// les lettres majuscules de A à Z.
string en_base(unsigned n, unsigned b) {
   string result = "";
   if(n == 0)
      return "0";

   while (n > 0) {
      int digit = n % b;
      if (digit < 10) {
         result = to_string(digit) + result;
      } else {
         result = char('A' + digit - 10) + result; // Représentation en hexadécimal
      }
      n /= b;
   }
   return result;
}

int main() {
  for(int b = 2; b <= 36; ++b)
  {
     cout << 42 << " en base " << b << " = " << en_base(42,b) << endl;
  }
   cout << 0 << " en base " << 7 << " = " << en_base(0,7) << endl;
}

// Le programme doit afficher
//42 en base 2 = 101010
//42 en base 3 = 1120
//42 en base 4 = 222
//42 en base 5 = 132
//42 en base 6 = 110
//42 en base 7 = 60
//42 en base 8 = 52
//42 en base 9 = 46
//42 en base 10 = 42
//42 en base 11 = 39
//42 en base 12 = 36
//42 en base 13 = 33
//42 en base 14 = 30
//42 en base 15 = 2C
//42 en base 16 = 2A
//42 en base 17 = 28
//42 en base 18 = 26
//42 en base 19 = 24
//42 en base 20 = 22
//42 en base 21 = 20
//42 en base 22 = 1K
//42 en base 23 = 1J
//42 en base 24 = 1I
//42 en base 25 = 1H
//42 en base 26 = 1G
//42 en base 27 = 1F
//42 en base 28 = 1E
//42 en base 29 = 1D
//42 en base 30 = 1C
//42 en base 31 = 1B
//42 en base 32 = 1A
//42 en base 33 = 19
//42 en base 34 = 18
//42 en base 35 = 17
//42 en base 36 = 16
//0 en base 7 = 0