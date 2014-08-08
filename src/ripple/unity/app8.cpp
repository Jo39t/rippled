//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================

#include <BeastConfig.h>

#include <ripple/unity/app.h>

#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable: 4309) // truncation of constant value
#endif

#include <ripple/module/rpc/ErrorCodes.h>

#include <ripple/module/app/paths/Node.cpp>
#include <ripple/module/app/paths/PathRequest.cpp>
#include <ripple/module/app/paths/PathRequests.cpp>
#include <ripple/module/app/paths/PathState.cpp>
#include <ripple/module/app/paths/RippleCalc.cpp>
#include <ripple/module/app/paths/cursor/AdvanceNode.cpp>
#include <ripple/module/app/paths/cursor/DeliverNodeForward.cpp>
#include <ripple/module/app/paths/cursor/DeliverNodeReverse.cpp>
#include <ripple/module/app/paths/cursor/ForwardLiquidity.cpp>
#include <ripple/module/app/paths/cursor/ForwardLiquidityForAccount.cpp>
#include <ripple/module/app/paths/cursor/Liquidity.cpp>
#include <ripple/module/app/paths/cursor/NextIncrement.cpp>
#include <ripple/module/app/paths/cursor/ReverseLiquidity.cpp>
#include <ripple/module/app/paths/cursor/ReverseLiquidityForAccount.cpp>
#include <ripple/module/app/paths/cursor/RippleLiquidity.cpp>

#include <ripple/module/app/main/ParameterTable.cpp>
#include <ripple/module/app/paths/RippleLineCache.cpp>
#include <ripple/module/app/ledger/SerializedValidation.cpp>

#ifdef _MSC_VER
#pragma warning (pop)
#endif