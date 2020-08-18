//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef ABSTRACT_01_INTERFACE_IPLAYER_H
#define ABSTRACT_01_INTERFACE_IPLAYER_H

#include <string>

/*
 * Interface of Player
 */
class IPlayer {
public:
    virtual std::string play() = 0;
    virtual std::string stop() = 0;
    virtual std::string pause() = 0;
    virtual std::string reverse() = 0;
};


#endif //ABSTRACT_01_INTERFACE_IPLAYER_H
