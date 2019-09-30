#include "./TextureManager.h"

SDL_Texture* TextureManager::LoadTexture(const char* filename) {
  SDL_Surface* surface = IMG_Load(filename);
  SDL_Texture* texture = SDL_CreateTextureFromSurface(Game::renderer, surface);
  SDL_FreeSurface(surface);
  return texture;
}

void TextureManager::Draw(SDL_Texture* texture, SDL_Rect sourceRectagle, SDL_Rect destinationRectangle, SDL_RendererFlip flip) {
  SDL_RenderCopyEx(Game::renderer, texture, &sourceRectagle, &destinationRectangle, 0.0, NULL, flip);
}