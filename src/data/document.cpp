#include "document.hpp"

#include <random/random.hpp>

namespace GVEditor {
    Document::Document(const FileService::path_t& folderPath, const std::string& fileName)
        : _folderPath(folderPath),
          _fileName(fileName),
          _shapes()
    {
        // impl
    }

    Document::FileService::path_t Document::getFolderPath() const {
        return _folderPath;
    }

    std::string Document::getFileName() const {
        return _fileName;
    }
    
    const std::unordered_map<int, std::shared_ptr<Shape>>& Document::getShapes() const {
        return _shapes;
    }

    void Document::addShape(std::shared_ptr<Shape> shape, const int shapeId) {
        // impl
        _shapes.insert({ shapeId, shape });
    }

    void Document::addShape(std::shared_ptr<Shape> shape) {
        // impl
        _shapes.insert({ Utility::Random::uuid(), shape });
    }
    
    void Document::removeShape(const int shapeId) {
        // impl
        _shapes.erase(shapeId);
    }
}