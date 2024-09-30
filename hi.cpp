#include <iostream>
#include <cctype>
#include <cassert>

using namespace std;

int strcmp_ci(string s1, string s2) {
    int s1_ascii;
    int s2_ascii;
    int s1_length = s1.length();
    int s2_length = s2.length();
    int length = 0;

    if(s1 > s2) {
        length = s2_length;
    } else {
        length = s1_length;
    }

    for(int i = 0; i < length; i++) {
        s1_ascii = tolower(s1[i]);
        s2_ascii = tolower(s2[i]);
        cout << s1_ascii << endl;
        cout << s2_ascii << endl;

        // cout << s1 << endl;
        // cout << s2 << endl;

    if(s1_ascii > s2_ascii) {
        //Hi and h are both h and h at this point
        return 1;
    }

    if(s1_ascii < s2_ascii) {
        return -1;
    }
    }
    return 0;
}

int main() {
    // string str1 = "Hi";
    // string str2 = "hi";
    // int compare = strcmp_ci(str1, str2);
    cout << strcmp_ci("Hi" , "h") << endl;
    assert(strcmp_ci("Hi", "h") == 1);
    assert(strcmp_ci("Hi", "hi") == 0);
    assert(strcmp_ci("Hi", "hello") == 1);

    return 0;
}