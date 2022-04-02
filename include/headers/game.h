#ifndef SNAKE_GAME_H
#define SNAKE_GAME_H

class Graphics;

class Game {
public:
    Game();
    ~Game();
private:
    void game_loop();
    void draw(Graphics &graphics);
    void update(float elapsed_time);
};

#endif