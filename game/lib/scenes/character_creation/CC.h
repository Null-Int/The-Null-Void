//
// Copyright (c) 2020 Camron Huber, Licensed under GNU GPLv3 license
//
// See COPYING.md for more details
//

#ifndef TEXT_GAME_CC_H
#define TEXT_GAME_CC_H
#endif //TEXT_GAME_CC_H

#include <iostream>
#include <regex>

#define repeat do
#define until(cond) while(!(cond))

using namespace std;

namespace CC {
    class CharCr {
        string charName;
        string confInput;

    public:
        void promptName() {
            cout << "Enter your character name: ";
            cin >> charName;
            charName[0] = toupper(charName[0]);
        }

        void confName() {
            cout << "Your name is " << charName << ". Would you like to keep this name? [Y/n]: ";
            cin >> confInput;
            confInput[0] = tolower(confInput[0]);
            if (confInput == "n") {
                while (confInput == "n") {
                    promptName();
                    confName();
                    if (confInput == "y") {
                        break;
                    }
                }
            } else if (confInput != "[yn]") {
                cout << "Invalid response, please try again.";
            }
        }
    };
}

//
// Copyright (c) 2020 Camron Huber Some Rights Reserved, Licensed under GNU GPLv3 license
//
// See COPYING.md for more details
//