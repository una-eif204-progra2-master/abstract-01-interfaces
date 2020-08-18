//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef ABSTRACT_01_INTERFACE_IRECORDER_H
#define ABSTRACT_01_INTERFACE_IRECORDER_H


#include "IPlayer.h"

class IRecorder: public IPlayer {
public:
    virtual std::string record() = 0;
};


#endif //ABSTRACT_01_INTERFACE_IRECORDER_H
