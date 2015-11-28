//
// Created by KEVIN on 11/27/2015.
//

#ifndef SAMPLEJSONCPP_PROCESSOR_H
#define SAMPLEJSONCPP_PROCESSOR_H

#include <iostream>
#include <json.h>
#include <fstream>

class IO {
    public:
        virtual ~IO() {}
        virtual Json::Value readFile() = 0;
        virtual void writeFile(Json::Value) = 0;
};


#endif //SAMPLEJSONCPP_PROCESSOR_H
