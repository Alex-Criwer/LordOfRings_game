#include "realisations/game.h"
#include "realisations/heros.h"
#include "realisations/villains.h"
#include <gtest/gtest.h>
#include <vector>
const int HEROS_HOBBITS = 20, VILLAINS_HOBBITS = 10, HEROS_ELFS = 5,VILLAINS_ELFS = 3, HEROS_DWARFS = 5, VILLAINS_DWARFS = 10;
const int HEROS_MAGICIANS = 2, VILLAINS_MAGICIANS = 3, HEROS_NAZGULS = 1,VILLAINS_NAZGULS = 1;

const char FRODO = 'F', SAYRON = 'S';

using namespace std;

Army* hand_create(const char whoseArmy){
    if(whoseArmy == 'F') {
        Army *test = new Army();
        vector<Hobbit *> hobbits;
        for (int i = 0; i < HEROS_HOBBITS; i++) {
            hobbits.push_back(new Hobbit());
        }
        test->addHobbits(hobbits);
        vector<Elf *> elfs;
        for (int i = 0; i < HEROS_ELFS; i++) {
            elfs.push_back(new Elf());
        }
        test->addElfs(elfs);
        vector<Dwarf *> dwarfs;
        for (int i = 0; i < HEROS_DWARFS; i++) {
            dwarfs.push_back(new Dwarf());
        }
        test->addDwarfs(dwarfs);

        vector<Magician *> magicians;
        for (int i = 0; i < HEROS_MAGICIANS; i++) {
            magicians.push_back(new Magician());
        }
        test->addMagicians(magicians);

        vector<Nazgul *> nazguls;
        for (int i = 0; i < HEROS_NAZGULS; i++) {
            nazguls.push_back(new Nazgul());
        }
        test->addNazguls(nazguls);
        return test;
    } else {

        Army *test = new Army();
        vector<Hobbit *> hobbits;
        for (int i = 0; i < VILLAINS_HOBBITS; i++) {
            hobbits.push_back(new Hobbit());
        }
        test->addHobbits(hobbits);
        vector<Elf *> elfs;
        for (int i = 0; i < VILLAINS_ELFS; i++) {
            elfs.push_back(new Elf());
        }
        test->addElfs(elfs);
        vector<Dwarf *> dwarfs;
        for (int i = 0; i < VILLAINS_DWARFS; i++) {
            dwarfs.push_back(new Dwarf());
        }
        test->addDwarfs(dwarfs);

        vector<Magician *> magicians;
        for (int i = 0; i < VILLAINS_MAGICIANS; i++) {
            magicians.push_back(new Magician());
        }
        test->addMagicians(magicians);

        vector<Nazgul *> nazguls;
        for (int i = 0; i < VILLAINS_NAZGULS; i++) {
            nazguls.push_back(new Nazgul());
        }
        test->addNazguls(nazguls);
        return test;
    }
}

::testing::AssertionResult IsEqual(Army* a, Army* b)
{
    if ((*a) == (*b)) {
        return ::testing::AssertionSuccess();
    }
    else {
        return ::testing::AssertionFailure();
    }
}

TEST(CREATING_ARMY, FA)
{
    Game game;
    HerosArmy Frodo_factory;
    EXPECT_TRUE(IsEqual(game.createArmy(Frodo_factory), hand_create(FRODO)));
}

TEST(CREATING_ARMY, SA)
{
    Game game;
    VillainsArmy Sayrons_factory;
    EXPECT_TRUE(IsEqual(game.createArmy(Sayrons_factory), hand_create(SAYRON)));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
