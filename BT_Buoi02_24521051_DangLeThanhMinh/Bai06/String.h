#pragma once
#include <iostream>

class String {
private:
    char* str;
public:
    String();
    String(const char* s);
    String(const String& other);
    ~String();

    int length() const;
    void concat(const String& other);
    void reverse();
    void toUpper();
    void toLower();

    void input();
    void output() const;
};
