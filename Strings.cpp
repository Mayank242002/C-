/*#include <iostream>
using namespace std;

int main()
{
    string s = "hello";
    cout << s << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    char s[50];
    cout << "enter name" << endl;
    cin.get(s, 50); //or cin.getline(s,50);(cin.getline end at the /n)
    cout << s << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
    char s[50];
    char s2[50];
    cout << "enter name" << endl;
    cin.get(s, 50);
    cout << s << endl;
    cin.ignore(); //for eating newline charcter
    cout << "enter name again" << endl;
    cin.get(s2, 50);
    cout << s2 << endl;
    return 0;
}*/

/*#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[50] = "eood";
    char s2[50] = "good";

    cout << strcmp(s, s2) << endl; //strcmp returns 0 if equal ,-ive diff if small,+ve diff if greater
    //strcat(s, s2); //strncat
    //cout << s << endl;

    return 0;
}*/

/*#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[50] = "goodmorningboy";
    char s2[50] = "morning";

    cout << strstr(s, s2) << endl;

    return 0;
}*/

/*#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[50] = "programming";

    cout << strrchr(s, 'r') << endl;

    return 0;
}*/

/*#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[50] = "235";
    char s2[50] = "78.90";

    cout << strtol(s, nullptr, 10) + 10 << endl; //converts string into long integer

    cout << strtof(s2, nullptr) - 0.90 << endl; //converts string into float

    return 0;
}*/

/*#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[50] = "x=10;y=20;z=30";
    char *token = strtok(s, "?");
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, "?");
    }

    return 0;
}*/

/***********************************************  STRING CLASS and some functions ********************************************************/

/*
   1.s.clear()
   2.s.empty()
   3.s.length()
   4.s.size()
   5.s.capacity()
   6.s.resize()
   7.s.max_size()
   8.s.size()
   9.s.append()
   10.s.insert()
   11.s.replace()
   12.s.erase()
   13.s.push_bacK('a')
   14.s.pop_back()
   15.s.swap()
   16.s.copy(char des[],no of character you wnat to copy in char array)
   17.s.find(char or str)
   18.s.rfind(char or str)        //it gives index form righthandside
   19.s.find_first_of()
   20.s.find_last_of()
   21.s.compare(str)
   22.s.substr(start,end)
   */

/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    s.clear(); //clears the contents of the string
    if (s.empty())
    {
        cout << "true";
    }
    else
        cout << "fasle4";
    cout << s << endl;
    cout << s.capacity() << endl;
    cout << s.max_size() << endl; //gives maximum size that a compiler can give

    s.resize(30); //to hcnage capapcity

    cout << s.length() << endl; //or s.size()
    cout << s.capacity() << endl;

    return 0;
}*/
/******************************************** some more FUNCTIONS OF STRING CLASS ***************************************/

/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "programming";
    char str[20];
    string s2 = "programming";
    //s.append("world");
    //s.insert(2, "okji", 3);
    //s.replace(2, 4, "ok");
    // s.erase();
    //s.push_back('h');
    //s.pop_back();
    //s.swap(s2);
    //s.copy(str, 4);
    //str[4] = '\0';
    //cout << str << endl;
    //cout << s2 << endl;
    //cout << s.rfind('m') << endl;
    //cout << s.find_first_of('m', 7) << endl; //it starts looking for fisrt match from index 7
    //cout << s.find_last_of('m') << endl;
    //cout << s.substr(2, 7) << endl;
    cout << s.compare(s2) << endl;
    return 0;
}*/

/************************************ OPERATORS  FOR STRING CLASS **************************************************/
/*
1.s.at(index)     //similar to the []
2.s.front()
3.s.back()
4.[]
5.+   //concatation
6.str1=str2         //contents of the str2 will be copied to the str1

*/

/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "programming";
    string s2 = "programming";
    //s.at(4) = 'm';
    s[4] = 'm';
    cout << s << endl;
    cout << s + " hello" << endl;
    s2 = s;
    cout << s2 << endl;
    return 0;
}*/

/******************************** STRINGS ITETRATORS *******************************************/

/*#include <iostream>
#include <string>
using namespace std;

//accessing string using iterators

int main()
{
    string s = "programming";
    string::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        cout << (*it = *it - 32) << " ";
    }
    string::reverse_iterator ir;
    for (ir = s.rbegin(); ir != s.rend(); ir++)
    {
        cout << (*ir) << " ";
    }

    //acccessing string using for loop
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] - 32;
        cout << s[i] << " ";
    }
    return 0;
}*/

/*#include <iostream>
using namespace std;

//program for finding length of a string using for loop


int main()
{

    string str = "welcome";
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout << "length is " << count << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

//program for finding length of a string using string iterator


int main()
{

    string str = "welcome";
    string::iterator it;
    int count = 0;
    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
    }
    cout << "length is" << count << endl;
    return 0;
}
*/

/*#include <iostream>
using namespace std;

//program for changing cases of letters


int main()
{

    string str = "WeLcome";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }
    cout << str << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

//program for change cases to upper case only

int main()
{

    string str = "wELcoMe7";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    cout << str << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

//program for count vowels consonant and words

int main()
{
    string str = "    how     many  words";
    int vowels = 0, consonant = 0, space = 0;
    int i = 0;
    if (str[i] == ' ')
    {
        while (str[i] == ' ')
            i++;
    }
    while (str[i] != '\0')
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowels++;
            i++;
        }
        else if (str[i] == ' ')
        {
            while (str[i] == ' ')
                i++;
            space++;
        }
        else
        {
            consonant++;
            i++;
        }
    }
    cout << "vowels " << vowels << endl;
    cout << "consonant " << consonant << endl;
    cout << "words " << ++space << endl;
    return 0;
}*/

/*#include <iostream>
using namespace std;

//program for reverse a string and check a string is a palidrome


/*int main()
{
    string str = "MADAM";
    string rev = "";
    int len = (int)str.length();
    rev.resize(len);
    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[i] = str[j];
    }
    rev[len] = '\0';
    if (str.compare(rev) == 0)
        cout << "palindrome" << endl;
    else
        cout << "not a pallindrome" << endl;
    return 0;
}*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s = "msngi24july@gmail.com";

    cout << s.find('@') << endl;
    cout << s.substr(0, 11) << endl;
    return 0;
}