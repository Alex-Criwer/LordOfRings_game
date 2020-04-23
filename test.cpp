#include "implementation/game.h"
#include "implementation/heros.h"
#include "implementation/villains.h"
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

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
