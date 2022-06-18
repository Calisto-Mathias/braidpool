/**
 * Copyright (c) 2021 braidpool developers (see AUTHORS)
 *
 * This file is part of braidpool.
 *
 * braidpool is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * braidpool is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with braidpool.  If not, see <https://www.gnu.org/licenses/>.
 */

#include "p2p/node.hpp"

#include <gtest/gtest.h>

#include <boost/asio/co_spawn.hpp>
#include <boost/asio/detached.hpp>

#include "p2p/define.hpp"

using namespace bp::p2p;

TEST(NODE_TEST, CONSTRUCTOR__RETURNS_NODE) {
  node instance{"localhost", "22140"};
  const io_context& ctx = instance.get_io_context();

  // co_spawn(ctx, instance.connect_to_peers("localhost", "22141"),
  //          boost::asio::detached);
}
