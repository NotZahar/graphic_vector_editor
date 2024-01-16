#include "document_serializer.hpp"

namespace GVEditor {
    Utility::FileService::bytes_t DocumentSerializer::serialize(const std::shared_ptr<Document>&) {
        // impl
        return {};
    }

    std::shared_ptr<Document> DocumentSerializer::deserialize(const Utility::FileService::bytes_t&) {
        // impl
        return std::make_shared<Document>("", ""); 
    }
}