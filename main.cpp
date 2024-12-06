#include <iostream>
#include <vector>
#include <string>
#include  "voiture.h"

int main(){
voiture peugeot;
std::cout<<"kilometres:"<<peugeot.get_kilometres()<<std::endl;
std::cout<<"couleur:"<<peugeot.get_couleur()<<std::endl;

return 0;
}

