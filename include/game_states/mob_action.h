/**
 * @file mob_action.h
 * @brief Deal with mob movement and combat actions
 */

/*
 *   Copyright 2023 Hélder Gomes, Humberto Gomes, Mariana Rocha, Pedro Pereira
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#ifndef MOB_ACTION_H
#define MOB_ACTION_H

#include <game_states/main_game.h>

void state_main_game_mob_run_ai(entity *mob, state_main_game_data *state);

void state_main_game_mobs_run_ai(state_main_game_data *state);

#endif

