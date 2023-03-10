//
// Copyright (c) 2018-2019 Jimmy Lord
//
// This software is provided 'as-is', without any express or implied warranty.  In no event will the authors be held liable for any damages arising from the use of this software.
// Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:
// 1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.

#pragma once

//---- Define constructor and implicit cast operators to convert back<>forth from your math types and ImVec2/ImVec4.
// This will be inlined as part of ImVec2 and ImVec4 class declarations.
#define IM_VEC2_CLASS_EXTRA                                                                 \
        ImVec2(const fw::vec2& f) { x = f.x; y = f.y; }                                      \
        operator fw::vec2() const { return fw::vec2(x,y); }                                   \
        fw::vec2 operator +(const fw::vec2 o) const { return fw::vec2( x + o.x, y + o.y ); }   \
        fw::vec2 operator -(const fw::vec2 o) const { return fw::vec2( x - o.x, y - o.y ); }

#define IM_VEC4_CLASS_EXTRA                                                 \
        ImVec4(const fw::vec4& f) { x = f.x; y = f.y; z = f.z; w = f.w; }    \
        operator fw::vec4() const { return fw::vec4(x,y,z,w); }
