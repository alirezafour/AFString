//
// Created by alirezafour on 6/3/17.
//
#define BOOST_TEST_MODULE AFString Test
#include <boost/test/unit_test.hpp>

#include "../src/AFString.h"

BOOST_AUTO_TEST_CASE(ConstructorCheckAndCoperativeOperator)
{
    AF::AFString charString("test");
    AF::AFString charString2 = "test";
    AF::AFString charString3 = {"test"};
    AF::AFString string(charString);
    std::string s {"string"};
    AF::AFString stdString(s);
    std::string s2  {"string"};
    AF::AFString stdString2 = s2;
    AF::AFString stdString3 = {s2};
    AF::AFString string2 = string;
    AF::AFString string3 = {string};

    //comparing object
    BOOST_ASSERT(charString == charString2);
    BOOST_ASSERT(charString == charString3);
    BOOST_ASSERT(charString2 == charString3);

    BOOST_ASSERT(string == charString);

    BOOST_ASSERT(stdString == stdString2);
    BOOST_ASSERT(stdString == stdString3);
    BOOST_ASSERT(stdString2 == stdString3);

    //obj += obj
    charString += charString2; // result : testtest
    charString2 += charString3;// result : testtest
    BOOST_ASSERT(charString == charString2);

    //obt += std::string
    charString3 += s;
    s = "test" + s;
    //comparing obj == std::string
    BOOST_ASSERT(charString3 == s);



}
