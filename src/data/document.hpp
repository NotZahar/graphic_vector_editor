#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <memory>
#include <unordered_map>

#include <files/file_service.hpp>

#include "../shapes/shape.hpp"

namespace GVEditor {
    class Document {
    public:
        using FileService = Utility::FileService;

        Document() = delete;
        Document(const FileService::path_t& folderPath, const std::string& fileName);
        ~Document() = default;

        FileService::path_t getFolderPath() const;
        std::string getFileName() const;
        const std::unordered_map<int, std::shared_ptr<Shape>>& getShapes() const;
        void addShape(std::shared_ptr<Shape> shape, const int shapeId);
        void addShape(std::shared_ptr<Shape> shape);
        void removeShape(const int shapeId);

    private:
        const FileService::path_t _folderPath;
        const std::string _fileName;
        std::unordered_map<int, std::shared_ptr<Shape>> _shapes;
    };
}

#endif // DOCUMENT_H