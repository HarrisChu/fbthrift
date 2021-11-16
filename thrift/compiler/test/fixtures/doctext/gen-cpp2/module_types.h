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
struct useless_field;
struct i;
struct s;
struct message;
} // namespace tag
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_useless_field
#define APACHE_THRIFT_ACCESSOR_useless_field
APACHE_THRIFT_DEFINE_ACCESSOR(useless_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_i
#define APACHE_THRIFT_ACCESSOR_i
APACHE_THRIFT_DEFINE_ACCESSOR(i);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_s
#define APACHE_THRIFT_ACCESSOR_s
APACHE_THRIFT_DEFINE_ACCESSOR(s);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_message
#define APACHE_THRIFT_ACCESSOR_message
APACHE_THRIFT_DEFINE_ACCESSOR(message);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums
namespace cpp2 {

enum class B {
  HELLO = 0,
};




} // cpp2

namespace std {
template<> struct hash<::cpp2::B> :
  ::apache::thrift::detail::enum_hash<::cpp2::B> {};
} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage<::cpp2::B>;

template <> struct TEnumTraits<::cpp2::B> {
  using type = ::cpp2::B;

  static constexpr std::size_t const size = 1;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

  static constexpr type min() { return type::HELLO; }
  static constexpr type max() { return type::HELLO; }
};


}} // apache::thrift

namespace cpp2 {

using _B_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<B>;
[[deprecated("use apache::thrift::util::enumNameSafe, apache::thrift::util::enumName, or apache::thrift::TEnumTraits")]]
extern const _B_EnumMapFactory::ValuesToNamesMapType _B_VALUES_TO_NAMES;
[[deprecated("use apache::thrift::TEnumTraits")]]
extern const _B_EnumMapFactory::NamesToValuesMapType _B_NAMES_TO_VALUES;

} // cpp2

// END declare_enums
// BEGIN forward_declare
namespace cpp2 {
class A;
class U;
class Bang;
} // cpp2
// END forward_declare
// BEGIN typedefs
namespace cpp2 {
typedef ::std::string lanyard;
typedef ::std::int32_t number;

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
class A final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = A;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  A() :
      __fbthrift_field_useless_field() {
  }
  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  A(apache::thrift::FragileConstructor, ::std::int32_t useless_field__arg);

  A(A&&) = default;

  A(const A&) = default;


  A& operator=(A&&) = default;

