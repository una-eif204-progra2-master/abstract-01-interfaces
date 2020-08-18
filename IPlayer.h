//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef ABSTRACT_01_INTERFACE_IPLAYER_H
#define ABSTRACT_01_INTERFACE_IPLAYER_H

/*
 * Interface of Player
 */
class IPlayer {
public:
    virtual void play() = 0;
    virtual void stop() = 0;
    virtual void pause() = 0;
    virtual void reverse() = 0;
};


#endif //ABSTRACT_01_INTERFACE_IPLAYER_H
