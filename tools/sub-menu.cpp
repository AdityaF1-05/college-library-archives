#include <iostream>
#include <string>
#include "../header/library-header.hpp"

LibraryManager::LibraryManager() {}

void LibraryManager::SubMenu() {
    std::cout << std::endl;
    std::cout << "+===========+\n";
    std::cout << "|   BOOKS   |\n";
    std::cout << "+===========+\n";
    std::cout << std::endl;

    std::cout << "Sub-Menu (Book)\n";
    std::cout << "1. Add Books to Catalogue\n";
    std::cout << "2. To Main Menu\n\n";
}

void LibraryManager::SubSwitchMenu() {
    std::string theSubSwitch;
    bool isSwitch = true;

    while (isSwitch) {
        try {
            SubMenu();

            std::cout << "\nYour Choice ";
            std::getline(std::cin, theSubSwitch);

            int SubSwitch = std::stoi(theSubSwitch);
            switch (SubSwitch) {
                case 1: {
                    std::string myType, myWriter, myBookName, myPageBook, myYear;
                    int PageBook, Year;

                    // Input the Book Title
                    bool isNameInput = true;
                    while (isNameInput) {
                        try {
                            std::cout << "\nInput The Book Type to Library Catalogue : ";
                            std::getline(std::cin, myType);

                            if (myType.empty()) {
                                throw std::invalid_argument("\nYour Input is Empty");
                            }
                            isNameInput = false;
                        } 
                        catch (...) {
                            std::cout << "\nIncorrect Input! Try Again!\n";
                        }
                    }

                    // Input the Writer Name book
                    bool isWriterInput = true;
                    while (isWriterInput) {
                        try {
                            std::cout << "Input the Writer of the book : ";
                            std::getline(std::cin, myWriter);

                            if (myWriter.empty()) {
                                throw std::invalid_argument("\nYour Input is Empty!");
                            }
                            isWriterInput = false;
                        } 
                        catch (...) {
                            std::cout << "\nIncorrect Input! Try Again!";
                        }
                    }

                    bool isBooknameInput = true;
                    while (isBooknameInput) {
                        try {
                            std::cout << "Input the Book Name : ";
                            std::getline(std::cin, myBookName);

                            if (myBookName.empty()) {
                                throw std::invalid_argument("Your Input is Empty");
                            }
                            isBooknameInput = false;
                        } 
                        catch (...) {
                            std::cout << "\nIncorrect Input! Try Again!\n";
                        }
                    }

                    bool isBookPageInput = true;
                    while (isBookPageInput) {
                        try {
                            std::cout << "Input the Pages of the Book Counted : ";
                            std::getline(std::cin, myPageBook);

                            if (myPageBook.empty()) {
                                throw std::invalid_argument("\nYour Input is Empty!");
                            }

                            PageBook = std::stoi(myPageBook);
                            isBookPageInput = false;
                        } 
                        catch (...) {
                            std::cout << "\nIncorrect Input! Try Again!\n";
                        }
                    }

                    bool isYear = true;
                    while (isYear) {
                        try {
                            std::cout << "Input The Year Release of the Book : ";
                            std::getline(std::cin, myYear);

                            if (myYear.empty()) {
                                throw std::invalid_argument("\nYour Input is Empty!");
                            }

                            Year = std::stoi(myYear);
                            isYear = false;
                        } 
                        catch (...) {

                        }
                    }

                    dl.addBooks(myType, myWriter, myBookName, PageBook, Year);
                    break;
                }

                case 2: {
                    std::cout << "\nBack To Main Menu\n";

                    isSwitch = false;
                    return;
                }
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