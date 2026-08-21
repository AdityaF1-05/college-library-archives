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
};

class LibraryData {
    private:
    std::vector <Library*> libraryArchives;

    public:
    ~LibraryData() {
        CleanData();
    }
    void CleanData();
};

class LibraryManager {
    public:
    void MainMenu();
    void SwitchMenu();

    void SubMenu();
};

#endif