#include <iostream>
#include "Article.h"
using namespace std;
int main() {
string str1 = "an.txt";
string str2 = "bonjour";
string str4 = "bonjour a tous";
  Article* annonce = new Article(str1,str2,str4);
  cout<<annonce->getNomFichier();
  return 0;
}
