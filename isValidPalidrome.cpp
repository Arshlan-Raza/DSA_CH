#include <iostream>
#include <string>

using namespace std;

char toLowercase(char c)
{

    if (c >= 'A' && c <= 'Z')
    {
        return c + ('a' - 'A');
    }
    else
    {
        return c;
    }
}

bool isValid(char c)
{

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
    {
        return 1;
    }

    return 0;
}

bool palindrome(string s)
{

    int st = 0;

    int e = s.length() - 1;

    while (st < e)
    {

        if (s[st] != s[e])
        {

            return false;
        }
        else
        {
            st++;
            e--;
        }
    }
}

bool isValidPalindrome(string s)
{

    string temp = "";

    // remove the unnecassary character
    for (int i = 0; i < s.length(); i++)
    {

        if (isValid(s[i]))
        {

            temp.push_back(s[i]);
        }
    }

    for (int i = 0; i < temp.length(); i++)
    {

        temp[i] = toLowercase(temp[i]);
    }

    return palindrome(temp);
}

int main(){

    string n ;

    cout<<"Enter the string :";
    cin>>n;

   cout<<"is Palindrome or not :"<<palindrome(n);
}