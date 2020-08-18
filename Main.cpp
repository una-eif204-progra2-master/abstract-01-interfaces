//
// Created by Maikol Guzman on 8/17/20.
//

#include "TapePlayer.h"

int main() {
    TapePlayer tapePlayer;

    tapePlayer.play();
    tapePlayer.stop();
    tapePlayer.pause();
    tapePlayer.reverse();
    tapePlayer.record();

    // using pointers it's possible to associate the implementation.
    IPlayer *player;
    player = &tapePlayer;
    player->play();

    return 0;
}