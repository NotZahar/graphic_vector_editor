#ifndef SERIALIZER_H
#define SERIALIZER_H

namespace GVEditor {
    template <class Data, class SerializedData>
    class Serializer {
    public:
        Serializer() = default;
        virtual ~Serializer() = default;

        virtual SerializedData serialize(const Data& data) = 0;
        virtual Data deserialize(const SerializedData& serializedData) = 0;
    };
}

#endif // SERIALIZER_H