  A& operator=(const A&) = default;
  void __clear();
 private:
  ::std::int32_t __fbthrift_field_useless_field;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const A&) const;
  bool operator<(const A&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> useless_field_ref() const& {
    return {this->__fbthrift_field_useless_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> useless_field_ref() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_useless_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> useless_field_ref() & {
    return {this->__fbthrift_field_useless_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> useless_field_ref() && {
    return {static_cast<T&&>(this->__fbthrift_field_useless_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> useless_field() const& {
    return {this->__fbthrift_field_useless_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> useless_field() const&& {
    return {static_cast<const T&&>(this->__fbthrift_field_useless_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> useless_field() & {
    return {this->__fbthrift_field_useless_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> useless_field() && {
    return {static_cast<T&&>(this->__fbthrift_field_useless_field), __isset.at(0), __isset.bit(0)};
  }

  ::std::int32_t get_useless_field() const {
    return __fbthrift_field_useless_field;
  }

  [[deprecated("Use `FOO.useless_field_ref() = BAR;` instead of `FOO.set_useless_field(BAR);`")]]
  ::std::int32_t& set_useless_field(::std::int32_t useless_field_) {
    useless_field_ref() = useless_field_;
    return __fbthrift_field_useless_field;
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

  friend class ::apache::thrift::Cpp2Ops<A>;
  friend void swap(A& a, A& b);
};

template <class Protocol_>
uint32_t A::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class U final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;

 public:
  using __fbthrift_cpp2_type = U;
  static constexpr bool __fbthrift_cpp2_is_union =
    true;


 public:
  enum Type : int {
    __EMPTY__ = 0,
    i = 1,
    s = 2,
  } ;

  U()
      : type_(Type::__EMPTY__) {}

  U(U&& rhs) noexcept
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(std::move(rhs.value_.i));
        break;
      }
      case Type::s:
      {
        set_s(std::move(rhs.value_.s));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  U(const U& rhs)
      : type_(Type::__EMPTY__) {
    if (this == &rhs) { return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(rhs.value_.i);
        break;
      }
      case Type::s:
      {
        set_s(rhs.value_.s);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  U& operator=(U&& rhs) noexcept {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(std::move(rhs.value_.i));
        break;
      }
      case Type::s:
      {
        set_s(std::move(rhs.value_.s));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  U& operator=(const U& rhs) {
    if (this == &rhs) { return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch (rhs.type_) {
      case Type::i:
      {
        set_i(rhs.value_.i);
        break;
      }
      case Type::s:
      {
        set_s(rhs.value_.s);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }
  void __clear();

  ~U() {
    __clear();
  }
  union storage_type {
    ::std::int32_t i;
    ::std::string s;

    storage_type() {}
    ~storage_type() {}
  } ;

  bool operator==(const U&) const;
  bool operator<(const U&) const;

  ::std::int32_t& set_i(::std::int32_t t = ::std::int32_t()) {
    __clear();
    type_ = Type::i;
    ::new (std::addressof(value_.i)) ::std::int32_t(t);
    return value_.i;
  }

  ::std::string& set_s(::std::string const &t) {
    __clear();
    type_ = Type::s;
    ::new (std::addressof(value_.s)) ::std::string(t);
    return value_.s;
  }

  ::std::string& set_s(::std::string&& t) {
    __clear();
    type_ = Type::s;
    ::new (std::addressof(value_.s)) ::std::string(std::move(t));
    return value_.s;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<::std::string, T...>> ::std::string& set_s(T&&... t) {
    __clear();
    type_ = Type::s;
    ::new (std::addressof(value_.s)) ::std::string(std::forward<T>(t)...);
    return value_.s;
  }

  ::std::int32_t const& get_i() const {
    if (type_ != Type::i) {
      ::apache::thrift::detail::throw_on_bad_field_access();
    }
    return value_.i;
  }

  ::std::string const& get_s() const {
    if (type_ != Type::s) {
      ::apache::thrift::detail::throw_on_bad_field_access();
    }
    return value_.s;
  }

  ::std::int32_t& mutable_i() {
    assert(type_ == Type::i);
    return value_.i;
  }

  ::std::string& mutable_s() {
    assert(type_ == Type::s);
    return value_.s;
  }

  ::std::int32_t move_i() {
    assert(type_ == Type::i);
    return std::move(value_.i);
  }

  ::std::string move_s() {
    assert(type_ == Type::s);
    return std::move(value_.s);
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> i_ref() const& {
    return {value_.i, type_, i, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> i_ref() const&& {
    return {std::move(value_.i), type_, i, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> i_ref() & {
    return {value_.i, type_, i, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> i_ref() && {
    return {std::move(value_.i), type_, i, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&> s_ref() const& {
    return {value_.s, type_, s, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::union_field_ref<const T&&> s_ref() const&& {
    return {std::move(value_.s), type_, s, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&> s_ref() & {
    return {value_.s, type_, s, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::union_field_ref<T&&> s_ref() && {
    return {std::move(value_.s), type_, s, this, ::apache::thrift::detail::union_field_ref_owner_vtable_for<decltype(*this)>};
  }
  Type getType() const { return static_cast<Type>(type_); }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  storage_type value_;
  std::underlying_type_t<Type> type_;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<U>;
  friend void swap(U& a, U& b);
};

template <class Protocol_>
uint32_t U::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2
namespace cpp2 {
class FOLLY_EXPORT Bang : public apache::thrift::TException {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_gen_nimble = false;
  static constexpr bool __fbthrift_cpp2_gen_has_thrift_uri = false;
  static constexpr ::apache::thrift::ExceptionKind __fbthrift_cpp2_gen_exception_kind =
         ::apache::thrift::ExceptionKind::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionSafety __fbthrift_cpp2_gen_exception_safety =
         ::apache::thrift::ExceptionSafety::UNSPECIFIED;
  static constexpr ::apache::thrift::ExceptionBlame __fbthrift_cpp2_gen_exception_blame =
         ::apache::thrift::ExceptionBlame::UNSPECIFIED;

 public:
  using __fbthrift_cpp2_type = Bang;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  Bang();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  Bang(apache::thrift::FragileConstructor, ::std::string message__arg);

  Bang(Bang&&) noexcept;

  Bang(const Bang& src);


  Bang& operator=(Bang&&) noexcept;
  Bang& operator=(const Bang& src);
  void __clear();

  ~Bang() override;

 private:
  ::std::string message;
 private:
  apache::thrift::detail::isset_bitset<1, false> __isset;

 public:

  bool operator==(const Bang&) const;
  bool operator<(const Bang&) const;

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&> message_ref() const& {
    return {this->message, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<const T&&> message_ref() const&& {
    return {static_cast<const T&&>(this->message), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&> message_ref() & {
    return {this->message, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::string>
  FOLLY_ERASE ::apache::thrift::field_ref<T&&> message_ref() && {
    return {static_cast<T&&>(this->message), __isset.at(0), __isset.bit(0)};
  }

  const ::std::string& get_message() const& {
    return message;
  }

  ::std::string get_message() && {
    return std::move(message);
  }

  template <typename T_Bang_message_struct_setter = ::std::string>
  [[deprecated("Use `FOO.message_ref() = BAR;` instead of `FOO.set_message(BAR);`")]]
  ::std::string& set_message(T_Bang_message_struct_setter&& message_) {
    message_ref() = std::forward<T_Bang_message_struct_setter>(message_);
    return message;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

  const char* what() const noexcept override {
    return "::cpp2::Bang";
  }

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<Bang>;
  friend void swap(Bang& a, Bang& b);
};

template <class Protocol_>
uint32_t Bang::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}

} // cpp2

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::cpp2::U::Type>;

template <> struct TEnumTraits<::cpp2::U::Type> {
  using type = ::cpp2::U::Type;

  static constexpr std::size_t const size = 2;
  static folly::Range<type const*> const values;
  static folly::Range<folly::StringPiece const*> const names;

  static char const* findName(type value);
  static bool findValue(char const* name, type* out);

};
}} // apache::thrift
