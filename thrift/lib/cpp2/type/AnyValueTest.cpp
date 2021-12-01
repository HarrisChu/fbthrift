/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <thrift/lib/cpp2/type/AnyValue.h>

#include <folly/portability/GTest.h>

#include <folly/Poly.h>

namespace apache::thrift::type {
namespace {

struct IntValue {
  int value;

  bool empty() const { return value == 0; }
  void clear() { value = 0; }
};

TEST(AnyValueTest, AnyValueHolder) {
  detail::AnyValueHolder data = IntValue{1};
  EXPECT_FALSE(data.empty());
  data.clear();
  EXPECT_TRUE(data.empty());
  EXPECT_EQ(folly::poly_cast<IntValue&>(data).value, 0);
}

TEST(AnyValueTest, Void) {
  AnyValue value;
  EXPECT_EQ(value.type(), AnyType::create<void_t>());
  EXPECT_TRUE(value.empty());
  value.clear();
  EXPECT_TRUE(value.empty());

  EXPECT_THROW(value.as<string_t>(), folly::BadPolyCast);
}

TEST(AnyValueTest, Int) {
  AnyValue value = AnyValue::create<i32_t>(1);
  EXPECT_EQ(value.type(), AnyType::create<i32_t>());
  EXPECT_FALSE(value.empty());
  value.clear();
  EXPECT_TRUE(value.empty());

  EXPECT_EQ(value.as<i32_t>(), 0);
  value.as<i32_t>() = 2;
  EXPECT_FALSE(value.empty());
}

TEST(AnyValueTest, List) {
  AnyValue value;
  value = AnyValue::create<list<string_t>>();
  EXPECT_TRUE(value.empty());
  value.as<list<string_t>>().emplace_back("hi");
  EXPECT_FALSE(value.empty());
  value.clear();
  EXPECT_TRUE(value.empty());
  EXPECT_TRUE(value.as<list<string_t>>().empty());
}

} // namespace
} // namespace apache::thrift::type
