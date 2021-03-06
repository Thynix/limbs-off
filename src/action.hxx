/*
 * Copyright (C) 2011 Alexander Berntsen <alexander@plaimi.net>
 *
 * This file is part of Limbs Off.
 *
 * Limbs Off is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Limbs Off is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Limbs Off.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ACTION_HXX_
#define ACTION_HXX_

class Action {
public:
    Action();
};

/** NUM_ACTIONTYPE is a length. */
enum ActionType {
    NOTHING,
    LEFT,
    RIGHT,
    JUMP,
    CROUCH,
    FIRE,
    LPUNCH,
    RPUNCH,
    LKICK,
    RKICK,
    SUICIDE,
    NUM_ACTIONTYPE
};

#endif /* ACTION_HXX_ */
