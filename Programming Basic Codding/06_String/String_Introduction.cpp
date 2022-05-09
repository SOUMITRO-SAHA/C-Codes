#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    /*
    * *********************** String Declearation and Initialization *************************
    char S[10] = "Hello";
    char S[] = "Hello";
    char S[] = {'H', 'e', 'l', 'l', 'o', '\0'}; // ‘\0’ —→ String delimiter/Null Character/String Terminator.
    char S[] = {65, 66, 67, 68, '\0'};          // ‘\0’ —→ String delimiter/Null Character/String Terminator.
    char S[] = {65, 66, 67, 68, 0};             // 0 —→ String delimiter/Null Character/String Terminator.We can also use "Zero".
    char S[] = {65, 66, 67, 68, 0, 69, 70};     // After '0' the rest will not print.
    char P[] = {65, 66, 67, 68, 69};
    cout << S << endl;
    cout << P << endl;
    char *R = "Hello"; //*! In most of the compiler this is not allowed to conversion From string literal to 'Char*'
    cout<<R<<endl;
    potray
    */
    //* ************* String Functions *************
    /*
    // String to Number
    // ? ------------------ using strtol() function ---------------------
    //? ------------------- and strtof() function -----------------------
    char s1[10] = "234";               // It is a String.
    char s2[10] = "23.54";             // It also a String.
    long int x = strtol(s1, NULL, 10); // creating another variable to store the converter int No.[Here, NULL --> Means '\0'; & 10 --> Is for Decimal System, We can use another Number system]

    float y = strtof(s2, NULL); // Crating variable to store converted float value.
    cout << x << "\n"
         << y << endl;
    // Performing Numerical Operation to check whether is really a Integer & Float.
    cout << "Adding 10 to x -- " << x + 10 << "\n"
         << "Adding 1.3 to y -- " << y + 1.3 << endl;

    // String token function
    //! ----------------- String to Token ------------
    //? ------------- Using Strtok( str1, "=;") function
    char s1[30] = "x = 10;y = 20;z = 35";
    // Directly call the token function
    // cout << strtok(s1, "=;"); // It shows only x.
    char *token = strtok(s1, ";"); // TODO:Taking the Delimiter as " =;" You can change the Delimiters as per required. Let's change the delimiter to " ; "
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, ";"); // TODO: We also have to change to Delimiter in here.
    }
    */
    // ********************************* String Class ***********************************************************
    /*
    # include <string>
    string str;
    cin>>str; // ? It Only takes one Word after any space it will not read.
    getline(cin,str); // ? Thus, we use getline() global function to take multiple words in one go.
    */
    /*
    string str;
    cout << "Enter a String ";
    // cin >> str; // ? It only takes one word.
    getline(cin, str); // ? It will take all the given Strings.
    cout << "You Entered -- " << str << endl;
    cout << "Enter a String ";
    getline(cin, str); // TODO: Can It take multiple values
    cout << "You Entered -- " << str << endl;
    */
    //! ----- String Class Function ------
    /*
    // TODO: str.length() or str.size()
    // string str = "Hello";
    // cout << str.length() << endl;
    // cout << str.size() << endl;
    // cout << str << endl;
    // TODO: str.capacity() --> It will show the total capacity of the Array
    // cout << str.capacity() << endl;
    // TODO: str.resize() --> It will increase the capacity of the Array(Where the Strings are stored)
    // str.resize(50); // The size will increased by 50 [from 15]
    // cout << str.capacity() << endl;
    // TODO: str.max_size() --> It will show what is the maximum size of the String.
    // cout << str.max_size() << endl; // The maximum size is 1073741823.
    // TODO: str.clear() or str.erase() --> It will clear the String.
    // str.clear();
    // str.erase();
    // cout << str << endl;          // Nothing is printing. Let's Check the length of the string.
    // cout << str.length() << endl; //----> Here, The length is " Zero "
    // TODO: str.empty() --> To check whether the String is empty or not.
    // if (str.empty())
    // {
    // cout << "String is Empty." << endl;
    // ? It will show that the String is Empty because of str.clear() function. Disable is to chechk whether is works or not.
    // }
    // else
    // cout << "Sting is " << str << endl;
    // TODO: str.append("String_here") --> Added at the end.
    // str.append(" World.");
    // cout << str << endl;

    // TODO:str.insert(3,"KK") --> Insert "KK" at the Index 3.
    // str.insert(3, "KK");
    // cout << str << endl;
    // ? If you want to  insert only 3 latter from a work you can do it.
    // string s1 = "How  you ?";
    // s1.insert(4, "Areyanth", 3); // Here, the last 3 is for how many word you want to insert from a given word.
    // cout << s1 << endl;
    // TODO: s.replace(3,5,"aa")
    // string s3 = "Programming";
    // s3.replace(3, 4, "KK");
    // s3.replace(3, 6, "X");
    // cout << s3 << endl;
    // TODO:s.push_back('z') // ---> It will insert a single character at the end of the string."It only for One Character "
    // s3.push_back('X');
    // cout << s3 << endl;
    // TODO:s.pop_back() ---> It will take back last character from the String.
    // s3.pop_back();
    // cout << s3 << endl;
    // TODO:s1.swap(s2)
    // string s4 = "Language";
    // s3.swap(s4);
    // cout << "It is s3 " << s3 << endl;
    // cout << "It is s4 " << s4 << endl;
    // TODO: s.copy( char distance[])
    string s5 = "Welcome";
    char strForStoring[20];
    // s5.copy(strForStoring, s5.length());
    s5.copy(strForStoring, 3);
    cout << strForStoring << endl;
    // TODO: s.find(str or char) ---> It will find a String/Character,If the string is not found in the String then it will give -1 or, max_size of the string.
    cout << s5.find("come") << endl;
    cout << s5.find("l") << endl;
    cout << s5.find("k") << endl; //? It will give some larger value. as k in not in s5 string.
    // TODO: s.rfind(str) ---> It will find the given String/Character from right to left.
    // TODO: s.find_first_of() & s.find_last_of()
    cout << s5.find_first_of('l') << endl;
    cout << s5.find_first_of("le") << endl;//? Here, "le" is not a String it will act as an individual character. Any one of them founded first will show the Index.
    cout << s5.find_first_of('e', 3) << endl; //? Here, the search will start from 3 onward. So it will skip the first 'e'.

    // TODO: s.substr(start,number) ---> It will extract a part of a string.
    string strP = "Programming";
    cout << strP.substr(3) << endl;
    cout << strP.substr(3, 4) << endl; //---> It will give sub-string onward index 3.& 4 => Number of character want in sub-string.
    // TODO: s.compare(str)
    //* ========= First Case =============
    //* [When s1 = s2 ]
    string strFirst = "Hello";
    string strSecond = "Hello";
    cout << strFirst.compare(strSecond) << endl;
    //* ========= Second Case ============
    //* [When s1 > s2 ]
    string str3 = "Hello";
    string str4 = "Apple";
    cout << str3.compare(str4) << endl;
    //* ========= Third Case =============
    //* [When s1 < s2 ]
    string str5 = "Hello";
    string str6 = "hello";
    cout << str5.compare(str6) << endl;

    //* ========== String Operators ==============
    /*
    at() --> You would find a letter at a given index.
    front() --> It will gives the first character of a String
    back() --> It will gives the last character of a String
    []
    +
    =

    // TODO: at() or []
    string strForAt = "Holiday";
    cout << strForAt.at(4) << endl;
    cout << strForAt[4] << endl;
    strForAt[4] = 'X';
    cout << strForAt << endl;
    // TODO: front() and back()
    // TODO: + --> For Concatenation
    string strForConcat1 = "Hello";
    string strForConcat2 = "World";
    string strForConcat3 = strForConcat1 + strForConcat2;
    string strForConcat4 = strForConcat1 + "World!";
    cout << strForConcat3 << endl;
    cout << strForConcat4 << endl;
    // TODO: = --> Str1 = Str2; The content of first string will copied to string 2.
    */
    // * ========== Class String-Iterator ====================
    /*
    string::iterator
    begin()
    end()
    revrse_iterator
    rbegin()
    rend()
    */
    // TODO: Using Iterator via For - loop .
    string str = "today";
    string::iterator it;
    // it = str.begin();
    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }
    cout << endl;
    // TODO: Converting To Upper Case.
    for (it = str.begin(); it != str.end(); it++)
    {
        *it -= 32;
    }
    cout << str;
    cout << endl;

    // TODO: Accessing Iterator via for-loop Array.
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    cout << endl;
    // TODO: Reversing the String.
    string::reverse_iterator rit;
    for (rit = str.rbegin(); rit != str.rend(); rit++)
    {
        *rit += 32; //---> It's for converting Upper Case to Lower Case.
        cout << *rit;
    }

    return 0;
}