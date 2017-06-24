//
// Created by alirezafour on 6/3/17.
//
#define BOOST_TEST_MODULE AFString Test
#include <boost/test/unit_test.hpp>

#include "../src/AFString.h"

BOOST_AUTO_TEST_CASE(ConstructorandCompareTestCase) {
    af::AFString charString("test");
    af::AFString charString2 = "test";
    af::AFString charString3 = {"test"};
    af::AFString string(charString);
    std::string s{"string"};
    af::AFString stdString(s);
    std::string s2{"string"};
    af::AFString stdString2 = s2;
    af::AFString stdString3 = {s2};
    af::AFString string2 = string;
    af::AFString string3 = {string};

    //comparing object
    BOOST_ASSERT(charString == charString2);
    BOOST_ASSERT(charString == charString3);
    BOOST_ASSERT(charString2 == charString3);

    BOOST_ASSERT(string == charString);

    BOOST_ASSERT(stdString == stdString2);
    BOOST_ASSERT(stdString == stdString3);
    BOOST_ASSERT(stdString2 == stdString3);
}

BOOST_AUTO_TEST_CASE(plusEqualTestCase)
{
    std::string s = "hello";
    af::AFString string1 = "test";
    af::AFString string2 = "test";
    af::AFString string3 = "test";

    //obj += obj
    string1 += string2; // result : testtest
    string2 += string3;// result : testtest
    BOOST_ASSERT(string1 == string2);

    //obt += std::string
    string3 += s;
    s = "test" + s;
    //comparing obj == std::string
    BOOST_ASSERT(string3 == s);
}

BOOST_AUTO_TEST_CASE(PlusTestCases)
{
    af::AFString charString = {"Hello"};
    af::AFString charString2 = {"Hello"};
    af::AFString charString3 = {"Hello"};
    charString = charString + charString2 + charString3;
    charString2 = charString2 + charString2 + charString3;
    BOOST_ASSERT(charString == charString2);
}

BOOST_AUTO_TEST_CASE(charStarsTestCase)
{
    char CC[] = "helo helo helo";
    af::AFString newString = CC;
    BOOST_ASSERT(newString == "helo helo helo");
}