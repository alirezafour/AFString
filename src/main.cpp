#include <iostream>
#include "AFString.h"

using namespace std;

int main()
{
    AF::AFString s{"Hello   world"};
    AF::AFString s1 = "string";
    AF::AFString s2;
    assert(s2.is_empty());
    assert(!s1.is_empty());
    assert(!s.is_empty());
    assert(s == AF::AFString("Hello   world"));
    assert(s == "Hello   world");
    assert(s.to_std_string() == "Hello   world");

    s = s1;
    assert(s == s1);
    cout << s.to_std_string() << endl;
    for(auto& w : s.to_lower_copy().split())
        cout << w.get_length() << endl;
    //write a complete test function

    return 0;
}