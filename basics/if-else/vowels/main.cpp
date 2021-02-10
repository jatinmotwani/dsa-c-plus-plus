#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;
    int isLowerCaseVowel = (c == 'a'||c== 'e'||c == 'i'||c=='o'||c=='u');
    int isUpperCaseVowel = (c == 'A'||c== 'E'||c == 'I'||c=='O'||c=='U');
    if(isLowerCaseVowel || isUpperCaseVowel){
        cout << "It is vowel" << endl;
    }else{
        cout << "It is consonant" << endl;
    }
    return 0;
}
