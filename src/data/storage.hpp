#ifndef STORAGE_H
#define STORAGE_H

#include <files/file_service.hpp>

namespace GVEditor {
    class Storage final {
    public:
        using FileService = Utility::FileService;

        Storage(const Storage&) = delete;
        Storage(Storage&&) = delete;
        Storage& operator=(Storage const&) = delete;
        Storage& operator=(Storage &&) = delete;

        static Storage& instance();
        FileService::path_t getCurrentFolderPath();
        std::string getCurrentFileName(); 
        bool getCurrentNewDocFlag();
        void setCurrentFolderPath(const FileService::path_t& path);
        void setCurrentFileName(const std::string& fileName); 
        void setCurrentNewDocFlag(bool newDocFlag);

    private:
        Storage();
        ~Storage() = default;

        FileService::path_t _currentFolderPath;
        std::string _currentFileName; 
        bool _currentNewDocFlag;
    };
}

#endif // STORAGE_H