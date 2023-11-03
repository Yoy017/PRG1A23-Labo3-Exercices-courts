#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// écrire une fonction caractere_le_plus_frequent(string const& filename)
// qui retourne une structure ou une paire (voir chapitre 7) qui
// contient le caractère (hors espace ' ') le plus fréquent dans ce fichier,
// ainsi que le nombre de fois qu'il apparait. Ce nombre est négatif
// si le fichier est illisible.
struct caractere {
   char c;
   int aparitions;
};
int nb_char_in_file(const string&, const char &);
caractere caractere_le_plus_frequent(const string&);

int main() {
   cout << "Entrez le nom du fichier : " << flush;
   string filename;
   cin >> filename;

   auto [c, n] = caractere_le_plus_frequent(filename);
   if (n >= 0)
      cout << "Le caractère " << c
           << " est le plus fréquent et apparait " << n
           << " fois dans le fichier " << filename << endl;
   else
      cout << "Le fichier est illisible";
}

// Fonction qui compte le nombre de fois que [userValue] apparait dans [filename].
int nb_char_in_file(const string& filename, const char &userValue){
   ifstream f(filename);
   if(!f) return -1;

   int n = 0;
   string s;
   while(getline(f, s))
      for (char &c : s)
         if (c == userValue) n++;
   return n;
}

caractere caractere_le_plus_frequent(const string& filename) {
   ifstream f(filename);
   if(!f) return {' ', -1}; // illisible

   int n = 0;
   char lettre = ' ';
   int most_frequent_letter = 0;
   for(char c = 'a'; c <= 'z'; ++c) {
      n = nb_char_in_file(filename, c);
      if (n >= most_frequent_letter){
         lettre = c;
         most_frequent_letter = n;
      }
   }

   return caractere{lettre, most_frequent_letter};
}