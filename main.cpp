#include <iostream>
#include "implementation/game.h"


int main() {
    Game myGamehero, myGamevillains;
    HerosArmy FrodosArmy;
    Army *heros = myGamehero.createArmy(FrodosArmy);
    std::cout << "heros are created" << std::endl;
    VillainsArmy SayronsArmy;
    Army *villains = myGamevillains.createArmy(SayronsArmy);
    std::cout << "villains are created" << std::endl << "we have done them" << "\n";
    std::string whoIsTraitor;
    std::cout << "choose who is Traitor: hobbit, elf, dwarf or magician" << '\n';
    std::cin >> whoIsTraitor;
    int number;
    std::cout << "choose the number of traitors" << "\n";
    std::cin >> number;
    Traitor traitor(heros, villains, whoIsTraitor, number);
    traitor.betrayal();

    std::cout << '\n';
    std::cout << "now lets make a super hobbit" << '\n';
    MagicCreature *hobbit = new Hobbit;
    MagicCreature *decorator = new DecoratorHobbit(hobbit);
    std::cout << "now your character can have special abilities" << '\n';
    dynamic_cast<DecoratorHobbit *>(decorator)->abilityToFlyOnGriffins();
    dynamic_cast<DecoratorHobbit *>(decorator)->abilityToTalkWithTheAncientForest();

    std::cout << '\n';
    std::cout << "lets make detachment, choose number of hobbits, elfs, dwarfs, magician and nazguls you want to have in detachment" << '\n';
    int numberOfHobbits, numberOfElfs, numberOfDwarfs, numberOfMagicians, numberOfNazguls;
    std::cin >> numberOfHobbits >> numberOfElfs >> numberOfDwarfs >> numberOfMagicians >> numberOfNazguls;
    Detachment herosDetachment(heros, numberOfHobbits, numberOfElfs, numberOfDwarfs, numberOfMagicians, numberOfNazguls);
    herosDetachment.detechmentShoot(1, 15);
    herosDetachment.makeSuperDetachment();
    std::cout << "the number of characters in new detachment is " << getVectorOfCreatures(&herosDetachment)->size() << '\n';

    delete hobbit;
    delete decorator;
    return 0;
}
