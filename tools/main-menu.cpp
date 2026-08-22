#include <iostream>
#include <string>
#include "../header/library-header.hpp"


void LibraryManager::MainMenu() {
    std::cout << std::endl;
    std::cout << "+==================+\n";
    std::cout << "| LIBRARY ARCHIVES |\n";
    std::cout << "+==================+\n";
    std::cout << std::endl;

    std::cout << "Main Menu\n";
    std::cout << "1. Books" << std::endl;
    std::cout << "2. Journal" << std::endl;
    std::cout << "3. Info" << std::endl;
    std::cout << "4. Exit Program\n\n";

    std::cout << "Select the choice ";
}

void LibraryManager::SwitchMenu() {
    std::string theSwitch;
    while (true) {
        try {
            MainMenu();

            std::cout << "\nYour Choice ";
            std::getline(std::cin, theSwitch);

            if (theSwitch.empty()) {
                throw std::invalid_argument("Please Input your Choice!\n");
            }

            int theValue = std::stoi(theSwitch);
            switch (theValue) {
                case 1: {
                    SubSwitchMenu();
                    break;
                }

                case 2: {
                    SubMenuJournal();
                    break;
                }

                case 3: {
                    std::cout << "\nDevelopment In Progress! Coming Soon.";
                    std::cout << std::endl;
                    break;
                }

                case 4: {
                    std::cout << "\nThank you for using the Library Catalogue!\n";
                    return;
                }

                default:
                throw std::out_of_range("Your Input is Unknown! Try Again!\n");
                
            }
        }
        catch (std::invalid_argument& e) {
            std::cout << "\n[ERROR] " << e.what();
        }

        catch (std::out_of_range& e) {
            std::cout << "\n[ERROR] " << e.what();
        }
    }
}