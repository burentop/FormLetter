//
//  main.cpp
//  FormLetter
//
//  Created by Brent Perry on 7/3/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    cout << "Please enter the name of the person you want to write to: ";
    string first_name;
    string friend_name;
    char friend_sex {0};
    int age;
    cin >> first_name;
    cout << "Please enter the age of the person: ";
    cin >> age;
    cout << "Please type the name of another friend: ";
    cin >> friend_name;
    cout << "Enter a 'm' if that friend is male, and 'f' if female: ";
    cin >> friend_sex;
    
    cout << "Dear " << first_name << ",\n";
    cout << "\tHow are you? I am fine. I miss you.\n";
    cout << "I have decided to learn C++.\n";
    cout << "Have you seen " << friend_name << " lately?\n";
    if (friend_sex == 'm') {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    } else if (friend_sex == 'f')
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if (age <= 0 || age >= 110)
        simple_error(" You're kidding!");
    if (age < 12)
        cout << "Next year you will be " << age++ << ".\n";
    else if (age == 17)
        cout << "Next year you will be able to vote.\n";
    else if (age > 70)
        cout << "I hope you are enjoying retirement.\n";
    cout << "Yours sincerely,\n\n\nBrent\n";
}
