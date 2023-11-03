#include <iostream>

using namespace std;

// écrire la fonction plus_petite_lettre(str) qui retourne
// le plus petite caractère (au sens du code ASCII) de la chaine
// str. Si cette lettre apparait plusieurs fois c'est la
// dernière instance qui doit être retournée.
char &plus_petite_lettre(string &str)
{
          char *res = &str[0];
          for(size_t i = 1; i < str.size();++i)
             if (str[i] <= *res)
                  res = &str[i];
          return *res;
}

int main()
{
          string s{"wisigoth"};
          plus_petite_lettre(s) = '*';
          cout << s << endl;
          // affiche wisi*oth

          s = "abraracourcix";
          plus_petite_lettre(s) = '*';
          cout << s << endl;
          // affiche abrar*courcix
}