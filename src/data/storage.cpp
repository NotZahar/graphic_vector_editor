#include "storage.hpp"

namespace GVEditor {
    Storage::Storage() {}

    Storage& Storage::instance() {
        static Storage instance;
        return instance;
    }

    Storage::FileService::path_t Storage::getCurrentFolderPath() {
        return _currentFolderPath;
    }

    std::string Storage::getCurrentFileName() {
        return _currentFileName;
    }

    bool Storage::getCurrentNewDocFlag() {
        return _currentNewDocFlag;
    }

    void Storage::setCurrentFolderPath(const FileService::path_t& path) {
        _currentFolderPath = path;
    }

    void Storage::setCurrentFileName(const std::string& fileName) {
        _currentFileName = fileName;
    } 
    
    void Storage::setCurrentNewDocFlag(bool newDocFlag) {
        _currentNewDocFlag = newDocFlag;
    }
}
