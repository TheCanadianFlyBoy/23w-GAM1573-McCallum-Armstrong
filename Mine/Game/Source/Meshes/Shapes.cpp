//
// Copyright (c) 2022 Jimmy Lord
//
// This software is provided 'as-is', without any express or implied warranty.  In no event will the authors be held liable for any damages arising from the use of this software.
// Permission is granted to anyone to use this software for any purpose, including commercial applications, and to alter it and redistribute it freely, subject to the following restrictions:
// 1. The origin of this software must not be misrepresented; you must not claim that you wrote the original software. If you use this software in a product, an acknowledgment in the product documentation would be appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.

#include "Framework.h"

#include "VertexFormats.h"
#include "Shapes.h"

//=======================
// Triangle
//=======================
static const VertexFormat_PosColor g_TriangleVerts[] =
{
    { vec2( 0.0f, 0.5f), 255, 0, 0, 255 }, // Top
    { vec2(-0.5f,-0.5f), 0, 255, 0, 255 }, // Bottom-left
    { vec2( 0.5f,-0.5f), 0, 0, 255, 255 }, // Bottom-right
};
static const uint16 g_TriangleIndices[] =
{
    0, 2, 1,
};
fw::Mesh* CreateTriangleMesh()
{
    return new fw::Mesh( VertexFormat_PosColor::format, g_TriangleVerts, sizeof(g_TriangleVerts), g_TriangleIndices, sizeof(g_TriangleIndices) );
}
//=======================
// Star David
//=======================
static const VertexFormat_PosColor g_StarDavidVerts[] =
{
    { vec2(0.0f, 1.f), 255, 0, 0, 255 },  // Top
    { vec2(-1.f,-0.5f), 0, 255, 0, 255 }, // Bottom-left
    { vec2(1.f,-0.5f), 0, 0, 255, 255 },  // Bottom-right
    { vec2(1.f,0.5f), 255, 0 , 0, 255},   // Top-left
    { vec2(-1.f,0.5f), 255, 0 , 0, 255},  // Top-right
    { vec2(0.0f, -1.f), 255, 0, 0, 255 }, // Bottom
};
static const uint16 g_StarDavidIndicies[] =
{
    0, 2, 1, 3, 5, 4
};
fw::Mesh* CreateStarDavidMesh()
{
    return new fw::Mesh(VertexFormat_PosColor::format, g_StarDavidVerts, sizeof(g_StarDavidVerts), g_StarDavidIndicies, sizeof(g_StarDavidIndicies));
}


//=======================
// Square
//=======================
static const VertexFormat_PosColor g_SquareVerts[] =
{
    { vec2(-0.5f,-0.5f), 0,   0, 0, 255 }, // Bottom-left
    { vec2( 0.5f,-0.5f), 0,   0, 0, 255 }, // Bottom-right
    { vec2(-0.5f, 0.5f), 0, 255, 0, 255 }, // Top-left
    { vec2( 0.5f, 0.5f), 0, 255, 0, 255 }, // Top-right
};
static const uint16 g_SquareIndices[] =
{
    1,2,3, 1,0,2
};
fw::Mesh* CreateSquareMesh()
{
    return new fw::Mesh( VertexFormat_PosColor::format, g_SquareVerts, sizeof(g_SquareVerts), g_SquareIndices, sizeof(g_SquareIndices) );
}

//=======================
// Sprite Inverted
//=======================
static const VertexFormat_PosUV g_InvertedSpriteVerts[] =
{
    { vec2(-0.5f,-0.5f), vec2(1,1) }, // Bottom-left
    { vec2(0.5f,-0.5f), vec2(0,1) }, // Bottom-right
    { vec2(-0.5f, 0.5f), vec2(1,0) }, // Top-left
    { vec2(0.5f, 0.5f), vec2(0,0) }, // Top-right
};
//=======================
// Sprite
//=======================
static const VertexFormat_PosUV g_SpriteVerts[] =
{
    { vec2(-0.5f,-0.5f), vec2(0,0) }, // Bottom-left
    { vec2( 0.5f,-0.5f), vec2(1,0) }, // Bottom-right
    { vec2(-0.5f, 0.5f), vec2(0,1) }, // Top-left
    { vec2( 0.5f, 0.5f), vec2(1,1) }, // Top-right
};
static const uint16 g_SpriteIndices[] =
{
    1,2,3, 1,0,2
};
fw::Mesh* CreateSpriteMesh()
{
    return new fw::Mesh( VertexFormat_PosUV::format, g_SpriteVerts, sizeof(g_SpriteVerts), g_SpriteIndices, sizeof(g_SpriteIndices) );
}

fw::Mesh* CreateInvertedSpriteMesh()
{
    return new fw::Mesh(VertexFormat_PosUV::format, g_InvertedSpriteVerts, sizeof(g_InvertedSpriteVerts), g_SpriteIndices, sizeof(g_SpriteIndices));
}