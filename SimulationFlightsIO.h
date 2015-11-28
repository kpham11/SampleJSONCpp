//
// Created by KEVIN on 11/27/2015.
//

#ifndef SAMPLEJSONCPP_SIMULATIONFLIGHTSIO_H
#define SAMPLEJSONCPP_SIMULATIONFLIGHTSIO_H

#include "IO.h"

class SimulationFlightsIO : public IO {
public:

    virtual Json::Value readFile();

    virtual void writeFile(Json::Value value);
};


#endif //SAMPLEJSONCPP_SIMULATIONFLIGHTSIO_H
