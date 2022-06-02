#include "gtest/gtest.h"
#include "Damier.h"
#include "Fantassin.h"

TEST(Damier, CreationToutEstVrais)
{
    Damier *c = new Damier(10, 10);

    EXPECT_EQ(c->getLargeurGrille(), 10);
    EXPECT_EQ(c->getHauteurGrille(), 10);
    EXPECT_EQ(c->getPersonnage(MyPoint(0,0)), nullptr);

    int nbPlayer = 10;
    for (int i = 0; i < nbPlayer; i++)
    {   
  
            Fantassin* f = new Fantassin(c);
            EXPECT_TRUE(c->setRandomPerso(f));
    }

    EXPECT_EQ(c->persosCount(), nbPlayer);

    delete c;


}

TEST(Fantassin, DeplacementAttaqueToutEstVrai)
{
    Damier* c = new Damier(2, 2);
    Fantassin* f = new Fantassin(c);
    Fantassin* f2 = new Fantassin(c);
    c->setRandomPerso(f);
    c->setRandomPerso(f2);
    EXPECT_EQ(f->getType(), "Fantassin");
    EXPECT_TRUE(c->deplacerPerso(f));
    EXPECT_EQ(c->getPersosCible(f).size(), 1);

    delete c;
}


int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}