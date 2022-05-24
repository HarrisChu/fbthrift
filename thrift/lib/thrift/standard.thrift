/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
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

include "thrift/annotation/thrift.thrift"
include "thrift/annotation/java.thrift"
include "thrift/lib/thrift/id.thrift"

cpp_include "<folly/io/IOBuf.h>"
cpp_include "<folly/FBString.h>"

// The **standard** types all Thrift implementations support.
package "facebook.com/thrift/type"

namespace cpp2 apache.thrift.type
namespace py3 apache.thrift.type
namespace php apache_thrift_type
namespace java com.facebook.thrift.type
namespace java.swift com.facebook.thrift.type_swift
namespace java2 com.facebook.thrift.type
namespace py.asyncio apache_thrift_asyncio.standard
namespace go thrift.lib.thrift.standard
namespace py thrift.lib.thrift.standard

// The minimum and default number of bytes that can be used to identify
// a type.
//
// The expected number of types that can be hashed before a
// collision is 2^(8*{numBytes}/2).
// Which is ~4.3 billion types for the min, and ~18.45 quintillion
// types for the default.
@thrift.Experimental
const byte minTypeHashBytes = 8;
@thrift.Experimental
const byte defaultTypeHashBytes = 16;

// Typedef for binary data which can be represented as a string of 8-bit bytes
//
// Each language can map this type into a customized memory efficient object
@thrift.Experimental
@java.Adapter{
  adapterClassName = "com.facebook.thrift.adapter.common.UnpooledByteBufTypeAdapter",
  typeClassName = "io.netty.buffer.ByteBuf",
}
typedef binary (cpp2.type = "folly::fbstring") ByteString

// Typedef for binary data
//
// Each language can map this type into a customized memory efficient object
// May be used for zero-copy slice of data
//
// TODO(afuller): Consider switching to std::unique_ptr<folly::IOBuf> for c++,
// to make moves cheaper (benchmark to see if this is better).
@thrift.Experimental
@java.Adapter{
  adapterClassName = "com.facebook.thrift.adapter.common.UnpooledByteBufTypeAdapter",
  typeClassName = "io.netty.buffer.ByteBuf",
}
typedef binary (cpp2.type = "folly::IOBuf") ByteBuffer

// The standard Thrift protocols.
@thrift.Experimental
enum StandardProtocol {
  Custom = 0,

  // Standard protocols.
  Binary = 1,
  Compact = 2,

  // Deprecated protocols.
  Json = 3,
  SimpleJson = 4,
}

// TODO(afuller): Allow 'void' type for union fields.
@thrift.Experimental
enum Void {
  NoValue = 0,
}

// A (scheme-less) URI.
//
// Of the form described in RFC 3986, but with every component optional.
@thrift.Experimental // TODO(afuller): Adapt.
typedef string Uri (thrift.uri = "")

// The 'parsed' form of a `Uri`.
//
//   {scheme}://{domain}/{path}?{query}#{fragment}
//
// TODO(afuller): Add adapters and native classes, e.g. BasicUri, Uri,
// and UriView, which use std::basic_string, std::string, std::string_view
// respectively.
@thrift.Experimental // TODO(afuller): Adapt.
struct UriStruct {
  // The scheme, if present.
  1: string scheme;

  // The parsed domain, for example "meta.com" -> ["meta", "com"]
  2: list<string> domain;

  // The parsed path, for example "path/to/file" -> ["path", "to", "file"]
  4: list<string> path;

  // The parsed query args.
  5: map<string, string> query;

  // The fragment, if present.
  6: string fragment;
} (thrift.uri = "facebook.com/thrift/type/Uri")

// The uri of an IDL defined type.
@thrift.Experimental
union TypeUri {
  // The unique Thrift URI for this type.
  1: Uri uri;
  // A prefix of the SHA2-256 hash of the URI.
  2: ByteString typeHashPrefixSha2_256;
  // An externally stored URI value.
  3: id.ValueId id;
}

// Uniquely identifies a Thrift type.
@thrift.Experimental
union TypeName {
  1: Void boolType;
  2: Void byteType;
  3: Void i16Type;
  4: Void i32Type;
  5: Void i64Type;
  6: Void floatType;
  7: Void doubleType;
  8: Void stringType;
  9: Void binaryType;
  10: TypeUri enumType;
  11: TypeUri structType;
  12: TypeUri unionType;
  13: TypeUri exceptionType;
  14: Void listType;
  15: Void setType;
  16: Void mapType;
}
