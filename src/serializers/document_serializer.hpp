#ifndef DOCUMENT_SERIALIZER_H
#define DOCUMENT_SERIALIZER_H

#include <files/file_service.hpp>
#include <memory>

#include "serializer.hpp"
#include "../data/document.hpp"

namespace GVEditor {
    class DocumentSerializer : public Serializer<std::shared_ptr<Document>, Utility::FileService::bytes_t> {
    public:
        DocumentSerializer() = default;
        ~DocumentSerializer() override = default;

        Utility::FileService::bytes_t serialize(const std::shared_ptr<Document>& data) override;
        std::shared_ptr<Document> deserialize(const Utility::FileService::bytes_t& serializedData) override;
    };
}

#endif // DOCUMENT_SERIALIZER_H