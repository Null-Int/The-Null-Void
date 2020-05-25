//
// Copyright (c) 2020 Camron Huber, Licensed under GNU GPL-3.0-or-later license
//
// See COPYING.md for more details
//

#include "lib/scenes/character_creation/CC.h"
#include "lib/scenes/intro/SC00.h"

using namespace std;
using namespace CC;
using namespace Scene;

int main() {
    // Character creation and intro scene
    CharCr CharCr;
    SC00 SC00;
    CharCr.promptName();
    CharCr.confName();
    SC00.Intro();
}

//
// Copyright (c) 2020 Camron Huber, Licensed under GNU GPL-3.0-or-later license
//
// See COPYING.md for more details
//