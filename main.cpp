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



    std::cout << '\n' << "the coordinates of the location of the enemy’s bases fell into our hands, now we can build a minimum area to capture them" << '\n';
    int numberOfCoordinates;
    std::cout << "how many enemy locations do we have? Enter it" << "\n";
    std::cin >> numberOfCoordinates;
    std::vector<Point> coordinatesOfEnemy;
    coordinatesOfEnemy.reserve(numberOfCoordinates);
    std::cout << "enter the coordinates" << '\n';
    for (int i = 0; i < numberOfCoordinates; ++i) {
        int x,y;
        std::cin >> x >> y;
        coordinatesOfEnemy.push_back(Point{x,y});
    }
    std::cout << "Is there a lot of dots of location in the middle ? enter yes or no" << "\n";
    std::string str;
    std::cin >> str;
    Context* myContext;
    if(str == "yes"){
        myContext = new Context(new StrategyJarvis(numberOfCoordinates, coordinatesOfEnemy));
    } else if(str == "no"){
        myContext = new Context(new StrategyAndrew(numberOfCoordinates, coordinatesOfEnemy));
    }
    myContext->makeAnEnemyBypassMap();
    if(str == "no") {
        for (auto point : myContext->getStrategy()->getMap()) {
            std::cout << point.x << " " << point.y << '\n';
        }
    }

    Visitor* visitor = new Visitor;
    Hobbit* myHobbit = new Hobbit;
    myHobbit->Accept(visitor);

    coordinatesOfEnemy.clear();
    delete myContext;
    delete visitor;
    delete myHobbit;
    delete hobbit;
    delete decorator;
    return 0;
}
