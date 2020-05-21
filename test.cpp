#include "implementation/game.h"
#include "implementation/heros.h"
#include "implementation/villains.h"
#include "implementation/detachment.h"
#include "implementation/Adapter_Traitors.h"
#include "implementation/decorator_hobbit.h"
#include "implementation/context.h"
#include <gtest/gtest.h>
#include <vector>

static const char FRODO = 'F', SAYRON = 'S';

Army *hand_create(const char whoseArmy) {
    Army *test = new Army();
    if (whoseArmy == 'F') {
        std::vector<Hobbit *> hobbits;
        for (int i = 0; i < HerosArmy::HEROS_HOBBITS; i++) {
            hobbits.push_back(new Hobbit());
        }
        test->addHobbits(hobbits);
        std::vector<Elf *> elfs;
        for (int i = 0; i < HerosArmy::HEROS_ELFS; i++) {
            elfs.push_back(new Elf());
        }
        test->addElfs(elfs);
        std::vector<Dwarf *> dwarfs;
        for (int i = 0; i < HerosArmy::HEROS_DWARFS; i++) {
            dwarfs.push_back(new Dwarf());
        }
        test->addDwarfs(dwarfs);

        std::vector<Magician *> magicians;
        for (int i = 0; i < HerosArmy::HEROS_MAGICIANS; i++) {
            magicians.push_back(new Magician());
        }
        test->addMagicians(magicians);

        std::vector<Nazgul *> nazguls;
        for (int i = 0; i < HerosArmy::HEROS_NAZGULS; i++) {
            nazguls.push_back(new Nazgul());
        }
        test->addNazguls(nazguls);
        return test;
    } else {
        std::vector<Hobbit *> hobbits;
        for (int i = 0; i < VillainsArmy::VILLAINS_HOBBITS; i++) {
            hobbits.push_back(new Hobbit());
        }
        test->addHobbits(hobbits);
        std::vector<Elf *> elfs;
        for (int i = 0; i < VillainsArmy::VILLAINS_ELFS; i++) {
            elfs.push_back(new Elf());
        }
        test->addElfs(elfs);
        std::vector<Dwarf *> dwarfs;
        for (int i = 0; i < VillainsArmy::VILLAINS_DWARFS; i++) {
            dwarfs.push_back(new Dwarf());
        }
        test->addDwarfs(dwarfs);

        std::vector<Magician *> magicians;
        for (int i = 0; i < VillainsArmy::VILLAINS_MAGICIANS; i++) {
            magicians.push_back(new Magician());
        }
        test->addMagicians(magicians);

        std::vector<Nazgul *> nazguls;
        for (int i = 0; i < VillainsArmy::VILLAINS_NAZGULS; i++) {
            nazguls.push_back(new Nazgul());
        }
        test->addNazguls(nazguls);
        return test;
    }
}

::testing::AssertionResult IsEqual(Army *a, Army *b) {
    if ((*a) == (*b)) {
        return ::testing::AssertionSuccess();
    } else {
        return ::testing::AssertionFailure();
    }
}

TEST(CREATING_ARMY, FA) {
    Game game;
    HerosArmy Frodo_factory;
    Army *testArmy = hand_create(FRODO);
    EXPECT_TRUE(IsEqual(game.createArmy(Frodo_factory), testArmy));
    delete testArmy;
}

TEST(CREATING_ARMY, SA) {
    Game game;
    VillainsArmy Sayrons_factory;
    Army *testArmy = hand_create(SAYRON);
    EXPECT_TRUE(IsEqual(game.createArmy(Sayrons_factory), testArmy));
    delete testArmy;
}

TEST(WHO_WINS, SOMEONE_WINS) {
    Game myGamehero, myGamevillains;
    HerosArmy FrodosArmy;
    Army *heros = myGamehero.createArmy(FrodosArmy);
    std::cout << "heros are created" << std::endl;
    VillainsArmy SayronsArmy;
    Army *villains = myGamevillains.createArmy(SayronsArmy);
    std::cout << "villains are created" << std::endl << "we have done them" << "\n";
    Traitor traitor(heros, villains, "hobbit", 5);
    std::cout << "now lets make a super hobbit" << '\n';
    MagicCreature *hobbit = new Hobbit;
    MagicCreature *decorator = new DecoratorHobbit(hobbit);
    std::cout << "lets make detachment" << '\n';
    Detachment herosDetachment(heros, 5,5,5,5,5);
    herosDetachment.makeSuperDetachment();
    delete hobbit;
    delete decorator;
}


TEST(CONVEX_HULL, points){
    {
        std::vector<Point> coordinatesOfEnemy{Point{0, 0}, Point{0, 2}, Point{2, 0}, Point{1, 1}, Point{2, 2}};
        Context *myContext = new Context(new StrategyAndrew(coordinatesOfEnemy.size(), coordinatesOfEnemy));
        myContext->makeAnEnemyBypassMap();
        ASSERT_EQ(myContext->getStrategy()->getMap()[0].x, 0);
        ASSERT_EQ(myContext->getStrategy()->getMap()[0].y, 0);
        ASSERT_EQ(myContext->getStrategy()->getMap()[1].x, 0);
        ASSERT_EQ(myContext->getStrategy()->getMap()[1].y, 2);
        ASSERT_EQ(myContext->getStrategy()->getMap()[2].x, 2);
        ASSERT_EQ(myContext->getStrategy()->getMap()[2].y, 2);
        ASSERT_EQ(myContext->getStrategy()->getMap()[3].x, 2);
        ASSERT_EQ(myContext->getStrategy()->getMap()[3].y, 0);
        delete myContext;
    }
    {
        std::vector<Point> coordinatesOfEnemy{Point{7,8}, Point{16,1}, Point{0,0}, Point{15,7}, Point{4,4}, Point {3,3}};
        Context *myContext = new Context(new StrategyAndrew(coordinatesOfEnemy.size(), coordinatesOfEnemy));
        myContext->makeAnEnemyBypassMap();
        ASSERT_EQ(myContext->getStrategy()->getMap()[0].x, 0);
        ASSERT_EQ(myContext->getStrategy()->getMap()[0].y, 0);
        ASSERT_EQ(myContext->getStrategy()->getMap()[1].x, 7);
        ASSERT_EQ(myContext->getStrategy()->getMap()[1].y, 8);
        ASSERT_EQ(myContext->getStrategy()->getMap()[2].x, 15);
        ASSERT_EQ(myContext->getStrategy()->getMap()[2].y, 7);
        ASSERT_EQ(myContext->getStrategy()->getMap()[3].x, 16);
        ASSERT_EQ(myContext->getStrategy()->getMap()[3].y, 1);
        delete myContext;
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
