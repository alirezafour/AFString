//
// Created by alirezafour on 6/2/17.
//

#include "AFString.h"

std::vector<af::AFString> af::AFString::split(const std::string &delimiter) const {
    std::vector<std::string> parts;
    boost::split(parts, mString, boost::is_any_of(delimiter), boost::token_compress_on);
    return std::vector<AFString>(parts.begin(), parts.end());
}

af::AFString af::AFString::to_lower_copy() const {
    return {boost::to_lower_copy(mString)};
}

size_t af::AFString::get_length() const {
    return mString.length();
}

af::AFString::~AFString() {

}

af::AFString::AFString(const std::string &string) : mString(string) {

}

af::AFString::AFString(const af::AFString &string) {
    if(string != *this)
    {
        this->mString = string.to_std_string();
    }
}


af::AFString::AFString() {

}

std::string af::AFString::to_std_string() const {
    return mString;
}

af::AFString &af::AFString::operator+=(const af::AFString &string) {
    this->mString += string.to_std_string();
    return *this;
}

bool af::AFString::operator==(const af::AFString &string) const {
    return this->mString == string.to_std_string();
}

bool af::AFString::operator!=(const af::AFString &string) const {
    return this->mString != string.to_std_string();
}

bool af::AFString::operator>(const af::AFString &string) const {
    return this->mString > string.to_std_string();
}

bool af::AFString::operator<(const af::AFString &string) const {
    return this->mString < string.to_std_string();
}

bool af::AFString::operator>=(const af::AFString &string) const {
    return this->mString >= string.to_std_string();
}

bool af::AFString::operator<=(const af::AFString &string) const {
    return this->mString <= string.to_std_string();
}

af::AFString &af::AFString::operator=(af::AFString &string) {
    this->mString = string.to_std_string();
    return *this;
}

af::AFString::AFString(const char * string) : mString(string) {
    this->mString = string;
}

af::AFString &af::AFString::operator=(const char * string) {
    this->mString = string;
    return *this;
}

bool af::AFString::is_empty() {
    return this->mString.empty();
}

af::AFString &af::AFString::operator=(const std::string &string) {
    this->mString = string;
    return *this;
}

af::AFString &af::AFString::operator+=(const std::string &string) {
    this->mString += string;
    return *this;
}

bool af::AFString::operator==(const std::string &string) const {
    return this->mString == string;
}

af::AFString af::AFString::operator+(const AFString &string) {
    af::AFString result(this->mString + string.to_std_string());
    return result;
}

af::AFString::AFString(af::AFString &&string) noexcept {
    this->mString = string.mString;
    string.mString.clear();
}

af::AFString &af::AFString::operator=(af::AFString &&string) noexcept {
    this->mString = string.mString;
    string.mString.clear();
    return *this;
}

bool af::AFString::operator==(const char *string) const {
    return this->mString == string;
}


