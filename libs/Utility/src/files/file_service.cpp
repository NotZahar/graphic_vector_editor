#include "../include/files/file_service.hpp"

namespace Utility {
    bool FileService::createFile(const path_t&, const std::string&) {
        // impl
        return true;
    }

    std::optional<FileService::bytes_t> FileService::readFromFile(const path_t&) {
        // impl
        return {};
    }

    bool FileService::writeToFile(const path_t&, const bytes_t&) {
        // impl
        return true;
    }

    FileService::path_t FileService::makePath(const path_t&, const std::string&) {
        // impl
        return {};
    }
}