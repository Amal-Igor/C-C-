#include "Helicoptere.h"



Helicoptere::Helicoptere()
{
	setType("HELICOPTER");
	setPosition(myRand(0, 20), myRand(0, 20));

}

void Helicoptere::seDeplacer(int randX, int randY)
{		

	Position p = getPosition();
	p.getX();
	p.getY();

	while (randX <= getLargeurCiel() && randY <= getLongeurCiel())
	{
		updatePos(randX, randY);
	}
}


void Helicoptere::seDeplacer()
{
	Position p = getPosition();
	int randomX =0, randomY = 0, count =0;

	//Position targetPos = Position(myRand(0, 20), myRand(0, 20));

	while (count <= 5)
	{	
		randomX = myRand(0, 20);
		randomY = myRand(0, 20);
		p.setX(randomX);
		p.setY(randomY);
		count++;
	}
}

void Helicoptere::updatePos(int x, int y)
{
	setPosition(x, y);

}