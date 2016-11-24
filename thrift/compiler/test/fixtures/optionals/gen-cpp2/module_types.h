/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>



namespace cpp2 {

class Color;
class Vehicle;
class Person;

enum class Animal {
  DOG = 1,
  CAT = 2,
  TARANTULA = 3
};

extern const typename apache::thrift::detail::TEnumMapFactory<Animal, Animal>::ValuesToNamesMapType _Animal_VALUES_TO_NAMES;
extern const typename apache::thrift::detail::TEnumMapFactory<Animal, Animal>::NamesToValuesMapType _Animal_NAMES_TO_VALUES;

} // cpp2
namespace std {

template<> struct hash<typename  ::cpp2::Animal> : public apache::thrift::detail::enum_hash<typename  ::cpp2::Animal> {};
template<> struct equal_to<typename  ::cpp2::Animal> : public apache::thrift::detail::enum_equal_to<typename  ::cpp2::Animal> {};

} // std
namespace apache { namespace thrift {

template <> folly::Range<const std::pair< ::cpp2::Animal, folly::StringPiece>*> TEnumTraitsBase< ::cpp2::Animal>::enumerators();
template <> const char* TEnumTraitsBase< ::cpp2::Animal>::findName( ::cpp2::Animal value);
template <> bool TEnumTraitsBase< ::cpp2::Animal>::findValue(const char* name,  ::cpp2::Animal* outValue);

template <> constexpr  ::cpp2::Animal TEnumTraits< ::cpp2::Animal>::min() {
  return  ::cpp2::Animal::DOG;
}

template <> constexpr  ::cpp2::Animal TEnumTraits< ::cpp2::Animal>::max() {
  return  ::cpp2::Animal::TARANTULA;
}

}} // apache::thrift
namespace cpp2 {

typedef int64_t PersonID;

class Color : private apache::thrift::detail::st::ComparisonOperators<Color> {
 public:

  Color() :
      red(0),
      green(0),
      blue(0),
      alpha(0) {}
  // FragileConstructor for use in initialization lists only

