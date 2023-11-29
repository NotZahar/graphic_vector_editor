#ifndef VIEW_H
#define VIEW_H

namespace GVEditor {
    class View {
    public:
        View() = default;
        virtual ~View() = default;

        View(const View&) = delete;
        View& operator=(View&&) = delete;

        virtual void refresh() = 0;
    };
}

#endif // VIEW_H