#ifndef _H_GAMECONTEXT_H_
#define _H_GAMECONTEXT_H_
#include <chrono>

#include "../ecs/entity.hpp"
#include "cocos2d.h"

namespace ecs
{
struct GameContext
{
	static EntityPtr input_p1;
	static std::time_t last_tick_time;
	static cocos2d::Scene* running_scene;

	static uint64_t keybord_bit;
};
} //ecs
#endif

