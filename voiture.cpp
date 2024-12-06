#include  "voiture.h"
#include <string>

voiture::voiture()
{
<<<<<<< HEAD
    kilometres= 11200;
=======
    kilometres= 11500;
    couleur="vert";
>>>>>>> renault
}

int voiture::get_kilometres()
{
    return kilometres;
}

std::string voiture::get_couleur()
{
    return couleur;
}