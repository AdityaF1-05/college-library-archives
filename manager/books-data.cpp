#include <string>
#include <iostream>
#include <vector>
#include "../header/library-header.hpp"

void LibraryData::addBooks(std::string type, std::string writer, std::string bookName, int Page, int year) {
    Library* newData = new Books(type, writer, bookName, Page, year);

    libraryArchives.push_back(newData);
    newData->LibraryDetails();
    
}

void LibraryData::addJournal(std::string type, std::string writer, std::string title, int year, int code) {
    Library* newJournal = new Journal(type, writer, title, year, code);

    libraryArchives.push_back(newJournal);
    newJournal->LibraryDetails();
}