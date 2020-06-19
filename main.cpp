#include <iostream>


#include "SDL2/SDL.h"
#include "GL/glut.h"
#include "imgui/imgui.h"

#include <vector>



const int W_HEIGHT = 480;
const int W_WIDTH  = 640;

namespace mgui {



    void sdl_prepare_attr() {
        SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
        SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);
        SDL_GL_SetAttribute(SDL_GL_STENCIL_SIZE, 8);
        SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);


        SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 5);
        SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 6);
        SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 5);

    }


}
int main() {
    std::cout << "... started ..." << std::endl;

    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cerr << "Unable to init SDL: " << SDL_GetError() << std::endl;
        return 1;
    }

    mgui::sdl_prepare_attr();


    SDL_WindowFlags window_flags = (SDL_WindowFlags)(
            SDL_WINDOW_OPENGL
            | SDL_WINDOW_RESIZABLE
            | SDL_WINDOW_ALLOW_HIGHDPI
    );

    atexit(SDL_Quit);


    SDL_DisplayMode current;
    SDL_GetCurrentDisplayMode(0, &current);
    SDL_Window *window = SDL_CreateWindow("Twitter Analysis (ImGui SDL2+OpenGL3)", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL|SDL_WINDOW_RESIZABLE);

    if (window == nullptr){
        std::cerr << "SDL_Create window error " << SDL_GetError() << std::endl;
        return 1;
    }




    SDL_GLContext glcontext = SDL_GL_CreateContext(window);





    std::cout << "... finished ..." << std::endl;



    return 0;
}
