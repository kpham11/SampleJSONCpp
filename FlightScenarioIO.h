//
// Created by KEVIN on 11/27/2015.
//

#ifndef SAMPLEJSONCPP_FLIGHTSCENARIOPROCESSOR_H
#define SAMPLEJSONCPP_FLIGHTSCENARIOPROCESSOR_H


#include "IO.h"

class FlightScenarioIO : public IO {
public:

    virtual Json::Value readFile();

    virtual void writeFile(Json::Value value);
};

#endif //SAMPLEJSONCPP_FLIGHTSCENARIOPROCESSOR_H
