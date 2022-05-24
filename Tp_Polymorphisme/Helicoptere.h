#pragma once
#include "Aeronef.h"
class Helicoptere :
    public Aeronef
{
public:
    Helicoptere();
    Helicoptere(int randX, int randY);

    void seDeplacer(int randX, int randY);
    void seDeplacer();
    void updatePos(int x, int y);


};

