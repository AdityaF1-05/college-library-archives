#include <string>
#include <iostream>
#include <vector>
#include "../header/library-header.hpp"


void LibraryData::addBooks(std::string type, std::string writer, std::string bookName, int Page, int year) {
    libraryArchives.push_back(new Books(type, writer, bookName, Page, year));
}

void LibraryData::addJournal(std::string type, std::string writer, std::string title, int year, int code) {
    libraryArchives.push_back(new Journal(type, writer, title, year, code));
}