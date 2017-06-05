#include <iostream>
#include "AFString.h"

using namespace std;

int main()
{
    AF::AFString s{"Hello   world"};

    cout << s.to_std_string() << endl;
    for(auto& w : s.to_lower_copy().split())
        cout << w.get_length() << endl;
    //write a complete test function

    return 0;
}