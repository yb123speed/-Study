#include "SDL2/SDL.h"

int main(int arg, char* args[])
{
    //声明表面
    SDL_Surface* hello;
    SDL_Texture* helloTextTure = NULL;
    SDL_Window *screen = SDL_CreateWindow("My Game Window",
                          SDL_WINDOWPOS_UNDEFINED,
                          SDL_WINDOWPOS_UNDEFINED,
                          640, 480,
                          SDL_WINDOW_FULLSCREEN | SDL_WINDOW_OPENGL);
    SDL_Renderer  * sdlRenderer = SDL_CreateRenderer(screen,- 1,0); 

    //加在图像
    hello = SDL_LoadBMP("hello.bmp");
    helloTextTure = SDL_CreateTextureFromSurface(sdlRenderer,hello);
    SDL_RenderCopy(sdlRenderer,helloTextTure,NULL,NULL);


    //更新窗口
    SDL_RenderPresent(sdlRenderer);

    //暂停
    SDL_Delay(2000);

    //退出SDL
    SDL_Quit();

    printf("hello,world\n");
    return 0;
}