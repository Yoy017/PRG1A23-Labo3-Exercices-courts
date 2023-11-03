#include <iostream>
#include <iomanip>

using namespace std;

// Ecrire une fonction ascii_table(n) qui affiche la
// table des caractères ASCII entre 0 et 127 sous la
// forme d'un tableau de n colonnes séparées par le caractère
// '|'.  Cette table inclut le code ASCII en hexadécimal, suivi
// du caractère ':', suivi du caractère lui-même.
//
// Quand un caractère n'est pas imprimable (on peut le vérifier
// avec la fonction isprint(), afficher un caractère blanc à
// la place.
//
// Par exemple, ascii_table(8) doit afficher
//
//|  0:   |  1:   |  2:   |  3:   |  4:   |  5:   |  6:   |  7:   |
//|  8:   |  9:   |  A:   |  B:   |  C:   |  D:   |  E:   |  F:   |
//| 10:   | 11:   | 12:   | 13:   | 14:   | 15:   | 16:   | 17:   |
//| 18:   | 19:   | 1A:   | 1B:   | 1C:   | 1D:   | 1E:   | 1F:   |
//| 20:   | 21: ! | 22: " | 23: # | 24: $ | 25: % | 26: & | 27: ' |
//| 28: ( | 29: ) | 2A: * | 2B: + | 2C: , | 2D: - | 2E: . | 2F: / |
//| 30: 0 | 31: 1 | 32: 2 | 33: 3 | 34: 4 | 35: 5 | 36: 6 | 37: 7 |
//| 38: 8 | 39: 9 | 3A: : | 3B: ; | 3C: < | 3D: = | 3E: > | 3F: ? |
//| 40: @ | 41: A | 42: B | 43: C | 44: D | 45: E | 46: F | 47: G |
//| 48: H | 49: I | 4A: J | 4B: K | 4C: L | 4D: M | 4E: N | 4F: O |
//| 50: P | 51: Q | 52: R | 53: S | 54: T | 55: U | 56: V | 57: W |
//| 58: X | 59: Y | 5A: Z | 5B: [ | 5C: \ | 5D: ] | 5E: ^ | 5F: _ |
//| 60: ` | 61: a | 62: b | 63: c | 64: d | 65: e | 66: f | 67: g |
//| 68: h | 69: i | 6A: j | 6B: k | 6C: l | 6D: m | 6E: n | 6F: o |
//| 70: p | 71: q | 72: r | 73: s | 74: t | 75: u | 76: v | 77: w |
//| 78: x | 79: y | 7A: z | 7B: { | 7C: | | 7D: } | 7E: ~ | 7F:   |
void ascii_table(int n){
   for(int i = 0; i <= 127; ++i){
      cout << "| " << hex << uppercase << setw(2) << setfill(' ') << i << ": " <<
      setw(2) << setfill(' ') << left << (isprint(char(i)) ? char(i) : ' ') <<
      (i % n == n - 1 ? '\n' : ' ');
   }
}

int main() {
   ascii_table(8);
}