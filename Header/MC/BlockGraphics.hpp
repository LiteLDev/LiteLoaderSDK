// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BlockGraphics {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKGRAPHICS
public:
    class BlockGraphics& operator=(class BlockGraphics const &) = delete;
    BlockGraphics(class BlockGraphics const &) = delete;
    BlockGraphics() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BLOCKGRAPHICS
#endif
    MCAPI enum BlockShape getBlockShape() const;
    MCAPI struct TextureUVCoordinateSet const & getIconTexture(int) const;
    MCAPI bool isFull() const;
    MCAPI bool isFullAndOpaque() const;
    MCAPI static float const SIZE_OFFSET;
    MCAPI static class BlockGraphics const * getForBlock(class Block const &);
    MCAPI static class BlockGraphics const * getForBlock(class BlockLegacy const &);
    MCAPI static bool isInitialized();
    MCAPI static class std::unordered_map<std::string, class BlockGraphics *, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, class BlockGraphics *>>> mBlockLookupMap;
    MCAPI static std::unique_ptr<class BlockGraphics> mDummyBlock;
    MCAPI static std::vector<std::unique_ptr<class BlockGraphics>> mOwnedBlocks;
    MCAPI static void setAtlasItemManager(class std::shared_ptr<class AtlasItemManager>);

protected:
    MCAPI static class std::weak_ptr<class AtlasItemManager> mTerrainTextureAtlas;

private:
    MCAPI static class std::mutex mBlockModelAccess;
    MCAPI static class std::unordered_map<unsigned int, class BlockGraphics *, struct std::hash<unsigned int>, struct std::equal_to<unsigned int>, class std::allocator<struct std::pair<unsigned int const, class BlockGraphics *>>> mBlocks;
    MCAPI static bool mInitialized;
    MCAPI static class std::map<std::string, std::unique_ptr<struct BlockGeometry::Model>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<struct BlockGeometry::Model>>>> mModels;
    MCAPI static class std::map<std::string, std::unique_ptr<class BlockGeometry::TessellatedModel>, struct std::less<std::string>, class std::allocator<struct std::pair<std::string const, std::unique_ptr<class BlockGeometry::TessellatedModel>>>> mTessellatedModels;

};