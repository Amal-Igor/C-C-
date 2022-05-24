#include "Montgolfiere.h"

Montgolfiere::Montgolfiere()
{
	setType("MONTGOLFIER");
    setPosition(myRand(0, 20), myRand(0, 20));

}


Montgolfiere::Montgolfiere(int randX, int randY)
{
    setType("MONTGOLFIERE");
    setPosition(randX, randY);
}

void Montgolfiere::seDeplacer(bool move)
{

	Position p = getPosition();
	p.getX();
	p.getY();

    while (move)
    {
        if (p.getX() > getLargeurCiel()) {
            p.setX(p.getX() - 1);
            updatePosX(p.getX());
        }
        else if (p.getX() < getLargeurCiel()) {
            p.setX(p.getX() + 1);
            updatePosX(p.getX());
        }

        if (p.getY() > getLongeurCiel()) {
            p.setY(p.getY() - 1);
            updatePosX(p.getY());
        }
        else if (p.getY() < getLongeurCiel()) {
            p.setY(p.getY() - 1);
            updatePosX(p.getY());
        }

    }

}


void  Montgolfiere::seDeplacer()
{

    int count = 0;
    Position p = getPosition();
    int currX = p.getX();
    int currY = p.getY();
    Position targetPos = Position(myRand(0, 20), myRand(0, 20));

    if (count <= 3)
    {
        do
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
        } while (!(getPosition() == targetPos));

        count++;
        seDeplacer();
    }


}


void Montgolfiere::updatePos(int x, int y)
{
	setPosition(x, y);

}