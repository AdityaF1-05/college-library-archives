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
    std::cout << "2. To Main Menu\n";
    std::cout << std::endl;
}

void LibraryManager::JournalSwitch() {
    std::string mySwitch;
    bool isJournalTag = true;

    while (isJournalTag) {
        try {
            SubMenuJournal();

            std::cout << "Your Choice ";
            std::getline(std::cin, mySwitch);

            int SubJournal = std::stoi(mySwitch);
            switch (SubJournal) {
                case 1: {
                    std::string myType, myWriter, myJournal, myYear, myCode;
                    int year, code;

                    bool istypeInput = true;
                    while (istypeInput) {
                        try {
                            std::cout << "\nInput the Type of the Journal : ";
                            std::getline(std::cin, myType);

                            if (myType.empty()) {
                                std::cout << "\nYour Input is Empty!";
                            }
                            istypeInput = false;
                        } 
                        catch (...) {
                            std::cout << "\nIncorrect Input! Try Again!";
                        } 
                    }

                    bool isWriterType = true;
                    while (isWriterType) {
                        try {
                            std::cout << "\nInput the Writer of the Journal : ";
                            std::getline(std::cin, myWriter);

                            if (myWriter.empty()) {
                                std::cout << "\nYour Input is Empty!";
                            }
                            isWriterType = false;
                        } 
                        catch (...) {
                            std::cout << "\nIncorrect Input! Try Again!";
                        }
                    }

                    bool isTitleInput = true;
                    while (isTitleInput) {
                        try {
                            std::cout << "\nInput your Journal Title to Catalogue Registration : ";
                            std::getline(std::cin, myJournal);

                            if (myJournal.empty()) {
                                std::cout << "\nYour Input is Empty!";
                            }
                            isTitleInput = false;
                        }
                        catch (...) {
                            std::cout << "\nIncorrect Input! Try Again!";
                        }
                    }

                    bool isYearInput = true;
                    while (isYearInput) {
                        try {
                            std::cout << "\nInput the Year release of Journal : ";
                            std::getline(std::cin, myYear);

                            if (myYear.empty()) {
                                std::cout << "\nYour Input is Empty!";
                            }
                            isYearInput = false;
                            year = std::stoi(myYear);

                        } catch (...) {
                            std::cout << "\nIncorrect Input! Try Again!";
                        }
                    }

                    bool isCodeInput = true;
                    while (isCodeInput) {
                        try {
                            std::cout << "\nInput the Code of journal to Catalogue : ";
                            std::getline(std::cin, myCode);

                            if (myYear.empty()) {
                                std::cout << "\nYour Input is Empty!";
                            }
                            isCodeInput = false;
                            code = std::stoi(myCode);

                        } catch (...) {
                            std::cout << "\nIncorrect Input! Try Again!";
                        }
                    }
                    dl.addJournal(myType, myWriter, myJournal, year, code);
                    break;
                }

                case 2:
                    std::cout << "\nBack to the Main Menu\n";
                    return;
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