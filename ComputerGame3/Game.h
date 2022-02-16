#pragma once

#include <string>
#include <utility>
#include <vector>

using Position = std::pair<unsigned int, unsigned int>;
using GameState = std::vector<std::string>;
using Obsticles = std::vector<Position>;

constexpr unsigned int LEN_X = 5;
constexpr unsigned int LEN_Y = 5;
constexpr Position START = {0, 0};
constexpr Position GOAL = {LEN_X - 1, LEN_Y - 1};

enum class ConsoleInput : int
{
    LEFT = 0,
    RIGHT = 1,
    UP = 2,
    DOWN = 3,
    INVALID = 4
};

ConsoleInput map_user_input(char user_input);

GameState update_game_state(const Position &player, const Obsticles &obsticles);

void print_game_state(const GameState &game_state);

Position execute_move(Position player, ConsoleInput move);

bool is_finished(Position player);

bool is_dead(const Position &player, const Obsticles &obsticles);

unsigned int random_unit(const unsigned int lower, const unsigned int upper);

Position random_position(const unsigned int lower_x,
                         const unsigned int upper_x,
                         const unsigned int lower_y,
                         const unsigned int upper_y);


void game();
