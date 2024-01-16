#ifndef EDIT_MODEL_H
#define EDIT_MODEL_H

#include <map>
#include <memory>
#include <string>

#include "window_model.hpp"
#include "../data/document.hpp"

namespace GVEditor {
    class EditModel : public WindowModel {
    public:
        EditModel();
        ~EditModel() override = default;

        enum menuItem : unsigned int {
            createDoc,
            importDoc,
            exportDoc,
            createShape,
            removeShape,
            exit
        };
        
        const std::map<menuItem, std::string>& getMenu() const;
        std::shared_ptr<Document> getDocument();
        void setMenu(const std::map<menuItem, std::string>& menu);
        void setDocument(std::shared_ptr<Document> document);
    
    private:
        std::map<menuItem, std::string> _menu;
        std::shared_ptr<Document> _document;
    };
}

#endif // EDIT_MODEL_H