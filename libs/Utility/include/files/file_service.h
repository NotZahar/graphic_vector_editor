#ifndef FILE_SERVICE_H
#define FILE_SERVICE_H

#include <cstddef>
#include <string>
#include <memory>
#include <array>

namespace Utility {
    class FileService {
    public:
        using byte = char;
        using bytes = std::string;

        FileService() = default;
        ~FileService() = default;

        static bool createFile(const std::string& folderPath, const std::string& fileName);
        static bool writeToFile(const std::string& filePath, const bytes& bytes);
    };
}

#endif // FILE_SERVICE_H