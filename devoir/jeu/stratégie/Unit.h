#ifndef _UNIT_H_
#define _UNIT_H_

#include "Jeu.h"
#include "Unit.h"

class JeuDeStrategie : public Jeu {
private:
    std::string nomJoueur1;
    std::string nomJoueur2;
    Unit* armeeJoueur1[3];
    Unit* armeeJoueur2[3];
    int etatJeu;
public:
    JeuDeStrategie(std::string nom1, std::string nom2);
    void start() override;
    void recommencer() override;
    void mettreEnPause() override;
    void quitter() override;
    int obtenirEtatJeu() const override;
    void lancerBataille();
    void combattre(Unit* unit1, Unit* unit2);
    bool armeeJoueur1EnVie() const;
    bool armeeJoueur2EnVie() const;
    void afficherResultat();
    ~JeuDeStrategie();
};

#endif
