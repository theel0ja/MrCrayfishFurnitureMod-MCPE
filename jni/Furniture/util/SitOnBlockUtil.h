#pragma once
class BlockSource;
class BlockPos;
class Player;

struct SitOnBlockUtil {
	static bool sit(BlockSource&, const BlockPos&, Player&, float);
	static bool canSit(BlockSource&, const BlockPos&, Player&);
};

