// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/NetworkTest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_proto_2fNetworkTest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_proto_2fNetworkTest_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_proto_2fNetworkTest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_proto_2fNetworkTest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_proto_2fNetworkTest_2eproto;
namespace NetworkTest {
class Query;
struct QueryDefaultTypeInternal;
extern QueryDefaultTypeInternal _Query_default_instance_;
class Register;
struct RegisterDefaultTypeInternal;
extern RegisterDefaultTypeInternal _Register_default_instance_;
class Result;
struct ResultDefaultTypeInternal;
extern ResultDefaultTypeInternal _Result_default_instance_;
}  // namespace NetworkTest
PROTOBUF_NAMESPACE_OPEN
template<> ::NetworkTest::Query* Arena::CreateMaybeMessage<::NetworkTest::Query>(Arena*);
template<> ::NetworkTest::Register* Arena::CreateMaybeMessage<::NetworkTest::Register>(Arena*);
template<> ::NetworkTest::Result* Arena::CreateMaybeMessage<::NetworkTest::Result>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace NetworkTest {

// ===================================================================

class Register final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetworkTest.Register) */ {
 public:
  inline Register() : Register(nullptr) {}
  ~Register() override;
  explicit PROTOBUF_CONSTEXPR Register(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Register(const Register& from);
  Register(Register&& from) noexcept
    : Register() {
    *this = ::std::move(from);
  }

  inline Register& operator=(const Register& from) {
    CopyFrom(from);
    return *this;
  }
  inline Register& operator=(Register&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Register& default_instance() {
    return *internal_default_instance();
  }
  static inline const Register* internal_default_instance() {
    return reinterpret_cast<const Register*>(
               &_Register_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Register& a, Register& b) {
    a.Swap(&b);
  }
  inline void Swap(Register* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Register* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Register* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Register>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Register& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Register& from) {
    Register::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Register* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetworkTest.Register";
  }
  protected:
  explicit Register(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContentFieldNumber = 2,
  };
  // bytes content = 2;
  void clear_content();
  const std::string& content() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_content(ArgT0&& arg0, ArgT... args);
  std::string* mutable_content();
  PROTOBUF_NODISCARD std::string* release_content();
  void set_allocated_content(std::string* content);
  private:
  const std::string& _internal_content() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
  public:

  // @@protoc_insertion_point(class_scope:NetworkTest.Register)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fNetworkTest_2eproto;
};
// -------------------------------------------------------------------

class Query final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetworkTest.Query) */ {
 public:
  inline Query() : Query(nullptr) {}
  ~Query() override;
  explicit PROTOBUF_CONSTEXPR Query(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Query(const Query& from);
  Query(Query&& from) noexcept
    : Query() {
    *this = ::std::move(from);
  }

  inline Query& operator=(const Query& from) {
    CopyFrom(from);
    return *this;
  }
  inline Query& operator=(Query&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Query& default_instance() {
    return *internal_default_instance();
  }
  static inline const Query* internal_default_instance() {
    return reinterpret_cast<const Query*>(
               &_Query_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Query& a, Query& b) {
    a.Swap(&b);
  }
  inline void Swap(Query* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Query* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Query* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Query>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Query& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Query& from) {
    Query::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Query* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetworkTest.Query";
  }
  protected:
  explicit Query(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
  };
  // uint32 id = 1;
  void clear_id();
  uint32_t id() const;
  void set_id(uint32_t value);
  private:
  uint32_t _internal_id() const;
  void _internal_set_id(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:NetworkTest.Query)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint32_t id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fNetworkTest_2eproto;
};
// -------------------------------------------------------------------

class Result final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:NetworkTest.Result) */ {
 public:
  inline Result() : Result(nullptr) {}
  ~Result() override;
  explicit PROTOBUF_CONSTEXPR Result(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Result(const Result& from);
  Result(Result&& from) noexcept
    : Result() {
    *this = ::std::move(from);
  }

  inline Result& operator=(const Result& from) {
    CopyFrom(from);
    return *this;
  }
  inline Result& operator=(Result&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Result& default_instance() {
    return *internal_default_instance();
  }
  static inline const Result* internal_default_instance() {
    return reinterpret_cast<const Result*>(
               &_Result_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(Result& a, Result& b) {
    a.Swap(&b);
  }
  inline void Swap(Result* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Result* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Result* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Result>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Result& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const Result& from) {
    Result::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Result* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "NetworkTest.Result";
  }
  protected:
  explicit Result(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kReasonFieldNumber = 2,
  };
  // uint32 id = 1;
  void clear_id();
  uint32_t id() const;
  void set_id(uint32_t value);
  private:
  uint32_t _internal_id() const;
  void _internal_set_id(uint32_t value);
  public:

  // uint32 reason = 2;
  void clear_reason();
  uint32_t reason() const;
  void set_reason(uint32_t value);
  private:
  uint32_t _internal_reason() const;
  void _internal_set_reason(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:NetworkTest.Result)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint32_t id_;
    uint32_t reason_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_proto_2fNetworkTest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Register

// bytes content = 2;
inline void Register::clear_content() {
  _impl_.content_.ClearToEmpty();
}
inline const std::string& Register::content() const {
  // @@protoc_insertion_point(field_get:NetworkTest.Register.content)
  return _internal_content();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Register::set_content(ArgT0&& arg0, ArgT... args) {
 
 _impl_.content_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:NetworkTest.Register.content)
}
inline std::string* Register::mutable_content() {
  std::string* _s = _internal_mutable_content();
  // @@protoc_insertion_point(field_mutable:NetworkTest.Register.content)
  return _s;
}
inline const std::string& Register::_internal_content() const {
  return _impl_.content_.Get();
}
inline void Register::_internal_set_content(const std::string& value) {
  
  _impl_.content_.Set(value, GetArenaForAllocation());
}
inline std::string* Register::_internal_mutable_content() {
  
  return _impl_.content_.Mutable(GetArenaForAllocation());
}
inline std::string* Register::release_content() {
  // @@protoc_insertion_point(field_release:NetworkTest.Register.content)
  return _impl_.content_.Release();
}
inline void Register::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    
  } else {
    
  }
  _impl_.content_.SetAllocated(content, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.content_.IsDefault()) {
    _impl_.content_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:NetworkTest.Register.content)
}

// -------------------------------------------------------------------

// Query

// uint32 id = 1;
inline void Query::clear_id() {
  _impl_.id_ = 0u;
}
inline uint32_t Query::_internal_id() const {
  return _impl_.id_;
}
inline uint32_t Query::id() const {
  // @@protoc_insertion_point(field_get:NetworkTest.Query.id)
  return _internal_id();
}
inline void Query::_internal_set_id(uint32_t value) {
  
  _impl_.id_ = value;
}
inline void Query::set_id(uint32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:NetworkTest.Query.id)
}

// -------------------------------------------------------------------

// Result

// uint32 id = 1;
inline void Result::clear_id() {
  _impl_.id_ = 0u;
}
inline uint32_t Result::_internal_id() const {
  return _impl_.id_;
}
inline uint32_t Result::id() const {
  // @@protoc_insertion_point(field_get:NetworkTest.Result.id)
  return _internal_id();
}
inline void Result::_internal_set_id(uint32_t value) {
  
  _impl_.id_ = value;
}
inline void Result::set_id(uint32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:NetworkTest.Result.id)
}

// uint32 reason = 2;
inline void Result::clear_reason() {
  _impl_.reason_ = 0u;
}
inline uint32_t Result::_internal_reason() const {
  return _impl_.reason_;
}
inline uint32_t Result::reason() const {
  // @@protoc_insertion_point(field_get:NetworkTest.Result.reason)
  return _internal_reason();
}
inline void Result::_internal_set_reason(uint32_t value) {
  
  _impl_.reason_ = value;
}
inline void Result::set_reason(uint32_t value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:NetworkTest.Result.reason)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace NetworkTest

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_proto_2fNetworkTest_2eproto
