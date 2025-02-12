/*
    SDL_uikit_main.c, placed in the public domain by Sam Lantinga  3/18/2019
*/
//#include "../../SDL_internal.h"
//#include "../SDL/src/SDL_internal.h"

/* Include the SDL main definition header */
#include "SDL_main.h"

#include "SDL.h"
#include "fheroes2.h"

#ifndef SDL_MAIN_HANDLED
#ifdef main
#undef main
#endif

int
main(int argc, char *argv[])
{
    return SDL_UIKitRunApp(argc, argv, fheroes_main);
}
#endif /* !SDL_MAIN_HANDLED */

/* vi: set ts=4 sw=4 expandtab: */
