//
// Created by Maikol Guzman on 8/17/20.
//

#include <iostream>
#include "TapePlayer.h"

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)" << std::endl;

    TapePlayer tapePlayer;

    tapePlayer.play();
    tapePlayer.stop();
    tapePlayer.pause();
    tapePlayer.reverse();
    tapePlayer.record();

    // IPlayer iPlayer; // Error because it's an abstract class

    // using pointers it's possible to associate the implementation, because the Pointer not create the instance
    IPlayer *player;
    player = &tapePlayer;
    player->play();

    return 0;
}