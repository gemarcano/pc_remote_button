// SPDX-License-Identifier: GPL-2.0-or-later OR LGPL-2.1-or-later
// SPDX-FileCopyrightText: Gabriel Marcano, 2023
/// @file

#ifndef SWITCH_H_
#define SWITCH_H_

#include <pico/stdlib.h>

namespace pc_remote_button
{
	template<int GPIOn>
	class pc_switch
	{
	public:
		pc_switch(bool init_state);
		void set(bool state);
		bool get() const;
		void toggle();
	};
}

#include "switch.ipp"

#endif//SWITCH_H_
