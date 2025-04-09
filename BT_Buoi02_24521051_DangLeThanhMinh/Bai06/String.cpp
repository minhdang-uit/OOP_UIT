#include "String.h"
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

String::String() {
    str = new char[1];
    str[0] = '\0';
}

String::String(const char* s) {
    str = new char[strlen(s) + 1];
    strcpy_s(str, strlen(s) + 1, s);
}

String::String(const String& other) {
    str = new char[strlen(other.str) + 1];
    strcpy_s(str, strlen(other.str) + 1, other.str);
}

String::~String() {
    delete[] str;
}

int String::length() const {
    return (int)strlen(str);  

}

void String::concat(const String& other) {
    size_t newLen = strlen(str) + strlen(other.str) + 1;
    char* temp = new char[newLen];
    strcpy_s(temp, newLen, str);
    strcat_s(temp, newLen, other.str);
    delete[] str;
    str = temp;
}

void String::reverse() {
    size_t len = strlen(str);
    for (size_t i = 0; i < len / 2; ++i) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

void String::toUpper() {
    for (size_t i = 0; str[i]; ++i)
        str[i] = toupper(str[i]);
}

void String::toLower() {
    for (size_t i = 0; str[i]; ++i)
        str[i] = tolower(str[i]);
}

void String::input() {
    string buffer;
    getline(cin, buffer);
    delete[] str;
    str = new char[buffer.length() + 1];
    strcpy_s(str, buffer.length() + 1, buffer.c_str());
}

void String::output() const {
    cout << str << endl;
}
