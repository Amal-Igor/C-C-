#include "Avion.h"


Avion::Avion()
{
    setType("AVION");
    setPosition(myRand(0, 20), myRand(0, 20));
}


Avion::Avion(int randX, int randY)
 {  
	setType("AVION");
    setPosition(randX, randY);
}



void Avion::seDeplacer(bool move)
{
    // On récupère la position de l'aéronef 
	Position p = getPosition();

    while (move)
    {
    if (p.getX() > getLargeurCiel()-2) {
        p.setX(p.getX()-2);
        updatePosX(p.getX());
    }
    else if (p.getX() < getLargeurCiel()-2) {
        p.setX(p.getX() + 2);
        updatePosX(p.getX());
    }

    if (p.getY() > getLongeurCiel()-2) {
        p.setY(p.getY() - 2);
        updatePosY(p.getY());
    }
    else if (p.getY() < getLongeurCiel()-2) {
        p.setY(p.getY() - 2);
        updatePosY(p.getY());
    }

    }

    // Fontion récursive avec un count pour break au cas où
}

void  Avion::seDeplacer()
{   

    //int count = 0;
    Position p = getPosition();
    int currX = p.getX();
    int currY = p.getY();
    Position targetPos = Position(myRand(0,20), myRand(0, 20));
    printf("Je me dépalce");

    //if (count <= 3)
    //{
        do
        {   
            if ((abs(p.getX() - targetPos.getX()) == 1 || abs(p.getY() - targetPos.getY()) == 1))
            {
                if (p.getX() > targetPos.getX()) {
                    p.setX(p.getX() - 1);
                    updatePosX(p.getX());
                }
                else if (p.getX() < targetPos.getX()) {
                    p.setX(p.getX() + 1);
                    updatePosX(p.getX());
                }

                if (p.getY() > targetPos.getY()) {
                    p.setY(p.getY() - 1);
                    updatePosY(p.getY());
                }
                else if (p.getY() < targetPos.getY()) {
                    p.setY(p.getY() + 1);
                    updatePosY(p.getY());
                }
            }
            else{
            if (p.getX() > targetPos.getX()) {
                p.setX(p.getX() - 2);
                updatePosX(p.getX());
            }
            else if (p.getX() < targetPos.getX()) {
                p.setX(p.getX() + 2);
                updatePosX(p.getX());
            }

            if (p.getY() > targetPos.getY()) {
                p.setY(p.getY() - 2);
                updatePosY(p.getY());
            }
            else if (p.getY() < targetPos.getY()) {
                p.setY(p.getY() + 2);
                updatePosY(p.getY());
            }
           }
        } while (!(getPosition() == targetPos));

  
    //}
    //    count++;
        //this->seDeplacer();

}

void  Avion::seDeplacer(int xTarget, int yTarget)
{
    Position p = getPosition();
    int currX =p.getX();
    int currY = p.getY();
    Position targetPos = Position(xTarget, yTarget);

    do
    {
        if (p.getX() > xTarget) {
            p.setX(p.getX() - 1);
            updatePosX(p.getX());
        }
        else if (p.getX() < xTarget) {
            p.setX(p.getX() + 1);
            updatePosX(p.getX());
        }

        if (p.getY() > yTarget) {
            p.setY(p.getY() - 1);
            updatePosY(p.getY());
        }
        else if (p.getY() < yTarget) {
            p.setY(p.getY() + 1);
            updatePosY(p.getY());
        }


    } while (!(getPosition() == targetPos));
}


void Avion::updatePos(int x, int y)
{
	setPosition(x, y);

}