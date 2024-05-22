#include <iostream>
#include "Jeu.hpp"
#include "Foot.hpp"

int main()
{
    Foot m;
    m.getMatchDuration();
    m.setMatchDuration(5);
    m.match();
    m.afficheResultat();
    return (0);
}
