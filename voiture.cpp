#include  "voiture.h"
#include <string>

voiture::voiture()
{
    kilometres= 11800;
    couleur="vert";
}

int voiture::get_kilometres()
{
    return kilometres;
}

std::string voiture::get_couleur()
{
    return couleur;
}