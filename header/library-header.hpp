#ifndef LIBRARY_ARCHIVES
#define LIBRARY_ARCHIVES
#include <iostream>
#include <string>
#include <vector>

class Library {
    protected:
    std::string type;
    std::string writer;

    public:
    Library(std::string t, std::string w) : type(t), writer(w) {}

    virtual ~Library() = default;

    std::string getType() {
        return type;
    }

    std::string getWriter() {
        return writer;
    }

    virtual void LibraryDetails() {
        std::cout << "Type : " << type << " | " << "Writer : " << writer;
    }
};

class Books : public Library {
    private:
    std::string bookName;
    int bookPage;
    int year;

    public:
    Books(std::string t, std::string w, std::string bn, int bp, int y) 
    : Library(t, w), bookName(bn), bookPage(bp), year(y) {}

    std::string getBookName() {
        return bookName;
    }

    int getbookPage() {
        return bookPage;
    }

    int getYear() {
        return year;
    }

    void LibraryDetails() override {
        std::cout << "[BOOKS]" << std::endl
                  << "Book Type : " << type << std::endl
                  << "Writer : " << writer << std::endl
                  << "Book Pages : " << bookPage << std::endl
                  << "Year Release : " << year << std::endl;
    }
};

class Journal : public Library {
    private:
    std::string JournalTitle;
    int year;
    int code;

    public:
    Journal(std::string t, std::string w, std::string jt, int y, int c)
    : Library(t, w), JournalTitle(jt), year(y), code(c) {}

    std::string getJournalTitle() {
        return JournalTitle;
    }

    int getYear() {
        return year;
    }

    int getCode() {
        return code;
    }

    void setYear(int newYear) {
        if (newYear < 2020) {
            year = 2020;
        } else {
            year = newYear;
        }
    }

    void setCode(int newCode) {
        if (newCode == 0) {
            code = 1;
        } else {
            code = newCode;
        }
    }

    void LibraryDetails() override {
        std::cout << "[JOURNAL]" << std::endl
                  << "Journal Type : " << type << std::endl
                  << "Writer : " << writer << std::endl
                  << "Title : " << JournalTitle << std::endl
                  << "Year : " << year << std::endl
                  << "Code : " << "A-" << code << std::endl; 
    }
};

class LibraryData {
    private:
    std::vector <Library*> libraryArchives;

    public:
    LibraryData();
    ~LibraryData();

    void addBooks(std::string type, std::string writer, std::string bookName, int Page, int year);
    void addJournal(std::string type, std::string writer, std::string title, int year, int code);
};

class LibraryManager {
    private:
    LibraryData dl;

    public:
    LibraryManager();

    void MainMenu();
    void SwitchMenu();

    void SubMenu();
    void SubSwitchMenu();

    void SubMenuJournal();
    void JournalSwitch();
};

#endif