  Color(apache::thrift::FragileConstructor, double red__arg, double green__arg, double blue__arg, double alpha__arg) :
      red(std::move(red__arg)),
      green(std::move(green__arg)),
      blue(std::move(blue__arg)),
      alpha(std::move(alpha__arg)) {}
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Color(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Color(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    red = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Color(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Color(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    green = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Color(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Color(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    blue = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Color(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Color(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    alpha = arg.move();
  }

  Color(Color&&) = default;

  Color(const Color&) = default;

  Color& operator=(Color&&) = default;

  Color& operator=(const Color&) = default;
  void __clear();

  virtual ~Color() throw() {}

  double red;
  double green;
  double blue;
  double alpha;
  bool operator==(const Color& rhs) const;

  bool operator < (const Color& rhs) const {
    if (!(red == rhs.red)) {
      return red < rhs.red;
    }
    if (!(green == rhs.green)) {
      return green < rhs.green;
    }
    if (!(blue == rhs.blue)) {
      return blue < rhs.blue;
    }
    if (!(alpha == rhs.alpha)) {
      return alpha < rhs.alpha;
    }
    return false;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(Color& a, Color& b);
extern template uint32_t Color::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Color::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Color::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Color::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Color::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Color::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Color::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Color::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Color>::clear( ::cpp2::Color* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Color>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Color>::write(Protocol* proto,  ::cpp2::Color const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Color>::read(Protocol* proto,  ::cpp2::Color* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Color>::serializedSize(Protocol const* proto,  ::cpp2::Color const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Color>::serializedSizeZC(Protocol const* proto,  ::cpp2::Color const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class Vehicle : private apache::thrift::detail::st::ComparisonOperators<Vehicle> {
 public:

  Vehicle() {}
  // FragileConstructor for use in initialization lists only

  Vehicle(apache::thrift::FragileConstructor,  ::cpp2::Color color__arg, std::string licensePlate__arg, std::string description__arg, std::string name__arg) :
      color(std::move(color__arg)),
      licensePlate(std::move(licensePlate__arg)),
      description(std::move(description__arg)),
      name(std::move(name__arg)) {}
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Vehicle(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Vehicle(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    color = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Vehicle(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Vehicle(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    licensePlate = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Vehicle(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Vehicle(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    description = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Vehicle(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Vehicle(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    name = arg.move();
  }

  Vehicle(Vehicle&&) = default;

  Vehicle(const Vehicle&) = default;

  Vehicle& operator=(Vehicle&&) = default;

  Vehicle& operator=(const Vehicle&) = default;
  void __clear();

  virtual ~Vehicle() throw() {}

   ::cpp2::Color color;
  folly::Optional<std::string> licensePlate;
  folly::Optional<std::string> description;
  folly::Optional<std::string> name;
  bool operator==(const Vehicle& rhs) const;
  bool operator < (const Vehicle& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(Vehicle& a, Vehicle& b);
extern template uint32_t Vehicle::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Vehicle::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Vehicle::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Vehicle::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Vehicle::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Vehicle::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Vehicle::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Vehicle>::clear( ::cpp2::Vehicle* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Vehicle>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Vehicle>::write(Protocol* proto,  ::cpp2::Vehicle const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Vehicle>::read(Protocol* proto,  ::cpp2::Vehicle* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Vehicle>::serializedSize(Protocol const* proto,  ::cpp2::Vehicle const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Vehicle>::serializedSizeZC(Protocol const* proto,  ::cpp2::Vehicle const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class Person : private apache::thrift::detail::st::ComparisonOperators<Person> {
 public:

  Person() :
      id(0) {}
  // FragileConstructor for use in initialization lists only

  Person(apache::thrift::FragileConstructor,  ::cpp2::PersonID id__arg, std::string name__arg, int16_t age__arg, std::string address__arg,  ::cpp2::Color favoriteColor__arg, std::set< ::cpp2::PersonID> friends__arg,  ::cpp2::PersonID bestFriend__arg, std::map< ::cpp2::Animal, std::string> petNames__arg,  ::cpp2::Animal afraidOfAnimal__arg, std::vector< ::cpp2::Vehicle> vehicles__arg) :
      id(std::move(id__arg)),
      name(std::move(name__arg)),
      age(std::move(age__arg)),
      address(std::move(address__arg)),
      favoriteColor(std::move(favoriteColor__arg)),
      friends(std::move(friends__arg)),
      bestFriend(std::move(bestFriend__arg)),
      petNames(std::move(petNames__arg)),
      afraidOfAnimal(std::move(afraidOfAnimal__arg)),
      vehicles(std::move(vehicles__arg)) {}
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Person(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    id = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Person(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    name = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Person(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    age = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Person(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    address = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Person(::apache::thrift::detail::argument_wrapper<5, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    favoriteColor = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Person(::apache::thrift::detail::argument_wrapper<6, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    friends = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Person(::apache::thrift::detail::argument_wrapper<7, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    bestFriend = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Person(::apache::thrift::detail::argument_wrapper<8, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    petNames = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Person(::apache::thrift::detail::argument_wrapper<9, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    afraidOfAnimal = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  Person(::apache::thrift::detail::argument_wrapper<10, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    Person(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    vehicles = arg.move();
  }

  Person(Person&&) = default;

  Person(const Person&) = default;

  Person& operator=(Person&&) = default;

  Person& operator=(const Person&) = default;
  void __clear();

  virtual ~Person() throw() {}

   ::cpp2::PersonID id;
  std::string name;
  folly::Optional<int16_t> age;
  folly::Optional<std::string> address;
  folly::Optional< ::cpp2::Color> favoriteColor;
  folly::Optional<std::set< ::cpp2::PersonID>> friends;
  folly::Optional< ::cpp2::PersonID> bestFriend;
  folly::Optional<std::map< ::cpp2::Animal, std::string>> petNames;
  folly::Optional< ::cpp2::Animal> afraidOfAnimal;
  folly::Optional<std::vector< ::cpp2::Vehicle>> vehicles;
  bool operator==(const Person& rhs) const;
  bool operator < (const Person& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(Person& a, Person& b);
extern template uint32_t Person::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t Person::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t Person::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Person::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t Person::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t Person::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t Person::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t Person::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::Person>::clear( ::cpp2::Person* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::Person>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Person>::write(Protocol* proto,  ::cpp2::Person const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Person>::read(Protocol* proto,  ::cpp2::Person* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Person>::serializedSize(Protocol const* proto,  ::cpp2::Person const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::Person>::serializedSizeZC(Protocol const* proto,  ::cpp2::Person const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2
