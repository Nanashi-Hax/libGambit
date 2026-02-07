#include "Gambit/Game/PlayerMgr.hpp"
#include <Hook.hpp>

namespace Library::Gambit
{

namespace Game
{
    Player* PlayerMgr::getPerformerAt(int index)
    {
        return original_getPerformerAt(this, index);
    }

    int PlayerMgr::getControlledPerformerIdx()
    {
        return original_getControlledPerformerIdx(this);
    }
}

}