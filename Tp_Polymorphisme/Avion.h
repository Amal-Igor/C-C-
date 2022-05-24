#pragma once
#include "Aeronef.h"
class Avion :
    public Aeronef
{
public:
    Avion();
    Avion(int randX, int randY);

    void seDeplacer(bool move);
    void seDeplacer();
    void seDeplacer(int xTarget, int yTarget);
    void updatePos(int x, int y);
    //void updatePosX(int x);
    //void updatePosY(int y);

};

