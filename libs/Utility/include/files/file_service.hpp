#ifndef FILE_SERVICE_H
#define FILE_SERVICE_H

#include <optional>
#include <string>
#include <filesystem>

namespace Utility {
    class FileService {
    public:
        using path_t = std::filesystem::path;
        using byte_t = char;
        using bytes_t = std::basic_string<char>;

        FileService() = default;
        ~FileService() = default;

        static bool createFile(const path_t& folderPath, const std::string& fileName);
        static std::optional<bytes_t> readFromFile(const path_t& filePath);
        static bool writeToFile(const path_t& filePath, const bytes_t& bytes);
    };
}

#endif // FILE_SERVICE_H