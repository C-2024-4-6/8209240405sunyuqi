#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void count(const string& s, int counts[]) {
    for (char c : s) {
        if (std::isalpha(c)) {
            char lowerChar = tolower(c);
            counts[lowerChar - 'a']++;
        }
    }
}

int main()
{
    string str;
    int counts[26] = { 0 };

    cout << "Enter a string: ";
    getline(std::cin, str);

    count(str, counts);

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            std::cout << static_cast<char>('a' + i) << ": " << counts[i] << " times\n";
        }
    }
    return 0;
}