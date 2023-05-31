#include"display.h"

void display::OnRender(){

    SDL_SetRenderDrawColor(renderer, 96,55,0,255);
	SDL_RenderClear(renderer);

    
    game->render(renderer);

    
    SDL_RenderPresent(renderer);
}

