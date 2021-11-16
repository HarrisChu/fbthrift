/**
 * Autogenerated by Thrift for src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace tag {
struct field1;
struct m1;
struct field2;
struct field3;
struct field4;
struct m2;
struct m3;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_field1
#define APACHE_THRIFT_ACCESSOR_field1
APACHE_THRIFT_DEFINE_ACCESSOR(field1);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_m1
#define APACHE_THRIFT_ACCESSOR_m1
APACHE_THRIFT_DEFINE_ACCESSOR(m1);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field2
#define APACHE_THRIFT_ACCESSOR_field2
APACHE_THRIFT_DEFINE_ACCESSOR(field2);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field3
#define APACHE_THRIFT_ACCESSOR_field3
APACHE_THRIFT_DEFINE_ACCESSOR(field3);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_field4
#define APACHE_THRIFT_ACCESSOR_field4
APACHE_THRIFT_DEFINE_ACCESSOR(field4);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_m2
#define APACHE_THRIFT_ACCESSOR_m2
APACHE_THRIFT_DEFINE_ACCESSOR(m2);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_m3
#define APACHE_THRIFT_ACCESSOR_m3
APACHE_THRIFT_DEFINE_ACCESSOR(m3);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class Mixin1;
class Mixin2;
class Mixin3Base;
class Foo;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef ::cpp2::Mixin3Base Mixin3;

} // cpp2
// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;
} // cpp2
namespace cpp2 {
class Mixin1 final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Mixin1;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Mixin1() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Mixin1(apache::thrift::FragileConstructor, ::std::string field1__arg);

  Mixin1(Mixin1&&) noexcept;

  Mixin1(const Mixin1& src);


  Mixin1& operator=(Mixin1&&) noexcept;
  Mixin1& operator=(const Mixin1& src);
  void __clear();
 private:
  ::std::string __fbthrift_field_field1;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const Mixin1&) const;
  bool operator<(const Mixin1&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field1_ref() const& {
    return {this->__fbthrift_field_field1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field1_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_field1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field1_ref() & {
    return {this->__fbthrift_field_field1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field1_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_field1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field1() const& {
    return {this->__fbthrift_field_field1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field1() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_field1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field1() & {
    return {this->__fbthrift_field_field1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field1() && {
    return {static_cast<T&&>(this->__fbthrift_field_field1), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_field1() const& {
    return __fbthrift_field_field1;
  }

  ::std::string get_field1() && {
    return std::move(__fbthrift_field_field1);
  }

  template <typename T_Mixin1_field1_struct_setter = ::std::string>
  [[deprecated("Use `FOO.field1_ref() = BAR;` instead of `FOO.set_field1(BAR);`")]]
  ::std::string& set_field1(T_Mixin1_field1_struct_setter&& field1_) {
    field1_ref() = std::forward<T_Mixin1_field1_struct_setter>(field1_);
    return __fbthrift_field_field1;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Mixin1>;
  friend void swap(Mixin1& a, Mixin1& b);
};

template <class Protocol_>
uint32_t Mixin1::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class Mixin2 final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Mixin2;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Mixin2() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Mixin2(apache::thrift::FragileConstructor, ::cpp2::Mixin1 m1__arg, ::std::string field2__arg);

  Mixin2(Mixin2&&) noexcept;

  Mixin2(const Mixin2& src);


  Mixin2& operator=(Mixin2&&) noexcept;
  Mixin2& operator=(const Mixin2& src);
  void __clear();
 private:
  ::cpp2::Mixin1 __fbthrift_field_m1;
 private:
  ::std::string __fbthrift_field_field2;
 private:
  apache::thrift::detail::isset_bitset<2, false> __isset;

 public:

  bool operator==(const Mixin2&) const;
  bool operator<(const Mixin2&) const;

  template <typename..., typename T = ::cpp2::Mixin1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> m1_ref() const& {
    return {this->__fbthrift_field_m1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Mixin1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> m1_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_m1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Mixin1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> m1_ref() & {
    return {this->__fbthrift_field_m1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Mixin1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> m1_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_m1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Mixin1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> m1() const& {
    return {this->__fbthrift_field_m1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Mixin1>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> m1() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_m1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Mixin1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> m1() & {
    return {this->__fbthrift_field_m1, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Mixin1>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> m1() && {
    return {static_cast<T&&>(this->__fbthrift_field_m1), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field2_ref() const& {
    return {this->__fbthrift_field_field2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field2_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_field2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field2_ref() & {
    return {this->__fbthrift_field_field2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field2_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_field2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&> field2() const& {
    return {this->__fbthrift_field_field2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<const T&&> field2() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_field2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&> field2() & {
    return {this->__fbthrift_field_field2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::optional_field_ref<T&&> field2() && {
    return {static_cast<T&&>(this->__fbthrift_field_field2), __isset.at(1), __isset.bit(1)};
  }
  FOLLY_ERASE auto field1_ref() &       { return m1_ref()->field1_ref(); }
  FOLLY_ERASE auto field1_ref() const&  { return m1_ref()->field1_ref(); }
  FOLLY_ERASE auto field1_ref() &&      { return std::move(*m1_ref()).field1_ref(); }
  FOLLY_ERASE auto field1_ref() const&& { return std::move(*m1_ref()).field1_ref(); }
  FOLLY_ERASE auto field1() &           { return field1_ref(); }
  FOLLY_ERASE auto field1() const&      { return field1_ref(); }
  FOLLY_ERASE auto field1() &&          { return std::move(*this).field1_ref(); }
  FOLLY_ERASE auto field1() const&&     { return std::move(*this).field1_ref(); }
  const ::cpp2::Mixin1& get_m1() const&;
  ::cpp2::Mixin1 get_m1() &&;

  template <typename T_Mixin2_m1_struct_setter = ::cpp2::Mixin1>
  [[deprecated("Use `FOO.m1_ref() = BAR;` instead of `FOO.set_m1(BAR);`")]]
  ::cpp2::Mixin1& set_m1(T_Mixin2_m1_struct_setter&& m1_) {
    m1_ref() = std::forward<T_Mixin2_m1_struct_setter>(m1_);
    return __fbthrift_field_m1;
  }

  const ::std::string* get_field2() const& {
    return field2_ref() ? std::addressof(__fbthrift_field_field2) : nullptr;
  }

  ::std::string* get_field2() & {
    return field2_ref() ? std::addressof(__fbthrift_field_field2) : nullptr;
  }
  ::std::string* get_field2() && = delete;

  template <typename T_Mixin2_field2_struct_setter = ::std::string>
  [[deprecated("Use `FOO.field2_ref() = BAR;` instead of `FOO.set_field2(BAR);`")]]
  ::std::string& set_field2(T_Mixin2_field2_struct_setter&& field2_) {
    field2_ref() = std::forward<T_Mixin2_field2_struct_setter>(field2_);
    return __fbthrift_field_field2;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Mixin2>;
  friend void swap(Mixin2& a, Mixin2& b);
};

template <class Protocol_>
uint32_t Mixin2::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class Mixin3Base final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Mixin3Base;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Mixin3Base() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Mixin3Base(apache::thrift::FragileConstructor, ::std::string field3__arg);

  Mixin3Base(Mixin3Base&&) noexcept;

  Mixin3Base(const Mixin3Base& src);


  Mixin3Base& operator=(Mixin3Base&&) noexcept;
  Mixin3Base& operator=(const Mixin3Base& src);
  void __clear();
 private:
  ::std::string __fbthrift_field_field3;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const Mixin3Base&) const;
  bool operator<(const Mixin3Base&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field3_ref() const& {
    return {this->__fbthrift_field_field3, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field3_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_field3), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field3_ref() & {
    return {this->__fbthrift_field_field3, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field3_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_field3), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field3() const& {
    return {this->__fbthrift_field_field3, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field3() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_field3), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field3() & {
    return {this->__fbthrift_field_field3, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field3() && {
    return {static_cast<T&&>(this->__fbthrift_field_field3), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_field3() const& {
    return __fbthrift_field_field3;
  }

  ::std::string get_field3() && {
    return std::move(__fbthrift_field_field3);
  }

  template <typename T_Mixin3Base_field3_struct_setter = ::std::string>
  [[deprecated("Use `FOO.field3_ref() = BAR;` instead of `FOO.set_field3(BAR);`")]]
  ::std::string& set_field3(T_Mixin3Base_field3_struct_setter&& field3_) {
    field3_ref() = std::forward<T_Mixin3Base_field3_struct_setter>(field3_);
    return __fbthrift_field_field3;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Mixin3Base>;
  friend void swap(Mixin3Base& a, Mixin3Base& b);
};

template <class Protocol_>
uint32_t Mixin3Base::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class Foo final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = Foo;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Foo() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Foo(apache::thrift::FragileConstructor, ::std::string field4__arg, ::cpp2::Mixin2 m2__arg, ::cpp2::Mixin3 m3__arg);

  Foo(Foo&&) noexcept;

  Foo(const Foo& src);


  Foo& operator=(Foo&&) noexcept;
  Foo& operator=(const Foo& src);
  void __clear();
 private:
  ::std::string __fbthrift_field_field4;
 private:
  ::cpp2::Mixin2 __fbthrift_field_m2;
 private:
  ::cpp2::Mixin3 __fbthrift_field_m3;
 private:
  apache::thrift::detail::isset_bitset<3, false> __isset;

 public:

  bool operator==(const Foo&) const;
  bool operator<(const Foo&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field4_ref() const& {
    return {this->__fbthrift_field_field4, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field4_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_field4), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field4_ref() & {
    return {this->__fbthrift_field_field4, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field4_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_field4), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> field4() const& {
    return {this->__fbthrift_field_field4, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> field4() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_field4), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> field4() & {
    return {this->__fbthrift_field_field4, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> field4() && {
    return {static_cast<T&&>(this->__fbthrift_field_field4), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::cpp2::Mixin2>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> m2_ref() const& {
    return {this->__fbthrift_field_m2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Mixin2>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> m2_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_m2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Mixin2>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> m2_ref() & {
    return {this->__fbthrift_field_m2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Mixin2>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> m2_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_m2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Mixin2>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> m2() const& {
    return {this->__fbthrift_field_m2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Mixin2>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> m2() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_m2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Mixin2>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> m2() & {
    return {this->__fbthrift_field_m2, __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Mixin2>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> m2() && {
    return {static_cast<T&&>(this->__fbthrift_field_m2), __isset.at(1), __isset.bit(1)};
  }

  template <typename..., typename T = ::cpp2::Mixin3>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> m3_ref() const& {
    return {this->__fbthrift_field_m3, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Mixin3>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> m3_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_m3), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Mixin3>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> m3_ref() & {
    return {this->__fbthrift_field_m3, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Mixin3>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> m3_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_m3), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Mixin3>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> m3() const& {
    return {this->__fbthrift_field_m3, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Mixin3>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> m3() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_m3), __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Mixin3>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> m3() & {
    return {this->__fbthrift_field_m3, __isset.at(2), __isset.bit(2)};
  }

  template <typename..., typename T = ::cpp2::Mixin3>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> m3() && {
    return {static_cast<T&&>(this->__fbthrift_field_m3), __isset.at(2), __isset.bit(2)};
  }
  FOLLY_ERASE auto m1_ref() &       { return m2_ref()->m1_ref(); }
  FOLLY_ERASE auto m1_ref() const&  { return m2_ref()->m1_ref(); }
  FOLLY_ERASE auto m1_ref() &&      { return std::move(*m2_ref()).m1_ref(); }
  FOLLY_ERASE auto m1_ref() const&& { return std::move(*m2_ref()).m1_ref(); }
  FOLLY_ERASE auto m1() &           { return m1_ref(); }
  FOLLY_ERASE auto m1() const&      { return m1_ref(); }
  FOLLY_ERASE auto m1() &&          { return std::move(*this).m1_ref(); }
  FOLLY_ERASE auto m1() const&&     { return std::move(*this).m1_ref(); }
  FOLLY_ERASE auto field2_ref() &       { return m2_ref()->field2_ref(); }
  FOLLY_ERASE auto field2_ref() const&  { return m2_ref()->field2_ref(); }
  FOLLY_ERASE auto field2_ref() &&      { return std::move(*m2_ref()).field2_ref(); }
  FOLLY_ERASE auto field2_ref() const&& { return std::move(*m2_ref()).field2_ref(); }
  FOLLY_ERASE auto field2() &           { return field2_ref(); }
  FOLLY_ERASE auto field2() const&      { return field2_ref(); }
  FOLLY_ERASE auto field2() &&          { return std::move(*this).field2_ref(); }
  FOLLY_ERASE auto field2() const&&     { return std::move(*this).field2_ref(); }
  FOLLY_ERASE auto field1_ref() &       { return m2_ref()->field1_ref(); }
  FOLLY_ERASE auto field1_ref() const&  { return m2_ref()->field1_ref(); }
  FOLLY_ERASE auto field1_ref() &&      { return std::move(*m2_ref()).field1_ref(); }
  FOLLY_ERASE auto field1_ref() const&& { return std::move(*m2_ref()).field1_ref(); }
  FOLLY_ERASE auto field1() &           { return field1_ref(); }
  FOLLY_ERASE auto field1() const&      { return field1_ref(); }
  FOLLY_ERASE auto field1() &&          { return std::move(*this).field1_ref(); }
  FOLLY_ERASE auto field1() const&&     { return std::move(*this).field1_ref(); }
  FOLLY_ERASE auto field3_ref() &       { return m3_ref()->field3_ref(); }
  FOLLY_ERASE auto field3_ref() const&  { return m3_ref()->field3_ref(); }
  FOLLY_ERASE auto field3_ref() &&      { return std::move(*m3_ref()).field3_ref(); }
  FOLLY_ERASE auto field3_ref() const&& { return std::move(*m3_ref()).field3_ref(); }
  FOLLY_ERASE auto field3() &           { return field3_ref(); }
  FOLLY_ERASE auto field3() const&      { return field3_ref(); }
  FOLLY_ERASE auto field3() &&          { return std::move(*this).field3_ref(); }
  FOLLY_ERASE auto field3() const&&     { return std::move(*this).field3_ref(); }

  const ::std::string& get_field4() const& {
    return __fbthrift_field_field4;
  }

  ::std::string get_field4() && {
    return std::move(__fbthrift_field_field4);
  }

  template <typename T_Foo_field4_struct_setter = ::std::string>
  [[deprecated("Use `FOO.field4_ref() = BAR;` instead of `FOO.set_field4(BAR);`")]]
  ::std::string& set_field4(T_Foo_field4_struct_setter&& field4_) {
    field4_ref() = std::forward<T_Foo_field4_struct_setter>(field4_);
    return __fbthrift_field_field4;
  }
  const ::cpp2::Mixin2& get_m2() const&;
  ::cpp2::Mixin2 get_m2() &&;

  template <typename T_Foo_m2_struct_setter = ::cpp2::Mixin2>
  [[deprecated("Use `FOO.m2_ref() = BAR;` instead of `FOO.set_m2(BAR);`")]]
  ::cpp2::Mixin2& set_m2(T_Foo_m2_struct_setter&& m2_) {
    m2_ref() = std::forward<T_Foo_m2_struct_setter>(m2_);
    return __fbthrift_field_m2;
  }
  const ::cpp2::Mixin3& get_m3() const&;
  ::cpp2::Mixin3 get_m3() &&;

  template <typename T_Foo_m3_struct_setter = ::cpp2::Mixin3>
  [[deprecated("Use `FOO.m3_ref() = BAR;` instead of `FOO.set_m3(BAR);`")]]
  ::cpp2::Mixin3& set_m3(T_Foo_m3_struct_setter&& m3_) {
    m3_ref() = std::forward<T_Foo_m3_struct_setter>(m3_);
    return __fbthrift_field_m3;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Foo>;
  friend void swap(Foo& a, Foo& b);
};

template <class Protocol_>
uint32_t Foo::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
