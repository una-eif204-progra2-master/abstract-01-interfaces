//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef ABSTRACT_01_INTERFACE_TAPEPLAYER_H
#define ABSTRACT_01_INTERFACE_TAPEPLAYER_H


#include "IRecorder.h"

class TapePlayer: public IRecorder {
public:
    void play() override;
    void stop() override;
    void pause() override;
    void reverse() override;
    void record() override;
};


#endif //ABSTRACT_01_INTERFACE_TAPEPLAYER_H
