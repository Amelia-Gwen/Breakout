//
// Created by Andar on 7/10/2020.
//

#ifndef BREAKOUT_BREAKOUT_H
#define BREAKOUT_BREAKOUT_H

#include <SFML/Graphics.hpp>

namespace breakout {
    class Breakout {
    public:
        void run();
    private:
        sf::RenderWindow window{sf::VideoMode(800, 600), "Breakout 3D"};
    };
}


#endif //BREAKOUT_BREAKOUT_H
