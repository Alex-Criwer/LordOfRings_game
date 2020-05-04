#include "Adapter_Traitors.h"

Traitor::Traitor(Army* heros, Army* villains, std::string whoIsTraitor,const int number): heros(heros), villains(villains),
                                                                                          whoIsTraitor(whoIsTraitor),
                                                                                          numberOfTriotors(number){}

void Traitor::betrayal(){
    if(whoIsTraitor == "hobbit"){
        std::vector<Hobbit*>* frodoTraitors = getVectorOfHobbits(heros);
        std::vector<Hobbit*>* sayronsHobbits = getVectorOfHobbits(villains);
        std::cout << "before betrayal size of heros hobbits " << frodoTraitors->size() << "\n";
        std::cout << "before betrayal size of villains hobbits " << sayronsHobbits->size() << "\n";
        for (int i = 0; i < numberOfTriotors; ++i) {
            Hobbit* traitor = frodoTraitors->back();
            frodoTraitors->pop_back();
            sayronsHobbits->push_back(traitor);
        }
        std::cout << "after betrayal size of heros hobbits " << frodoTraitors->size() << "\n";
        std::cout << "after betrayal size of villains hobbits " << sayronsHobbits->size() << "\n";
    }
    if(whoIsTraitor == "elf"){
        std::vector<Elf*>* frodoTraitors = getVectorOfElfs(heros);
        std::vector<Elf*>* sayronsElfs = getVectorOfElfs(villains);
        std::cout << "before betrayal size of heros elfs " << frodoTraitors->size() << "\n";
        std::cout << "before betrayal size of villains elfs " << sayronsElfs->size() << "\n";
        for (int i = 0; i < numberOfTriotors; ++i) {
            Elf* traitor = frodoTraitors->back();
            frodoTraitors->pop_back();
            sayronsElfs->push_back(traitor);
        }
        std::cout << "after betrayal size of heros elfs " << frodoTraitors->size() << "\n";
        std::cout << "after betrayal size of villains elfs " << sayronsElfs->size() << "\n";
    }

    if(whoIsTraitor == "dwarf"){
        std::vector<Dwarf*>* frodoTraitors = getVectorOfDwarfs(heros);
        std::vector<Dwarf*>* sayronsDwarfs = getVectorOfDwarfs(villains);
        std::cout << "before betrayal size of heros dwarfs " << frodoTraitors->size() << "\n";
        std::cout << "before betrayal size of villains dwarfs " << sayronsDwarfs->size() << "\n";
        for (int i = 0; i < numberOfTriotors; ++i) {
            Dwarf* traitor = frodoTraitors->back();
            frodoTraitors->pop_back();
            sayronsDwarfs->push_back(traitor);
        }
        std::cout << "after betrayal size of heros dwarfs " << frodoTraitors->size() << "\n";
        std::cout << "after betrayal size of villains dwarfs " << sayronsDwarfs->size() << "\n";
    }

    if(whoIsTraitor == "magician"){
        std::vector<Magician*>* frodoTraitors = getVectorOfMagicians(heros);
        std::vector<Magician*>* sayronsMagicians = getVectorOfMagicians(villains);
        std::cout << "before betrayal size of heros magicians " << frodoTraitors->size() << "\n";
        std::cout << "before betrayal size of villains magicians " << sayronsMagicians->size() << "\n";
        for (int i = 0; i < numberOfTriotors; ++i) {
            Magician* traitor = frodoTraitors->back();
            frodoTraitors->pop_back();
            sayronsMagicians->push_back(traitor);
        }
        std::cout << "after betrayal size of heros magicians " << frodoTraitors->size() << "\n";
        std::cout << "after betrayal size of villains magicians " << sayronsMagicians->size() << "\n";
    }
}