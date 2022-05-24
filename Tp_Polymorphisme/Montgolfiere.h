#pragma once
#include "Aeronef.h"
class Montgolfiere :
    public Aeronef
{
public:
    Montgolfiere();
    Montgolfiere(int randX, int randY);
   


    void seDeplacer(bool move);
    void seDeplacer();
    void updatePos(int x, int y);
};

