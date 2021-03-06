#pragma once

#include "BlockRenderer.h"

#include "MCPE/world/level/block/Block.h"
#include "MCPE/world/level/BlockSource.h"
#include "MCPE/client/renderer/block/BlockTessellator.h"
#include "MCPE/world/level/BlockPos.h"

#include <map>
#include <sstream>

class RenderDispatcher {
public:
	static std::map<int, BlockRenderer*> rendererMap;
	static void registerRenderer(int, BlockRenderer*);
	static bool dispatch(int, const BlockPos&, Block&, BlockTessellator*);
};
