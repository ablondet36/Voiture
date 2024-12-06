#include <string>

class voiture
{
    public :
    voiture();
    int get_kilometres();
    std::string get_couleur();
    
    
    
    private :
    int kilometres;
    std::string couleur;
};