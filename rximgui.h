//
// Created by lebllex on 6/18/20.
//

#ifndef INC_09_IMGUI_3_RXIMGUI_H
#define INC_09_IMGUI_3_RXIMGUI_H

#include "imgui/imgui.h"

namespace rximgui{
    inline float Clamp(float v, float mn, float mx){
        return (v < mn) ? mn : (v > mx) ? mx : v;
    }

    inline ImVec2 Clamp (const ImVec2& f, const ImVec2& mn, ImVec2 mx) {
        return ImVec2(Clamp(f.x, mn.x, mx.x), Clamp(f.y, mn.y, mx.y));
    }

//    subjects::subject<int> framebus;  // who is it

//    auto frameout = framebus.get_subscriber();

    auto sendframe = [] () {
//        frameout.on_next(1);
    };

//    auto frames = framebus.get_observable();

//    schedulers::run_loop rl;

}


#endif //INC_09_IMGUI_3_RXIMGUI_H
