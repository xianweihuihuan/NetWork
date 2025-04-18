// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto/NetworkTest.proto

#include "proto/NetworkTest.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace NetworkTest {
PROTOBUF_CONSTEXPR Register::Register(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.content_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RegisterDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RegisterDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RegisterDefaultTypeInternal() {}
  union {
    Register _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RegisterDefaultTypeInternal _Register_default_instance_;
PROTOBUF_CONSTEXPR Query::Query(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.id_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct QueryDefaultTypeInternal {
  PROTOBUF_CONSTEXPR QueryDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~QueryDefaultTypeInternal() {}
  union {
    Query _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 QueryDefaultTypeInternal _Query_default_instance_;
PROTOBUF_CONSTEXPR Result::Result(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.id_)*/0u
  , /*decltype(_impl_.reason_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ResultDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ResultDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ResultDefaultTypeInternal() {}
  union {
    Result _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ResultDefaultTypeInternal _Result_default_instance_;
}  // namespace NetworkTest
static ::_pb::Metadata file_level_metadata_proto_2fNetworkTest_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_proto_2fNetworkTest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_proto_2fNetworkTest_2eproto = nullptr;

const uint32_t TableStruct_proto_2fNetworkTest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::NetworkTest::Register, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::NetworkTest::Register, _impl_.content_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::NetworkTest::Query, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::NetworkTest::Query, _impl_.id_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::NetworkTest::Result, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::NetworkTest::Result, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::NetworkTest::Result, _impl_.reason_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::NetworkTest::Register)},
  { 7, -1, -1, sizeof(::NetworkTest::Query)},
  { 14, -1, -1, sizeof(::NetworkTest::Result)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::NetworkTest::_Register_default_instance_._instance,
  &::NetworkTest::_Query_default_instance_._instance,
  &::NetworkTest::_Result_default_instance_._instance,
};

const char descriptor_table_protodef_proto_2fNetworkTest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027proto/NetworkTest.proto\022\013NetworkTest\"\033"
  "\n\010Register\022\017\n\007content\030\002 \001(\014\"\023\n\005Query\022\n\n\002"
  "id\030\001 \001(\r\"$\n\006Result\022\n\n\002id\030\001 \001(\r\022\016\n\006reason"
  "\030\002 \001(\r2~\n\002NT\022>\n\016AnswerRegister\022\025.Network"
  "Test.Register\032\023.NetworkTest.Result\"\000\0228\n\013"
  "ResultQuery\022\022.NetworkTest.Query\032\023.Networ"
  "kTest.Result\"\000b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_proto_2fNetworkTest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_proto_2fNetworkTest_2eproto = {
    false, false, 262, descriptor_table_protodef_proto_2fNetworkTest_2eproto,
    "proto/NetworkTest.proto",
    &descriptor_table_proto_2fNetworkTest_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_proto_2fNetworkTest_2eproto::offsets,
    file_level_metadata_proto_2fNetworkTest_2eproto, file_level_enum_descriptors_proto_2fNetworkTest_2eproto,
    file_level_service_descriptors_proto_2fNetworkTest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_proto_2fNetworkTest_2eproto_getter() {
  return &descriptor_table_proto_2fNetworkTest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_proto_2fNetworkTest_2eproto(&descriptor_table_proto_2fNetworkTest_2eproto);
namespace NetworkTest {

// ===================================================================

class Register::_Internal {
 public:
};

Register::Register(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:NetworkTest.Register)
}
Register::Register(const Register& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Register* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.content_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.content_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.content_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_content().empty()) {
    _this->_impl_.content_.Set(from._internal_content(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:NetworkTest.Register)
}

inline void Register::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.content_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.content_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.content_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Register::~Register() {
  // @@protoc_insertion_point(destructor:NetworkTest.Register)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Register::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.content_.Destroy();
}

void Register::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Register::Clear() {
// @@protoc_insertion_point(message_clear_start:NetworkTest.Register)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.content_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Register::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bytes content = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_content();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Register::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:NetworkTest.Register)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes content = 2;
  if (!this->_internal_content().empty()) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_content(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:NetworkTest.Register)
  return target;
}

size_t Register::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:NetworkTest.Register)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes content = 2;
  if (!this->_internal_content().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_content());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Register::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Register::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Register::GetClassData() const { return &_class_data_; }


void Register::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Register*>(&to_msg);
  auto& from = static_cast<const Register&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:NetworkTest.Register)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_content().empty()) {
    _this->_internal_set_content(from._internal_content());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Register::CopyFrom(const Register& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:NetworkTest.Register)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Register::IsInitialized() const {
  return true;
}

void Register::InternalSwap(Register* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.content_, lhs_arena,
      &other->_impl_.content_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Register::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proto_2fNetworkTest_2eproto_getter, &descriptor_table_proto_2fNetworkTest_2eproto_once,
      file_level_metadata_proto_2fNetworkTest_2eproto[0]);
}

// ===================================================================

class Query::_Internal {
 public:
};

Query::Query(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:NetworkTest.Query)
}
Query::Query(const Query& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Query* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.id_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.id_ = from._impl_.id_;
  // @@protoc_insertion_point(copy_constructor:NetworkTest.Query)
}

inline void Query::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.id_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Query::~Query() {
  // @@protoc_insertion_point(destructor:NetworkTest.Query)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Query::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Query::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Query::Clear() {
// @@protoc_insertion_point(message_clear_start:NetworkTest.Query)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.id_ = 0u;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Query::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Query::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:NetworkTest.Query)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:NetworkTest.Query)
  return target;
}

size_t Query::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:NetworkTest.Query)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Query::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Query::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Query::GetClassData() const { return &_class_data_; }


void Query::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Query*>(&to_msg);
  auto& from = static_cast<const Query&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:NetworkTest.Query)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_id() != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Query::CopyFrom(const Query& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:NetworkTest.Query)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Query::IsInitialized() const {
  return true;
}

void Query::InternalSwap(Query* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.id_, other->_impl_.id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Query::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proto_2fNetworkTest_2eproto_getter, &descriptor_table_proto_2fNetworkTest_2eproto_once,
      file_level_metadata_proto_2fNetworkTest_2eproto[1]);
}

// ===================================================================

class Result::_Internal {
 public:
};

Result::Result(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:NetworkTest.Result)
}
Result::Result(const Result& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Result* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.id_){}
    , decltype(_impl_.reason_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.id_, &from._impl_.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.reason_) -
    reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.reason_));
  // @@protoc_insertion_point(copy_constructor:NetworkTest.Result)
}

inline void Result::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.id_){0u}
    , decltype(_impl_.reason_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

Result::~Result() {
  // @@protoc_insertion_point(destructor:NetworkTest.Result)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Result::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Result::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Result::Clear() {
// @@protoc_insertion_point(message_clear_start:NetworkTest.Result)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.reason_) -
      reinterpret_cast<char*>(&_impl_.id_)) + sizeof(_impl_.reason_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Result::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // uint32 reason = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.reason_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Result::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:NetworkTest.Result)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // uint32 reason = 2;
  if (this->_internal_reason() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_reason(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:NetworkTest.Result)
  return target;
}

size_t Result::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:NetworkTest.Result)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // uint32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_id());
  }

  // uint32 reason = 2;
  if (this->_internal_reason() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_reason());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Result::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Result::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Result::GetClassData() const { return &_class_data_; }


void Result::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Result*>(&to_msg);
  auto& from = static_cast<const Result&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:NetworkTest.Result)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_id() != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  if (from._internal_reason() != 0) {
    _this->_internal_set_reason(from._internal_reason());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Result::CopyFrom(const Result& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:NetworkTest.Result)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Result::IsInitialized() const {
  return true;
}

void Result::InternalSwap(Result* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Result, _impl_.reason_)
      + sizeof(Result::_impl_.reason_)
      - PROTOBUF_FIELD_OFFSET(Result, _impl_.id_)>(
          reinterpret_cast<char*>(&_impl_.id_),
          reinterpret_cast<char*>(&other->_impl_.id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Result::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_proto_2fNetworkTest_2eproto_getter, &descriptor_table_proto_2fNetworkTest_2eproto_once,
      file_level_metadata_proto_2fNetworkTest_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace NetworkTest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::NetworkTest::Register*
Arena::CreateMaybeMessage< ::NetworkTest::Register >(Arena* arena) {
  return Arena::CreateMessageInternal< ::NetworkTest::Register >(arena);
}
template<> PROTOBUF_NOINLINE ::NetworkTest::Query*
Arena::CreateMaybeMessage< ::NetworkTest::Query >(Arena* arena) {
  return Arena::CreateMessageInternal< ::NetworkTest::Query >(arena);
}
template<> PROTOBUF_NOINLINE ::NetworkTest::Result*
Arena::CreateMaybeMessage< ::NetworkTest::Result >(Arena* arena) {
  return Arena::CreateMessageInternal< ::NetworkTest::Result >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
