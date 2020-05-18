#pragma once

class Hobbit;

class Elf;

class Dwarf;

class Detachment;

class Visitor {
public:
    void visitorForHobbit(const Hobbit *hobbit);

    void visitorForElf(const Elf *elf);

    void visitorForDwarf(const Dwarf *dwarf);

};

