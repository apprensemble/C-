#include <string>
using namespace std;
class Article {
  string nomFichier;
  string titre;
  string texte;

  public:
  Article(const string nomFichier,const string titre,const string texte) : nomFichier(nomFichier),titre(titre),texte(texte) { }

  void setTitre(string titre) {
    this->titre = titre;

  }
  void setTexte(string texte) {
    this->texte = texte;

  }
  string getNomFichier() {
    return nomFichier;

  }
  string getTitre() {
    return titre;

  }
  string getTexte() {
    return texte;

  }

};
