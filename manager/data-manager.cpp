#include <iostream>
#include <string>
#include "../header/library-header.hpp"

LibraryData::LibraryData() {
    
}

LibraryData::~LibraryData() {
    for (Library* item : libraryArchives) {
        delete item;
    }
    libraryArchives.clear();
}