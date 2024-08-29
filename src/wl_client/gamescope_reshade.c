/* Generated by wayland-scanner 1.23.0 */

/*
 * Copyright © 2024 Wayne Heaney
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
#include "wayland-util.h"

#ifndef __has_attribute
# define __has_attribute(x) 0  /* Compatibility with non-clang compilers. */
#endif

#if (__has_attribute(visibility) || defined(__GNUC__) && __GNUC__ >= 4)
#define WL_PRIVATE __attribute__ ((visibility("hidden")))
#else
#define WL_PRIVATE
#endif


static const struct wl_interface *gamescope_reshade_types[] = {
	NULL,
	NULL,
};

static const struct wl_message gamescope_reshade_requests[] = {
	{ "destroy", "", gamescope_reshade_types + 0 },
	{ "set_effect", "s", gamescope_reshade_types + 0 },
	{ "enable_effect", "", gamescope_reshade_types + 0 },
	{ "set_uniform_variable", "sa", gamescope_reshade_types + 0 },
	{ "disable_effect", "", gamescope_reshade_types + 0 },
};

static const struct wl_message gamescope_reshade_events[] = {
	{ "effect_ready", "s", gamescope_reshade_types + 0 },
};

WL_PRIVATE const struct wl_interface gamescope_reshade_interface = {
	"gamescope_reshade", 1,
	5, gamescope_reshade_requests,
	1, gamescope_reshade_events,
};

