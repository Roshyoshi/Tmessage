// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message.proto

#include "message.pb.h"

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

PROTOBUF_CONSTEXPR TextMessage::TextMessage(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.message_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.sender_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.receiver_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct TextMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TextMessageDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TextMessageDefaultTypeInternal() {}
  union {
    TextMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TextMessageDefaultTypeInternal _TextMessage_default_instance_;
PROTOBUF_CONSTEXPR Request::Request(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.instruction_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.message_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RequestDefaultTypeInternal() {}
  union {
    Request _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RequestDefaultTypeInternal _Request_default_instance_;
static ::_pb::Metadata file_level_metadata_message_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_message_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_message_2eproto = nullptr;

const uint32_t TableStruct_message_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::TextMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::TextMessage, _impl_.message_),
  PROTOBUF_FIELD_OFFSET(::TextMessage, _impl_.sender_),
  PROTOBUF_FIELD_OFFSET(::TextMessage, _impl_.receiver_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Request, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Request, _impl_.instruction_),
  PROTOBUF_FIELD_OFFSET(::Request, _impl_.message_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::TextMessage)},
  { 9, -1, -1, sizeof(::Request)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_TextMessage_default_instance_._instance,
  &::_Request_default_instance_._instance,
};

const char descriptor_table_protodef_message_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rmessage.proto\"@\n\013TextMessage\022\017\n\007messag"
  "e\030\001 \001(\t\022\016\n\006sender\030\002 \001(\t\022\020\n\010receiver\030\003 \001("
  "\t\"=\n\007Request\022\023\n\013instruction\030\001 \001(\t\022\035\n\007mes"
  "sage\030\002 \001(\0132\014.TextMessageb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_message_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_message_2eproto = {
    false, false, 152, descriptor_table_protodef_message_2eproto,
    "message.proto",
    &descriptor_table_message_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_message_2eproto::offsets,
    file_level_metadata_message_2eproto, file_level_enum_descriptors_message_2eproto,
    file_level_service_descriptors_message_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_message_2eproto_getter() {
  return &descriptor_table_message_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_message_2eproto(&descriptor_table_message_2eproto);

// ===================================================================

class TextMessage::_Internal {
 public:
};

TextMessage::TextMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:TextMessage)
}
TextMessage::TextMessage(const TextMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  TextMessage* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.message_){}
    , decltype(_impl_.sender_){}
    , decltype(_impl_.receiver_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.message_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_message().empty()) {
    _this->_impl_.message_.Set(from._internal_message(), 
      _this->GetArenaForAllocation());
  }
  _impl_.sender_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sender_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_sender().empty()) {
    _this->_impl_.sender_.Set(from._internal_sender(), 
      _this->GetArenaForAllocation());
  }
  _impl_.receiver_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.receiver_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_receiver().empty()) {
    _this->_impl_.receiver_.Set(from._internal_receiver(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:TextMessage)
}

inline void TextMessage::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.message_){}
    , decltype(_impl_.sender_){}
    , decltype(_impl_.receiver_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.message_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.message_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.sender_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.sender_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.receiver_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.receiver_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TextMessage::~TextMessage() {
  // @@protoc_insertion_point(destructor:TextMessage)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TextMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.message_.Destroy();
  _impl_.sender_.Destroy();
  _impl_.receiver_.Destroy();
}

void TextMessage::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void TextMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:TextMessage)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_.ClearToEmpty();
  _impl_.sender_.ClearToEmpty();
  _impl_.receiver_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TextMessage::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_message();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "TextMessage.message"));
        } else
          goto handle_unusual;
        continue;
      // string sender = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_sender();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "TextMessage.sender"));
        } else
          goto handle_unusual;
        continue;
      // string receiver = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_receiver();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "TextMessage.receiver"));
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

uint8_t* TextMessage::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:TextMessage)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_message().data(), static_cast<int>(this->_internal_message().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TextMessage.message");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_message(), target);
  }

  // string sender = 2;
  if (!this->_internal_sender().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_sender().data(), static_cast<int>(this->_internal_sender().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TextMessage.sender");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_sender(), target);
  }

  // string receiver = 3;
  if (!this->_internal_receiver().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_receiver().data(), static_cast<int>(this->_internal_receiver().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "TextMessage.receiver");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_receiver(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:TextMessage)
  return target;
}

size_t TextMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:TextMessage)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string message = 1;
  if (!this->_internal_message().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_message());
  }

  // string sender = 2;
  if (!this->_internal_sender().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_sender());
  }

  // string receiver = 3;
  if (!this->_internal_receiver().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_receiver());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TextMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    TextMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TextMessage::GetClassData() const { return &_class_data_; }


void TextMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<TextMessage*>(&to_msg);
  auto& from = static_cast<const TextMessage&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:TextMessage)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_message().empty()) {
    _this->_internal_set_message(from._internal_message());
  }
  if (!from._internal_sender().empty()) {
    _this->_internal_set_sender(from._internal_sender());
  }
  if (!from._internal_receiver().empty()) {
    _this->_internal_set_receiver(from._internal_receiver());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void TextMessage::CopyFrom(const TextMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:TextMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TextMessage::IsInitialized() const {
  return true;
}

void TextMessage::InternalSwap(TextMessage* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.message_, lhs_arena,
      &other->_impl_.message_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.sender_, lhs_arena,
      &other->_impl_.sender_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.receiver_, lhs_arena,
      &other->_impl_.receiver_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata TextMessage::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_message_2eproto_getter, &descriptor_table_message_2eproto_once,
      file_level_metadata_message_2eproto[0]);
}

// ===================================================================

class Request::_Internal {
 public:
  static const ::TextMessage& message(const Request* msg);
};

const ::TextMessage&
Request::_Internal::message(const Request* msg) {
  return *msg->_impl_.message_;
}
Request::Request(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Request)
}
Request::Request(const Request& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Request* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.instruction_){}
    , decltype(_impl_.message_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.instruction_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.instruction_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_instruction().empty()) {
    _this->_impl_.instruction_.Set(from._internal_instruction(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_message()) {
    _this->_impl_.message_ = new ::TextMessage(*from._impl_.message_);
  }
  // @@protoc_insertion_point(copy_constructor:Request)
}

inline void Request::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.instruction_){}
    , decltype(_impl_.message_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.instruction_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.instruction_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Request::~Request() {
  // @@protoc_insertion_point(destructor:Request)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Request::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.instruction_.Destroy();
  if (this != internal_default_instance()) delete _impl_.message_;
}

void Request::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Request::Clear() {
// @@protoc_insertion_point(message_clear_start:Request)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.instruction_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.message_ != nullptr) {
    delete _impl_.message_;
  }
  _impl_.message_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Request::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string instruction = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_instruction();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "Request.instruction"));
        } else
          goto handle_unusual;
        continue;
      // .TextMessage message = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_message(), ptr);
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

uint8_t* Request::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Request)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string instruction = 1;
  if (!this->_internal_instruction().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_instruction().data(), static_cast<int>(this->_internal_instruction().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Request.instruction");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_instruction(), target);
  }

  // .TextMessage message = 2;
  if (this->_internal_has_message()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::message(this),
        _Internal::message(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Request)
  return target;
}

size_t Request::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Request)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string instruction = 1;
  if (!this->_internal_instruction().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_instruction());
  }

  // .TextMessage message = 2;
  if (this->_internal_has_message()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.message_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Request::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Request::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Request::GetClassData() const { return &_class_data_; }


void Request::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Request*>(&to_msg);
  auto& from = static_cast<const Request&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Request)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_instruction().empty()) {
    _this->_internal_set_instruction(from._internal_instruction());
  }
  if (from._internal_has_message()) {
    _this->_internal_mutable_message()->::TextMessage::MergeFrom(
        from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Request::CopyFrom(const Request& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Request)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Request::IsInitialized() const {
  return true;
}

void Request::InternalSwap(Request* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.instruction_, lhs_arena,
      &other->_impl_.instruction_, rhs_arena
  );
  swap(_impl_.message_, other->_impl_.message_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Request::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_message_2eproto_getter, &descriptor_table_message_2eproto_once,
      file_level_metadata_message_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::TextMessage*
Arena::CreateMaybeMessage< ::TextMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::TextMessage >(arena);
}
template<> PROTOBUF_NOINLINE ::Request*
Arena::CreateMaybeMessage< ::Request >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Request >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
