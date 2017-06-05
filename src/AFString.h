//
// Created by alirezafour on 6/2/17.
//

#ifndef SAMPLESTESTCODE_AFSTRING_H
#define SAMPLESTESTCODE_AFSTRING_H

#include <string>
#include <boost/algorithm/string.hpp>
#include <vector>

namespace AF {


    class AFString {
        std::string mString;

    public:
        //constructors and destructors
        /**
         * Default Constructor for Creating empty sting
         */
        AFString();
        /**
         * Creating string with a std string like this AF::AFString s = "test";
         *
         */
        AFString(const std::string &);
        /**
         * You can create a string from another string like this
         * AF::AFString s = {" some thing"}; AFString s2 = s;
         */
        AFString(const AFString &);
        /**
         * You can create a string from a char *
         */
        AFString(const char *);
        /**
         * The empty distructor
         */
        virtual ~AFString();

        //methods
        /**
         *
         * @return lower case of the string
         */
        virtual AFString to_lower_copy() const;
        /**
         * This method use to split the string to words and return a vector of the string
         * @param Delimiter you can choose how to split the default delimiter is spaces
         * @return A vector of the AF::AFString that have all the words in it
         */
        virtual std::vector<AFString> split(const std::string& delimiter = " ") const;
        /**
         * The length ( size ) of the string that you stored
         * @return The length of the string
         */
        virtual size_t get_length() const;
        /**
         *
         * @return The std::string version of the string
         */
        virtual std::string to_std_string() const;
        /**
         *
         * @return return true if string is empty
         */
        virtual bool is_empty();

        //operators
        /**
         * Whenever you want to save another string into the string you call this like this :
         * AF::AFString s = "hi";
         * AF::AFString s2 = "";
         * s2 = s;
         *
         * @return The left side of the operator in case you can use this more than once like this s = s1 = s2;
         */
        virtual AFString &operator = (AFString &);
        /**
         * Whenever you set a char * to a string you call this operator
         * @return The pointer to the object
         */
        virtual AFString &operator = (const char *);
        /**
         * Whenever you set a std::string to the string you call this
         * @return The pointer to the object
         */
        virtual AFString &operator = (std::string &);
        /**
         * Whenever you want to add to the string with += operator you call this
         * @return The pointer to the object
         */
        virtual AFString &operator += (AFString &);
        /**
         * Whenever you want to add std::string to the string with += operator you call this
         * @return The pointer to the object
         */
        virtual AFString &operator += (std::string &);

        //comparison operators
        /**
         * Whenever you want to compare two string and understand that they are equal or not you use this operator
         * @return It return true when they are equal
         */
        virtual bool operator == (const AFString & ) const;
        /**
         * Whenever you want to compare a string with std::string and understand that they are equal or not you use this operator
         * @return It return true when they are equal
         */
        virtual bool operator == (const std::string & ) const;
        /**
         * Whenever you want to compare two string and understand that they are equal or not you use this operator
         * @return It return true when they are not equal
         */
        virtual bool operator != (const AFString & ) const;
        /**
         * Whenever you want to compare two string and understand that the left side is bigger or not you use this operator
         * @return It return true when the left side is bigger
         */
        virtual bool operator > (const AFString & ) const;
        /**
         * Whenever you want to compare two string and understand that the right side is bigger or not you use this operator
         * @return It return true when the right side is bigger
         */
        virtual bool operator < (const AFString & ) const;
        /**
         * Whenever you want to compare two string and understand that the left side is bigger and equal or not  you use this operator
         * @return It return true when the left side is bigger or equal
         */
        virtual bool operator >= (const AFString & ) const;
        /**
         * Whenever you want to compare two string and understand that the right side is bigger and equal or not  you use this operator
         * @return It return true when the right side is bigger or equal
         */
        virtual bool operator <= (const AFString & ) const;
    };

}
#endif //SAMPLESTESTCODE_AFSTRING_H
