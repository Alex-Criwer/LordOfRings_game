#include "visitor.h"
#include "army.h"
#include "detachment.h"

void Visitor::visitorForHobbit(const Hobbit *hobbit) {
    int x, y;
    std::cout << "enter the coordinates where to shoot " << '\n';
    std::cin >> x >> y;
    hobbit->shoot(x, y);

}


void Visitor::visitorForElf(const Elf *elf) {
    int x, y;
    std::cout << "enter the coordinates where to shoot " << '\n';
    std::cin >> x >> y;
    elf->shoot(x, y);
}

void Visitor::visitorForDwarf(const Dwarf *dwarf) {
    int x, y;
    std::cout << "enter the coordinates where to shoot " << '\n';
    std::cin >> x >> y;
    dwarf->shoot(x, y);
}

