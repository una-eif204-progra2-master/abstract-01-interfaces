//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef ABSTRACT_01_INTERFACE_TAPEPLAYER_H
#define ABSTRACT_01_INTERFACE_TAPEPLAYER_H


#include "IRecorder.h"

class TapePlayer: public IRecorder {
public:
    std::string play() override;
    std::string stop() override;
    std::string pause() override;
    std::string reverse() override;
    std::string record() override;
};


#endif //ABSTRACT_01_INTERFACE_TAPEPLAYER_H
