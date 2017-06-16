//
// Created by alirezafour on 6/2/17.
//

#include "AFString.h"

std::vector<AF::AFString> AF::AFString::split(const std::string &delimiter) const {
    std::vector<std::string> parts;
    boost::split(parts, mString, boost::is_any_of(delimiter), boost::token_compress_on);
    return std::vector<AFString>(parts.begin(), parts.end());
}

AF::AFString AF::AFString::to_lower_copy() const {
    return {boost::to_lower_copy(mString)};
}

size_t AF::AFString::get_length() const {
    return mString.length();
}

AF::AFString::~AFString() {

}

AF::AFString::AFString(const std::string &string) : mString(string) { }

AF::AFString::AFString(const AF::AFString &string) {
    if(string != *this)
    {
        this->mString = string.to_std_string();
    }
}


AF::AFString::AFString() {

}

std::string AF::AFString::to_std_string() const {
    return mString;
}

AF::AFString &AF::AFString::operator+=(const AF::AFString &string) {
    this->mString += string.to_std_string();
    return *this;
}

bool AF::AFString::operator==(const AF::AFString &string) const {
    return this->mString == string.to_std_string();
}

bool AF::AFString::operator!=(const AF::AFString &string) const {
    return this->mString != string.to_std_string();
}

bool AF::AFString::operator>(const AF::AFString &string) const {
    return this->mString > string.to_std_string();
}

bool AF::AFString::operator<(const AF::AFString &string) const {
    return this->mString < string.to_std_string();
}

bool AF::AFString::operator>=(const AF::AFString &string) const {
    return this->mString >= string.to_std_string();
}

bool AF::AFString::operator<=(const AF::AFString &string) const {
    return this->mString <= string.to_std_string();
}

AF::AFString &AF::AFString::operator=(AF::AFString &string) {
    this->mString = string.to_std_string();
    return *this;
}

AF::AFString::AFString(const char * string) {
    this->mString = string;
}

AF::AFString &AF::AFString::operator=(const char * string) {
    this->mString = string;
    return *this;
}

bool AF::AFString::is_empty() {
    return this->mString.empty();
}

AF::AFString &AF::AFString::operator=(const std::string &string) {
    this->mString = string;
    return *this;
}

AF::AFString &AF::AFString::operator+=(const std::string &string) {
    this->mString += string;
    return *this;
}

bool AF::AFString::operator==(const std::string &string) const {
    return this->mString == string;
}

AF::AFString AF::AFString::operator+(const AFString &string) {
    AF::AFString result(this->mString + string.to_std_string());
    return result;
}

AF::AFString::AFString(AF::AFString &&string) {
    this->mString = string.to_std_string();
    string.mString = "";

}

AF::AFString &AF::AFString::operator=(AF::AFString &&string) {
    this->mString = string.to_std_string();
    string.mString = "";
    return *this;
}


