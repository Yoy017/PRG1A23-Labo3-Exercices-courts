#include <iostream>
#include <limits>
using namespace std;

// ré-écrivez le code suivant sans utiliser les
// mots clés switch, break, continue et goto

int main() {
//   while(true) {
//      int n;
//      cin >> n;
//      cin.ignore(numeric_limits<streamsize>::max(),'\n');
//
//      switch (n) {
//         case 1 :
//            cout << "1";
//         case 3 :
//            cout << "3";
//            break;
//         case 2 :
//            cout << "2";
//            continue;
//         case 4 :
//            cout << "4";
//            return 0;
//         default:
//            cout << "D";
//      }
//      cout << endl;
//   }

   while(true) {
      int n;
      cin >> n;
      cin.ignore(numeric_limits<streamsize>::max(),'\n');

      if(n == 1 || n == 3){
        cout << n;
        if(n == 1)
           cout << "3";
      }
      else if(n == 2){
         cout << "2";
      }
      else if(n == 4){
         cout << "4";
         return 0;
      } else{
         cout << "D";
      }
      cout << endl;
   }
}