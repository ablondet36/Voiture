#include  "voiture.h"
#include <string>

voiture::voiture()
{
    kilometres= 11500;
    couleur="jaune";
}

int voiture::get_kilometres()
{
    return kilometres;
}

std::string voiture::get_couleur()
{
    return couleur;
}