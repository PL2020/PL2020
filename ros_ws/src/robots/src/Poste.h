/**** Projet long N7 2020 ****/

#ifndef POSTE
#define POSTE

#include <ros/ros.h>
#include <string>
#include <string.h>

using namespace std;

class Poste
{
private:
  string nom_poste_;
  int produit_poste_;

  int pres_requis_tache_[3];
  int sortie_tache_[3];
  int temps_operation_[3];


public:
	Poste();
	~Poste();

  void nommer(string nom);
  string get_nom();
  int do_task(int num_tache);
  void ajouter_produit(int produit);
};
#endif