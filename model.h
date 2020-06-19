//
// Created by lebllex on 6/18/20.
//

#ifndef INC_09_IMGUI_3_MODEL_H
#define INC_09_IMGUI_3_MODEL_H

#include <deque>
#include <unordered_map>
#include "string"


namespace model{
    struct TimeRange
    {
//        using timestamp = milliseconds;
//
//        timestamp begin;
//        timestamp end;
    };


    struct Model
    {
        struct shared
        {
            std::string url;
            int total = 0;
            std::deque<TimeRange> groups;

            std::deque<int>                              tweetsperminute;
            std::unordered_map<std::string, std::string> sentiment;

        };

    };
}

#endif //INC_09_IMGUI_3_MODEL_H
