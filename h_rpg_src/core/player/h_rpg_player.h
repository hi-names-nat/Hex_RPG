//
// Created by natalie on 5/4/25.
//

#ifndef H_RPG_PLAYER_H
#define H_RPG_PLAYER_H

#include <godot_cpp/classes/character_body2d.hpp>

namespace godot
{
    class H_RPG_Player : public CharacterBody2D
    {
        GDCLASS(H_RPG_Player, CharacterBody2D)
    private:

    protected:
        static void _bind_methods();

    public:
        H_RPG_Player();
        ~H_RPG_Player();

        void _init();
        void _process(double delta);
        void _physics_process(double delta);

    };
}

#endif //H_RPG_PLAYER_H
