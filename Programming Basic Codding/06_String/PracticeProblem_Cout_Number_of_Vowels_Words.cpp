/*
Count Number of Vowels, Consonants & Words
vowel += 1;
space += 1;
consonant += 1;
* to find how many words are there we have to count how many spaces are there and and 1 to that no.
* and for finding vowel and consonant we have to consider both upper case as well as lower case.
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string str = "How Many Worlds";
    // Converting this Program For taking user input to count how many Consonants, Vowel & Word are there.
    string str;
    cout << "Enter a sentence -- ";
    getline(cin, str);
    int vowel = 0;
    int consonant = 0;
    int spaces = 0;
    char sp = "  ";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else if (str[i] == ' ')
        {
            spaces++;
        }
        else
        {
            consonant++;
        }
    }
    cout << "Vowels  " << vowel << endl
         << "Consonants  " << consonant << endl
         << "Number of Words  " << spaces + 1 << endl;
}