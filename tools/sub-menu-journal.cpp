#include <iostream>
#include <string>
#include "../header/library-header.hpp"


void LibraryManager::SubMenuJournal() {
    std::cout << std::endl;
    std::cout << "+===========+\n";
    std::cout << "|  JOURNAL  |\n";
    std::cout << "+===========+";
    std::cout << std::endl;

    std::cout << "\nSub Menu (Journal)\n";
    std::cout << "1. Add Journal to Library Catalogue\n";
    std::cout << "2. To Main Menu";
    std::cout << std::endl;
}

void LibraryManager::JournalSwitch() {
    std::string myType, myWriter, myTitle, myYear, myCode;
    int year, code;

}